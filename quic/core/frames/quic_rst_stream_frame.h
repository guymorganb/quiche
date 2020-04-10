// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef QUICHE_QUIC_CORE_FRAMES_QUIC_RST_STREAM_FRAME_H_
#define QUICHE_QUIC_CORE_FRAMES_QUIC_RST_STREAM_FRAME_H_

#include <ostream>

#include "net/third_party/quiche/src/quic/core/quic_error_codes.h"
#include "net/third_party/quiche/src/quic/core/quic_types.h"

namespace quic {

struct QUIC_EXPORT_PRIVATE QuicRstStreamFrame {
  QuicRstStreamFrame();
  QuicRstStreamFrame(QuicControlFrameId control_frame_id,
                     QuicStreamId stream_id,
                     QuicRstStreamErrorCode error_code,
                     QuicStreamOffset bytes_written);

  friend QUIC_EXPORT_PRIVATE std::ostream& operator<<(
      std::ostream& os,
      const QuicRstStreamFrame& r);

  // A unique identifier of this control frame. 0 when this frame is received,
  // and non-zero when sent.
  QuicControlFrameId control_frame_id;

  QuicStreamId stream_id;

  // Used for Google QUIC only.
  // TODO(b/124216424): Consider using meaningful values when using IETF QUIC.
  QuicRstStreamErrorCode error_code;

  // Used for IETF QUIC only.
  uint64_t ietf_error_code;

  // Used to update flow control windows. On termination of a stream, both
  // endpoints must inform the peer of the number of bytes they have sent on
  // that stream. This can be done through normal termination (data packet with
  // FIN) or through a RST.
  QuicStreamOffset byte_offset;
};

}  // namespace quic

#endif  // QUICHE_QUIC_CORE_FRAMES_QUIC_RST_STREAM_FRAME_H_
