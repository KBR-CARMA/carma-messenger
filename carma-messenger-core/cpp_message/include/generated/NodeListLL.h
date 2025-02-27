/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_NodeListLL_H_
#define	_NodeListLL_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NodeSetLL.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NodeListLL_PR {
	NodeListLL_PR_NOTHING,	/* No components present */
	NodeListLL_PR_nodes
	/* Extensions may appear below */
	
} NodeListLL_PR;

/* NodeListLL */
typedef struct NodeListLL {
	NodeListLL_PR present;
	union NodeListLL_u {
		NodeSetLL_t	 nodes;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeListLL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeListLL;
extern asn_CHOICE_specifics_t asn_SPC_NodeListLL_specs_1;
extern asn_TYPE_member_t asn_MBR_NodeListLL_1[1];
extern asn_per_constraints_t asn_PER_type_NodeListLL_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NodeListLL_H_ */
#include <asn_internal.h>
