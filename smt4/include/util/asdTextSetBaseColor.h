#ifndef SMT4_UTIL_FUN_002BD82C_H
#define SMT4_UTIL_FUN_002BD82C_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Sets the default color of a text object (the low byte is cleared). */
void asdTextSetBaseColor(AsdText *text, u32 color);

#ifdef __cplusplus
}
#endif

#endif
