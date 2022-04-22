/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_TrafficControlRequest_H_
#define	_TrafficControlRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "TrafficControlRequestV01.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TrafficControlRequest_PR {
	TrafficControlRequest_PR_NOTHING,	/* No components present */
	TrafficControlRequest_PR_reserved,
	TrafficControlRequest_PR_tcrV01
	/* Extensions may appear below */
	
} TrafficControlRequest_PR;

/* TrafficControlRequest */
typedef struct TrafficControlRequest {
	TrafficControlRequest_PR present;
	union TrafficControlRequest_u {
		NULL_t	 reserved;
		TrafficControlRequestV01_t	 tcrV01;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficControlRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficControlRequest;
extern asn_CHOICE_specifics_t asn_SPC_TrafficControlRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_TrafficControlRequest_1[2];
extern asn_per_constraints_t asn_PER_type_TrafficControlRequest_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficControlRequest_H_ */
#include <asn_internal.h>
