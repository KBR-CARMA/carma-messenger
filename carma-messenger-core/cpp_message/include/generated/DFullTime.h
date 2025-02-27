/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_DFullTime_H_
#define	_DFullTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DYear.h"
#include "DMonth.h"
#include "DDay.h"
#include "DHour.h"
#include "DMinute.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DFullTime */
typedef struct DFullTime {
	DYear_t	 year;
	DMonth_t	 month;
	DDay_t	 day;
	DHour_t	 hour;
	DMinute_t	 minute;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DFullTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DFullTime;

#ifdef __cplusplus
}
#endif

#endif	/* _DFullTime_H_ */
#include <asn_internal.h>
