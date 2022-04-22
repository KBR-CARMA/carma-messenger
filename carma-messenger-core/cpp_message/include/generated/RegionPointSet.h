/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_RegionPointSet_H_
#define	_RegionPointSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Zoom.h"
#include "RegionList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Position3D;

/* RegionPointSet */
typedef struct RegionPointSet {
	struct Position3D	*anchor	/* OPTIONAL */;
	Zoom_t	*scale	/* OPTIONAL */;
	RegionList_t	 nodeList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RegionPointSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RegionPointSet;
extern asn_SEQUENCE_specifics_t asn_SPC_RegionPointSet_specs_1;
extern asn_TYPE_member_t asn_MBR_RegionPointSet_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Position3D.h"

#endif	/* _RegionPointSet_H_ */
#include <asn_internal.h>
