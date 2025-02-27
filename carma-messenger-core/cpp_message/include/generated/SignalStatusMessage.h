/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_SignalStatusMessage_H_
#define	_SignalStatusMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MinuteOfTheYear.h"
#include "DSecond.h"
#include "DSRC_MsgCount.h"
#include "SignalStatusList.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RegionalExtension;

/* SignalStatusMessage */
typedef struct SignalStatusMessage {
	MinuteOfTheYear_t	*timeStamp	/* OPTIONAL */;
	DSecond_t	 second;
	DSRC_MsgCount_t	*sequenceNumber	/* OPTIONAL */;
	SignalStatusList_t	 status;
	struct SignalStatusMessage__regional {
		A_SEQUENCE_OF(struct RegionalExtension) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignalStatusMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignalStatusMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_SignalStatusMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_SignalStatusMessage_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RegionalExtension.h"

#endif	/* _SignalStatusMessage_H_ */
#include <asn_internal.h>
