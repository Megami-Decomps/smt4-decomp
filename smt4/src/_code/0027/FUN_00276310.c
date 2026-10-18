/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00276310` (_code @ 0x276310, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0044cdf0; /* 0x44cdf0 */

extern int FUN_0039d514(int);


void FUN_00276310(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0044cdf0;
  if ((DAT_0044cdf0 != 0) && (temp_v1 = FUN_0039d514(DAT_0044cdf0 + 0x40), temp_v1 != 0)) {
    *(unsigned char *)(temp_v0 + 0x5acc) = 1;
    return;
  }
  return;
}
