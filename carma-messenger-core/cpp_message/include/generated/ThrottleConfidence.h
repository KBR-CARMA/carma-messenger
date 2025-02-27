/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_ThrottleConfidence_H_
#define	_ThrottleConfidence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ThrottleConfidence {
	ThrottleConfidence_unavailable	= 0,
	ThrottleConfidence_prec10percent	= 1,
	ThrottleConfidence_prec1percent	= 2,
	ThrottleConfidence_prec0_5percent	= 3
} e_ThrottleConfidence;

/* ThrottleConfidence */
typedef long	 ThrottleConfidence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ThrottleConfidence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ThrottleConfidence;
extern const asn_INTEGER_specifics_t asn_SPC_ThrottleConfidence_specs_1;
asn_struct_free_f ThrottleConfidence_free;
asn_struct_print_f ThrottleConfidence_print;
asn_constr_check_f ThrottleConfidence_constraint;
ber_type_decoder_f ThrottleConfidence_decode_ber;
der_type_encoder_f ThrottleConfidence_encode_der;
xer_type_decoder_f ThrottleConfidence_decode_xer;
xer_type_encoder_f ThrottleConfidence_encode_xer;
oer_type_decoder_f ThrottleConfidence_decode_oer;
oer_type_encoder_f ThrottleConfidence_encode_oer;
per_type_decoder_f ThrottleConfidence_decode_uper;
per_type_encoder_f ThrottleConfidence_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ThrottleConfidence_H_ */
#include <asn_internal.h>
