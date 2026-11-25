#pragma once

#include "common.h"

/* http:C CancelConnection (0x00040040). */
extern "C" u32 nn_http_detail_CancelConnection(u32 *session, u32 requestHandle);

/* http:C AddRequestHeaderField (0x001100C4). Lengths include the terminators. */
extern "C" u32 nn_http_detail_AddRequestHeaderField(u32 *session, u32 requestHandle, const char *name, u32 nameLength,
                             const char *value, u32 valueLength);

/* http:C AddDefaultCert (0x00250080): selects one of the system's built-in root CA certificates. */
extern "C" u32 nn_http_detail_AddDefaultCert(u32 *session, u32 requestHandle, u32 certificate);
