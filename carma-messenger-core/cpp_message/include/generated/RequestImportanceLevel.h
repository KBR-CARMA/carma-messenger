/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_RequestImportanceLevel_H_
#define	_RequestImportanceLevel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RequestImportanceLevel {
	RequestImportanceLevel_requestImportanceLevelUnKnown	= 0,
	RequestImportanceLevel_requestImportanceLevel1	= 1,
	RequestImportanceLevel_requestImportanceLevel2	= 2,
	RequestImportanceLevel_requestImportanceLevel3	= 3,
	RequestImportanceLevel_requestImportanceLevel4	= 4,
	RequestImportanceLevel_requestImportanceLevel5	= 5,
	RequestImportanceLevel_requestImportanceLevel6	= 6,
	RequestImportanceLevel_requestImportanceLevel7	= 7,
	RequestImportanceLevel_requestImportanceLevel8	= 8,
	RequestImportanceLevel_requestImportanceLevel9	= 9,
	RequestImportanceLevel_requestImportanceLevel10	= 10,
	RequestImportanceLevel_requestImportanceLevel11	= 11,
	RequestImportanceLevel_requestImportanceLevel12	= 12,
	RequestImportanceLevel_requestImportanceLevel13	= 13,
	RequestImportanceLevel_requestImportanceLevel14	= 14,
	RequestImportanceLevel_requestImportanceReserved	= 15
} e_RequestImportanceLevel;

/* RequestImportanceLevel */
typedef long	 RequestImportanceLevel_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RequestImportanceLevel_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RequestImportanceLevel;
extern const asn_INTEGER_specifics_t asn_SPC_RequestImportanceLevel_specs_1;
asn_struct_free_f RequestImportanceLevel_free;
asn_struct_print_f RequestImportanceLevel_print;
asn_constr_check_f RequestImportanceLevel_constraint;
ber_type_decoder_f RequestImportanceLevel_decode_ber;
der_type_encoder_f RequestImportanceLevel_encode_der;
xer_type_decoder_f RequestImportanceLevel_decode_xer;
xer_type_encoder_f RequestImportanceLevel_encode_xer;
oer_type_decoder_f RequestImportanceLevel_decode_oer;
oer_type_encoder_f RequestImportanceLevel_encode_oer;
per_type_decoder_f RequestImportanceLevel_decode_uper;
per_type_encoder_f RequestImportanceLevel_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RequestImportanceLevel_H_ */
#include <asn_internal.h>
