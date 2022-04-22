/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_MovementEventList_H_
#define	_MovementEventList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MovementEvent;

/* MovementEventList */
typedef struct MovementEventList {
	A_SEQUENCE_OF(struct MovementEvent) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MovementEventList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MovementEventList;
extern asn_SET_OF_specifics_t asn_SPC_MovementEventList_specs_1;
extern asn_TYPE_member_t asn_MBR_MovementEventList_1[1];
extern asn_per_constraints_t asn_PER_type_MovementEventList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MovementEvent.h"

#endif	/* _MovementEventList_H_ */
#include <asn_internal.h>
