#ifndef VOIPMONITOR_DEFINE_H
#define VOIPMONITOR_DEFINE_H


#define RTPSENSOR_VERSION "23.5"
#define NAT

#define FORMAT_WAV	1
#define FORMAT_OGG	2
#define REGISTER_CLEAN_PERIOD 60	// clean register table for expired items every 60 seconds

#define TYPE_SIP 1
#define TYPE_RTP 2
#define TYPE_RTCP 3
#define TYPE_SKINNY 4
#define TYPE_MGCP 5

#define STORE_PROC_ID_CDR_1 11
#define STORE_PROC_ID_MESSAGE_1 21
#define STORE_PROC_ID_CLEANSPOOL 41
#define STORE_PROC_ID_CLEANSPOOL_SERVICE 43
#define STORE_PROC_ID_REGISTER_1 51
#define STORE_PROC_ID_SAVE_PACKET_SQL 61
#define STORE_PROC_ID_HTTP_1 71
#define STORE_PROC_ID_WEBRTC_1 81
#define STORE_PROC_ID_CACHE_NUMBERS_LOCATIONS 91
#define STORE_PROC_ID_FRAUD_ALERT_INFO 92
#define STORE_PROC_ID_LOG_SENSOR 93
#define STORE_PROC_ID_SS7 94
#define STORE_PROC_ID_OTHER 99
#define STORE_PROC_ID_IPACC_1 101
#define STORE_PROC_ID_IPACC_AGR_INTERVAL 111
#define STORE_PROC_ID_IPACC_AGR_HOUR 112
#define STORE_PROC_ID_IPACC_AGR_DAY 113
#define STORE_PROC_ID_IPACC_AGR2_HOUR_1 121

#define GRAPH_DELIMITER 4294967295
#define GRAPH_VERSION 4294967293
#define GRAPH_MARK 4294967293 
#define GRAPH_MOS 4294967292
#define GRAPH_SILENCE 4294967291
#define GRAPH_EVENT 4294967290

#define SNIFFER_INLINE_FUNCTIONS true

#define DEBUG_SYNC_PCAP_BLOCK_STORE false
#define DEBUG_SYNC_PCAP_BLOCK_STORE_LOCK_LENGTH 5000
#define DEBUG_SYNC_PCAP_BLOCK_STORE_FLAGS_LENGTH 30
#define DEBUG_SYNC_PCAP_BLOCK_STORE_ABORT_IF_ERROR false

#define DEBUG_QUEUE_RTP_THREAD false

#define HEAPSAFE true

#define RQUEUE_SAFE true

#define TAR_PROF false

#define MAX_PROCESS_RTP_PACKET_HASH_NEXT_THREADS 4
#define MAX_PROCESS_RTP_PACKET_THREADS 4

#define USE_PACKET_NUMBER false

#define CAST_OBJ_TO_VOID(obj) ((void*)(obj))


#endif //VOIPMONITOR_DEFINE_H
