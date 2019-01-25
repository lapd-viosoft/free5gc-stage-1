/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/r14.4.0/36413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_S1AP_ENB_ID_H_
#define	_S1AP_ENB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_ENB_ID_PR {
	S1AP_ENB_ID_PR_NOTHING,	/* No components present */
	S1AP_ENB_ID_PR_macroENB_ID,
	S1AP_ENB_ID_PR_homeENB_ID,
	/* Extensions may appear below */
	S1AP_ENB_ID_PR_short_macroENB_ID,
	S1AP_ENB_ID_PR_long_macroENB_ID
} S1AP_ENB_ID_PR;

/* S1AP_ENB-ID */
typedef struct S1AP_ENB_ID {
	S1AP_ENB_ID_PR present;
	union S1AP_ENB_ID_u {
		BIT_STRING_t	 macroENB_ID;
		BIT_STRING_t	 homeENB_ID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		BIT_STRING_t	 short_macroENB_ID;
		BIT_STRING_t	 long_macroENB_ID;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_ENB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ENB_ID;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_ENB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_ENB_ID_1[4];
extern asn_per_constraints_t asn_PER_type_S1AP_ENB_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_ENB_ID_H_ */
#include <asn_internal.h>
