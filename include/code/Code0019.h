#pragma once
#include "common.h"

/* Functions in the 0x00190000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* Canonical prototypes of small helpers whose definitions take only primitive types; the definitions
 * include this header so callers and callee cannot drift apart. */

s32 unitMapIdToCategory(s32 id, s32 flag);

u16 dataTable10FindValue(u32 key);

} /* extern "C" */
