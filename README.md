# Kawaii 0RTT

Kawaii 0rtt is currently in a proof-of-concept phase, utilizing MsQuic as a transport layer.

The long-term objective is to replace MsQuic with a custom reliable UDP-based protocol designed to support true 0-RTT (zero round-trip time) communication. Unlike QUIC, this protocol aims to eliminate the traditional concepts of handshakes and session establishment entirely, streamlining connection setup to achieve immediate data transmission from the first packet.
