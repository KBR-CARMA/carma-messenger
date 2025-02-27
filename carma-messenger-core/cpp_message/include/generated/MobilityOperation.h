/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_MobilityOperation_H_
#define	_MobilityOperation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MobilityStrategy.h"
#include "MobilityParameters.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MobilityOperation */
typedef struct MobilityOperation {
	MobilityStrategy_t	 strategy;
	MobilityParameters_t	 operationParams;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityOperation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobilityOperation;
extern asn_SEQUENCE_specifics_t asn_SPC_MobilityOperation_specs_1;
extern asn_TYPE_member_t asn_MBR_MobilityOperation_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityOperation_H_ */
#include <asn_internal.h>
