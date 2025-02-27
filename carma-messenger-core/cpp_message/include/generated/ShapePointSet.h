/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_ShapePointSet_H_
#define	_ShapePointSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LaneWidth.h"
#include "DirectionOfUse.h"
#include "NodeListXY.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Position3D;

/* ShapePointSet */
typedef struct ShapePointSet {
	struct Position3D	*anchor	/* OPTIONAL */;
	LaneWidth_t	*laneWidth	/* OPTIONAL */;
	DirectionOfUse_t	*directionality	/* OPTIONAL */;
	NodeListXY_t	 nodeList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ShapePointSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ShapePointSet;
extern asn_SEQUENCE_specifics_t asn_SPC_ShapePointSet_specs_1;
extern asn_TYPE_member_t asn_MBR_ShapePointSet_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Position3D.h"

#endif	/* _ShapePointSet_H_ */
#include <asn_internal.h>
