#ifndef QUICHE_HTTP2_ADAPTER_OGHTTP2_ADAPTER_H_
#define QUICHE_HTTP2_ADAPTER_OGHTTP2_ADAPTER_H_

#include <memory>

#include "http2/adapter/http2_adapter.h"
#include "http2/adapter/http2_session.h"
#include "http2/adapter/oghttp2_session.h"

namespace http2 {
namespace adapter {

class OgHttp2Adapter : public Http2Adapter {
 public:
  using Options = OgHttp2Session::Options;
  static std::unique_ptr<OgHttp2Adapter> Create(Http2VisitorInterface& visitor,
                                                Options options);

  ~OgHttp2Adapter();

  // From Http2Adapter.
  bool IsServerSession() const override;
  ssize_t ProcessBytes(absl::string_view bytes) override;
  void SubmitSettings(absl::Span<const Http2Setting> settings) override;
  void SubmitPriorityForStream(Http2StreamId stream_id,
                               Http2StreamId parent_stream_id,
                               int weight,
                               bool exclusive) override;
  void SubmitPing(Http2PingId ping_id) override;
  void SubmitShutdownNotice() override;
  void SubmitGoAway(Http2StreamId last_accepted_stream_id,
                    Http2ErrorCode error_code,
                    absl::string_view opaque_data) override;
  void SubmitWindowUpdate(Http2StreamId stream_id,
                          int window_increment) override;
  void SubmitMetadata(Http2StreamId stream_id, bool fin) override;
  void Send() override;
  int GetSendWindowSize() const override;
  int GetStreamReceiveWindowSize(Http2StreamId stream_id) const override;
  int GetReceiveWindowSize() const override;
  Http2StreamId GetHighestReceivedStreamId() const override;
  void MarkDataConsumedForStream(Http2StreamId stream_id,
                                 size_t num_bytes) override;
  void SubmitRst(Http2StreamId stream_id, Http2ErrorCode error_code) override;
  int32_t SubmitRequest(absl::Span<const Header> headers,
                        DataFrameSource* data_source,
                        void* user_data) override;
  int32_t SubmitResponse(Http2StreamId stream_id,
                         absl::Span<const Header> headers,
                         DataFrameSource* data_source) override;

  int SubmitTrailer(Http2StreamId stream_id,
                    absl::Span<const Header> trailers) override;

  void SetStreamUserData(Http2StreamId stream_id, void* user_data) override;
  void* GetStreamUserData(Http2StreamId stream_id) override;
  bool ResumeStream(Http2StreamId stream_id) override;

  const Http2Session& session() const;

 private:
  OgHttp2Adapter(Http2VisitorInterface& visitor, Options options);

  std::unique_ptr<OgHttp2Session> session_;
};

}  // namespace adapter
}  // namespace http2

#endif  // QUICHE_HTTP2_ADAPTER_OGHTTP2_ADAPTER_H_
