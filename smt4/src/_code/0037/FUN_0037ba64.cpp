/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037ba64` (_code @ 0x37ba64, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00421cdc; /* 0x421cdc */
extern unsigned char DAT_00421cfc; /* 0x421cfc */

extern int FUN_0037b7c4(unsigned int *);


int FUN_0037ba64(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00421cdc;
  param_1[3] = (unsigned int)&DAT_00421cfc;
  if (*(char *)((int)param_1 + 0x261) == '\0') {
    *(unsigned char *)(param_1 + 0x98) = 0;
    *(unsigned char *)((int)param_1 + 0x261) = 1;
    param_1[4] = 0;
  }
  temp_v0 = FUN_0037b7c4(param_1 + 3);
  return temp_v0 - 0xc;
}

} /* extern "C" */
