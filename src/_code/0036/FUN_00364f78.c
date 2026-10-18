/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00364f78` (_code @ 0x364f78, 0xc0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00149a1c. */
/* Supplied declaration required: FUN_00149a44. */
/* Supplied declaration required: FUN_002b540c. */


void FUN_00364f78(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if ((~param_2 & 1) == 0) {
    *(unsigned int *)(param_1 + 0x1c) = 0;
  }
  if ((~param_2 & 2) == 0) {
    *(unsigned int *)(param_1 + 0x20) = 0;
  }
  if ((~param_2 & 4) == 0) {
    *(unsigned int *)(param_1 + 0x24) = 0;
  }
  if ((~param_2 & 8) == 0) {
    *(unsigned int *)(param_1 + 0xb8) = 0xffffffff;
    *(unsigned int *)(param_1 + 0xa4) = 0;
  }
  if ((~param_2 & 0x10) == 0) {
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  if ((~param_2 & 0x20) == 0) {
    FUN_00149a44(param_1 + 0x40);
  }
  if ((~param_2 & 0x40) == 0) {
    temp_v0 = *(int *)(param_1 + 8);
    *(unsigned char *)(temp_v0 + 0x10) = 0;
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 8) = 0;
    *(unsigned char *)(param_1 + 0x13) = 1;
  }
  if ((~param_2 & 0x80) == 0) {
    FUN_00149a1c();
  }
  if ((~param_2 & 0x100) == 0) {
    FUN_002b540c(param_1 + 0x100,param_3);
  }
  if ((~param_2 & 0x200) == 0) {
    *(unsigned char *)(param_1 + 0x12) = 1;
  }
  return;
}
