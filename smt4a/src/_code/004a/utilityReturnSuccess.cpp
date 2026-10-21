/* NON_MATCHING: retail performs a sixteen-iteration empty loop before returning one; compiler eliminates the loop. */
#include "common.h"
extern "C" {
/* This query always succeeds. */
s32 utilityReturnSuccess(void) { return 1; }
}
