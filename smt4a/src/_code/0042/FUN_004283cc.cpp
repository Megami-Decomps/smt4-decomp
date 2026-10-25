/* NON_MATCHING: compiler uses cmp/movge instead of retail sign-bit shift. */
#include "classes/WindowStatus.h"
extern "C" {
/* Returns only negative failure results. */
s32 FUN_004283cc(void *owner) { s32 result=queryResultFailureOnly(static_cast<const u32 *>(owner)); return result < 0 ? result : 0; }
}
