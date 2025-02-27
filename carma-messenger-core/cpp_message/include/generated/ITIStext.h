/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITIS"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_ITIStext_H_
#define	_ITIStext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <IA5String.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ITIStext */
typedef IA5String_t	 ITIStext_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ITIStext_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ITIStext;
asn_struct_free_f ITIStext_free;
asn_struct_print_f ITIStext_print;
asn_constr_check_f ITIStext_constraint;
ber_type_decoder_f ITIStext_decode_ber;
der_type_encoder_f ITIStext_encode_der;
xer_type_decoder_f ITIStext_decode_xer;
xer_type_encoder_f ITIStext_encode_xer;
oer_type_decoder_f ITIStext_decode_oer;
oer_type_encoder_f ITIStext_encode_oer;
per_type_decoder_f ITIStext_decode_uper;
per_type_encoder_f ITIStext_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ITIStext_H_ */
#include <asn_internal.h>
