/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_Node_LL_44B_H_
#define	_Node_LL_44B_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OffsetLL-B22.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Node-LL-44B */
typedef struct Node_LL_44B {
	OffsetLL_B22_t	 lon;
	OffsetLL_B22_t	 lat;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Node_LL_44B_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Node_LL_44B;
extern asn_SEQUENCE_specifics_t asn_SPC_Node_LL_44B_specs_1;
extern asn_TYPE_member_t asn_MBR_Node_LL_44B_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Node_LL_44B_H_ */
#include <asn_internal.h>
