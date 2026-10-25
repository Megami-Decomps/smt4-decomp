/* NON_MATCHING: compiler changes stack slots and uses cmp instead of sign-bit shift. */
#include "common.h"
extern "C" {
s32 queryResultFailureOnly(const u32 *value);
/* Reads the result value only when the query succeeds. */
s32 FUN_00428308(u32 *output) { u32 value;s32 result=queryResultFailureOnly(&value);if(result<0)return result;*output=value;return 0; }
}
