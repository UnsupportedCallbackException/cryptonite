/*
 * Copyright (c) 2016 PrivatBank IT <acsk@privatbank.ua>. All rights reserved.
 * Redistribution and modifications are permitted subject to BSD license.
 */

#ifndef    _PrivateDomainName_H_
#define    _PrivateDomainName_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NumericString.h"
#include "PrintableString.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PrivateDomainName_PR {
    PrivateDomainName_PR_NOTHING,    /* No components present */
    PrivateDomainName_PR_numeric,
    PrivateDomainName_PR_printable
} PrivateDomainName_PR;

/* PrivateDomainName */
typedef struct PrivateDomainName {
    PrivateDomainName_PR present;
    union PrivateDomainName_u {
        NumericString_t     numeric;
        PrintableString_t     printable;
    } choice;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} PrivateDomainName_t;

/* Implementation */
extern asn_TYPE_descriptor_t PrivateDomainName_desc;
CRYPTONITE_EXPORT asn_TYPE_descriptor_t *get_PrivateDomainName_desc(void);

#ifdef __cplusplus
}
#endif

#endif