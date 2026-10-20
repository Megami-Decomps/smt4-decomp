/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027e774` (_code @ 0x27e774, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bd8e8(int, int);

extern int DAT_0043e128; /* 0x43e128 */

/* Supplied declaration required: FUN_002bd8e8. */


void FUN_0027e774(unsigned char param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043e128;
  temp_v1 = DAT_0043e128 + 0x44;
  *(unsigned int *)(DAT_0043e128 + 8) = 1;
  FUN_002bd8e8(temp_v1,0);
  *(unsigned char *)(temp_v0 + 0x23) = param_1;
  *(unsigned char *)(temp_v0 + 0x20) = 1;
  *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
  return;
}

} /* extern "C" */
