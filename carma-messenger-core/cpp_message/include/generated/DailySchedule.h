/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_DailySchedule_H_
#define	_DailySchedule_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DailySchedule */
typedef struct DailySchedule {
	long	 begin;
	long	 duration;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DailySchedule_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DailySchedule;
extern asn_SEQUENCE_specifics_t asn_SPC_DailySchedule_specs_1;
extern asn_TYPE_member_t asn_MBR_DailySchedule_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _DailySchedule_H_ */
#include <asn_internal.h>
