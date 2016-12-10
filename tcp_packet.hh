typedef enum {
	DATA = 1,
	ACK = 2,
	SYN = 4,
	FIN = 8
} tcp_types;
// SYN + ACK represents SYN_ACK
struct tcp_Header{
     tcp_types type; 
	 uint16_t sequence;
	 uint16_t ack_num;
	 uint16_t source;
	 uint16_t destination;
     uint32_t size;
	 uint32_t source_ip; // these are not real header data in tcp header
	 uint32_t dest_ip;   // they are used for passing argument to ip layer
};