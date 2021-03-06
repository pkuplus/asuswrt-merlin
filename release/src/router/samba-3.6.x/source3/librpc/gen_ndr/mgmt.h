/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_mgmt
#define _PIDL_HEADER_mgmt

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/misc.h"
#ifndef _HEADER_mgmt
#define _HEADER_mgmt

#define MGMT_STATS_CALLS_IN	( 0 )
#define MGMT_STATS_CALLS_OUT	( 1 )
#define MGMT_STATS_PKTS_IN	( 2 )
#define MGMT_STATS_PKTS_OUT	( 3 )
#define MGMT_STATS_ARRAY_MAX_SIZE	( 4 )
struct ndr_syntax_id_p {
	struct ndr_syntax_id *id;/* [unique] */
};

struct rpc_if_id_vector_t {
	uint32_t count;
	struct ndr_syntax_id_p *if_id;/* [size_is(count)] */
};

struct mgmt_statistics {
	uint32_t count;
	uint32_t *statistics;/* [size_is(count)] */
};


struct mgmt_inq_if_ids {
	struct {
		struct rpc_if_id_vector_t **if_id_vector;/* [ref] */
		WERROR result;
	} out;

};


struct mgmt_inq_stats {
	struct {
		uint32_t max_count;
		uint32_t unknown;
	} in;

	struct {
		struct mgmt_statistics *statistics;/* [ref] */
		WERROR result;
	} out;

};


struct mgmt_is_server_listening {
	struct {
		uint32_t *status;/* [ref] */
		uint32_t result;
	} out;

};


struct mgmt_stop_server_listening {
	struct {
		WERROR result;
	} out;

};


struct mgmt_inq_princ_name {
	struct {
		uint32_t authn_proto;
		uint32_t princ_name_size;
	} in;

	struct {
		const char *princ_name;/* [size_is(princ_name_size),charset(DOS)] */
		WERROR result;
	} out;

};

#endif /* _HEADER_mgmt */
#endif /* _PIDL_HEADER_mgmt */
