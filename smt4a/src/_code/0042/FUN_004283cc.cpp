/* NON_MATCHING: compiler uses cmp/movge instead of retail sign-bit shift. */
#include "common.h"
extern "C" {
s32 queryResultFailureOnly();
/* Returns only negative failure results. */
s32 FUN_004283cc() { s32 result=queryResultFailureOnly(); return result < 0 ? result : 0; }
}
