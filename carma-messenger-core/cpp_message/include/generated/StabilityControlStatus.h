/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_combined.asn"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_StabilityControlStatus_H_
#define	_StabilityControlStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum StabilityControlStatus {
	StabilityControlStatus_unavailable	= 0,
	StabilityControlStatus_off	= 1,
	StabilityControlStatus_on	= 2,
	StabilityControlStatus_engaged	= 3
} e_StabilityControlStatus;

/* StabilityControlStatus */
typedef long	 StabilityControlStatus_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_StabilityControlStatus_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_StabilityControlStatus;
extern const asn_INTEGER_specifics_t asn_SPC_StabilityControlStatus_specs_1;
asn_struct_free_f StabilityControlStatus_free;
asn_struct_print_f StabilityControlStatus_print;
asn_constr_check_f StabilityControlStatus_constraint;
ber_type_decoder_f StabilityControlStatus_decode_ber;
der_type_encoder_f StabilityControlStatus_encode_der;
xer_type_decoder_f StabilityControlStatus_decode_xer;
xer_type_encoder_f StabilityControlStatus_encode_xer;
oer_type_decoder_f StabilityControlStatus_decode_oer;
oer_type_encoder_f StabilityControlStatus_encode_oer;
per_type_decoder_f StabilityControlStatus_decode_uper;
per_type_encoder_f StabilityControlStatus_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _StabilityControlStatus_H_ */
#include <asn_internal.h>
