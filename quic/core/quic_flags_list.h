// Copyright (c) 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by the QUICHE Copybara export script.

#ifdef QUIC_FLAG

QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_set_burst_token, false)

QUIC_FLAG(FLAGS_quic_restart_flag_quic_offload_pacing_to_usps2, false)
// A testonly reloadable flag that will always default to false.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_testonly_default_false, false)
// A testonly reloadable flag that will always default to true.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_testonly_default_true, true)
// A testonly restart flag that will always default to false.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_testonly_default_false, false)
// A testonly restart flag that will always default to true.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_testonly_default_true, true)
// Donot check amplification limit if there is available pending_timer_transmission_count.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_donot_check_amplification_limit_with_pending_timer_credit, true)
// If bytes in flight has dipped below 1.25*MaxBW in the last round, do not exit PROBE_UP due to excess queue buildup.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr2_no_probe_up_exit_if_no_queue, true)
// If true, 1) NEW_TOKENs sent from a IETF QUIC session will include the cached network parameters proto, 2) A min_rtt received from a validated token will be used to set the initial rtt, 3) Enable bandwidth resumption for IETF QUIC when connection options BWRE or BWMX exists.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_add_cached_network_parameters_to_address_token2, true)
// If true, QUIC will default enable MTU discovery at server, with a target of 1450 bytes.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_mtu_discovery_at_server, false)
// If true, QpackEncoder will stop emitting instructions on the encoder stream if amount of buffered data exceeds a hardcoded limit.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_limit_encoder_stream_buffering, true)
// If true, QuicGsoBatchWriter will support release time if it is available and the process has the permission to do so.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_support_release_time_for_gso, false)
// If true, TlsServerHandshaker will be able to 1) request client cert, and 2) verify the client cert in the virtual method TlsServerHandshaker::VerifyCertChain.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_tls_server_support_client_cert, true)
// If true, abort async QPACK header decompression in QuicSpdyStream::Reset() and in QuicSpdyStream::OnStreamReset().
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_abort_qpack_on_stream_reset, true)
// If true, accept empty crypto frame.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_accept_empty_crypto_frame, true)
// If true, ack frequency frame can be sent from server to client.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_can_send_ack_frequency, true)
// If true, allow client to enable BBRv2 on server via connection option \'B2ON\'.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_allow_client_enabled_bbr_v2, false)
// If true, change QuicCryptoServerStream::FinishProcessingHandshakeMessageAfterProcessClientHello to noop if connection is disconnected.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_crypto_noop_if_disconnected_after_process_chlo, true)
// If true, clear undecryptable packets on handshake complete.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_clear_undecryptable_packets_on_handshake_complete, true)
// If true, close read side but not write side in QuicSpdyStream::OnStreamReset().
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_fix_on_stream_reset, true)
// If true, default on PTO which unifies TLP + RTO loss recovery.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_on_pto, false)
// If true, default-enable 5RTO blachole detection.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_enable_5rto_blackhole_detection2, true)
// If true, delay block allocation in QuicStreamSequencerBuffer until there is actually new data available.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_delay_sequencer_buffer_allocation_until_new_data, true)
// If true, disable QUIC version Q043.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_q043, false)
// If true, disable QUIC version Q046.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_q046, false)
// If true, disable QUIC version Q050.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_q050, false)
// If true, disable QUIC version h3 (RFCv1).
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_rfcv1, false)
// If true, disable QUIC version h3-29.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_version_draft_29, false)
// If true, disable blackhole detection on server side.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_disable_server_blackhole_detection, false)
// If true, discard INITIAL packet if the key has been dropped.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_discard_initial_packet_with_key_dropped, true)
// If true, do not bundle 2nd ACK with connection close if there is an ACK queued.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_single_ack_in_packet2, false)
// If true, do not call ProofSourceHandle::SelectCertificate if QUIC connection has disconnected.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_tls_no_select_cert_if_disconnected, true)
// If true, do not count bytes sent/received on the alternative path into the bytes sent/received on the default path.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_count_bytes_on_alternative_path_seperately, true)
// If true, do not use the gQUIC common certificate set for certificate compression.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_no_common_cert_set, true)
// If true, drop unsent PATH_RESPONSEs and rely on peer\'s retry.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_drop_unsent_path_response, true)
// If true, enable server retransmittable on wire PING.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_server_on_wire_ping, true)
// If true, flush pending frames as well as pending padding bytes on connection migration.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_flush_pending_frames_and_padding_bytes_on_migration, true)
// If true, ietf connection migration is no longer conditioned on connection option RVCM.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_remove_connection_migration_connection_option, false)
// If true, ignore peer_max_ack_delay during handshake.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_ignore_peer_max_ack_delay_during_handshake, true)
// If true, include stream information in idle timeout connection close detail.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_add_stream_info_to_idle_close_detail, true)
// If true, pass the received PATH_RESPONSE payload to path validator to move forward the path validation.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_pass_path_response_to_validator, true)
// If true, quic server will send ENABLE_CONNECT_PROTOCOL setting and and endpoint will validate required request/response headers and extended CONNECT mechanism and update code counts of valid/invalid headers.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_verify_request_headers_2, true)
// If true, record addresses that server has sent reset to recently, and do not send reset if the address lives in the set.
QUIC_FLAG(FLAGS_quic_restart_flag_quic_use_recent_reset_addresses, true)
// If true, reject or send error response code upon receiving invalid request or response headers. This flag depends on --gfe2_reloadable_flag_quic_verify_request_headers_2.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_act_upon_invalid_header, false)
// If true, require handshake confirmation for QUIC connections, functionally disabling 0-rtt handshakes.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_require_handshake_confirmation, false)
// If true, reset per packet state before processing undecryptable packets.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_reset_per_packet_state_for_undecryptable_packets, true)
// If true, send PATH_RESPONSE upon receiving PATH_CHALLENGE regardless of perspective. --gfe2_reloadable_flag_quic_start_peer_migration_earlier has to be true before turn on this flag.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_send_path_response2, true)
// If true, server proactively retires client issued connection ID on reverse path validation failure. 
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_retire_cid_on_reverse_path_validation_failure, false)
// If true, set burst token to 2 in cwnd bootstrapping experiment.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_conservative_bursts, false)
// If true, stop resetting ideal_next_packet_send_time_ in pacing sender.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_donot_reset_ideal_next_packet_send_time, false)
// If true, suppress crypto data write in mid of packet processing.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_suppress_write_mid_packet_processing, true)
// If true, use BBRv2 as the default congestion controller. Takes precedence over --quic_default_to_bbr.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_to_bbr_v2, false)
// If true, use max(max_bw, send_rate) as the estimated bandwidth in QUIC\'s MaxAckHeightTracker.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr_use_send_rate_in_max_ack_height_tracker, true)
// If true, use new connection ID in connection migration.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_connection_migration_use_new_cid_v2, true)
// If true, uses conservative cwnd gain and pacing gain when cwnd gets bootstrapped.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_conservative_cwnd_and_pacing_gains, false)
// If true, validate that peer owns the new address once the server detects peer migration or is probed from that address, and also apply anti-amplification limit while sending to that address.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_server_reverse_validate_new_path3, true)
// If true, when client attempts TLS resumption, use token in session_cache_ instead of cached_states_ in QuicCryptoClientConfig.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_tls_use_token_in_session_cache, true)
// When receiving STOP_SENDING, send a RESET_STREAM with a matching error code.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_match_ietf_reset_code, true)
// When the flag is true, exit STARTUP after the same number of loss events as PROBE_UP.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr2_startup_probe_up_loss_events, true)
// When true, QUIC will both send and validate the version_information transport parameter.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_version_information, true)
// When true, defaults to BBR congestion control instead of Cubic.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_default_to_bbr, false)
// When true, prevents QUIC\'s PacingSender from generating bursts when the congestion controller is CWND limited and not pacing limited.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_fix_pacing_sender_bursts, true)
// When true, set the initial congestion control window from connection options in QuicSentPacketManager rather than TcpCubicSenderBytes.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_unified_iw_options, true)
// When true, support draft-ietf-quic-v2-01
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_enable_version_2_draft_01, false)
// When true, the B203 connection option causes the Bbr2Sender to ignore inflight_hi during PROBE_UP and increase it when the bytes delivered without loss are higher.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr2_ignore_inflight_hi_in_probe_up, true)
// When true, the B205 connection option enables extra acked in STARTUP, and B204 adds new logic to decrease it whenever max bandwidth increases.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr2_startup_extra_acked, true)
// When true, the B207 connection option causes BBR2 to exit STARTUP if a persistent queue of 2*BDP has existed for the entire round.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr2_exit_startup_on_persistent_queue2, true)
// When true, the BBQ0 connection option causes QUIC BBR2 to add bytes_acked to probe_up_acked if the connection hasn\'t been app-limited since inflight_hi was utilized.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr2_add_bytes_acked_after_inflight_hi_limited, true)
// When true, the BBR4 copt sets the extra_acked window to 20 RTTs and BBR5 sets it to 40 RTTs.
QUIC_FLAG(FLAGS_quic_reloadable_flag_quic_bbr2_extra_acked_window, true)

#endif

