/* NON_MATCHING: compiler removes the retail redundant result-high-bit check after constructing the result. */
#include "common.h"
extern "C" {
extern u8 DAT_004e64c0;
/* Validate a nonzero owner token before returning the shared result object. */
u32 tokenResolveAddress(const u32 *owner,void **result,u32 token) { if (*owner!=token || token==0) return 0xD8A138C1; *result=&DAT_004e64c0; return 0; }
}
