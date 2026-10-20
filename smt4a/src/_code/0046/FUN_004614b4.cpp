/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004614b4` (_code @ 0x4614b4, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055c160; /* 0x55c160 */
extern unsigned char DAT_0055c180; /* 0x55c180 */

extern int FUN_004611d0(unsigned int *);


int FUN_004614b4(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055c160;
  param_1[3] = (unsigned int)&DAT_0055c180;
  if (*(char *)((int)param_1 + 0x261) == '\0') {
    *(unsigned char *)(param_1 + 0x98) = 0;
    *(unsigned char *)((int)param_1 + 0x261) = 1;
    param_1[4] = 0;
  }
  temp_v0 = FUN_004611d0(param_1 + 3);
  return temp_v0 - 0xc;
}

} /* extern "C" */
