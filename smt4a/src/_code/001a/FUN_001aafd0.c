/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aafd0` (_code @ 0x1aafd0, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001a83bc. */
/* Supplied declaration required: FUN_001aff14. */


void FUN_001aafd0(int param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_s0;
  unsigned int temp_v1;
  
  if ((*(unsigned int *)(param_1 + 8) & 0x70000) != 0) {
    temp_v0 = *param_2;
  }
  else {
    temp_v0 = in_s0;
    if ((*(unsigned int *)(param_1 + 8) & 0x40) != 0) {
      temp_v1 = *(unsigned int *)(param_1 + 0xc);
    }
    else {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0xc));
      temp_v1 = in_s0;
    }
    param_2[1] = temp_v1;
    temp_v1 = temp_v0;
    if ((*(unsigned int *)(param_1 + 8) & 0x80) != 0) {
      temp_v0 = *(unsigned int *)(param_1 + 0x10);
    }
    else {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x10));
    }
    param_2[2] = temp_v0;
    in_s0 = temp_v1;
    if ((*(unsigned int *)(param_1 + 8) & 0x100) != 0) {
      temp_v1 = *(unsigned int *)(param_1 + 0x14);
    }
    else {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x14));
    }
    param_2[3] = temp_v1;
    temp_v0 = *param_2 & 0xfd7fffff;
    *param_2 = temp_v0;
  }
  *param_2 = temp_v0 & 0xf3ffffff;
  if ((*(unsigned int *)(param_1 + 8) & 0x380000) == 0) {
    if ((*(unsigned int *)(param_1 + 8) & 0x200) == 0) {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x18));
    }
    if ((*(unsigned int *)(param_1 + 8) & 0x400) == 0) {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x1c));
    }
    if ((*(unsigned int *)(param_1 + 8) & 0x800) == 0) {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x20));
    }
    FUN_001aff14(param_2 + 4,0);
  }
  if ((*(unsigned int *)(param_1 + 8) & 0x1c00000) == 0) {
    temp_v0 = in_s0;
    if ((*(unsigned int *)(param_1 + 8) & 0x2000) != 0) {
      temp_v1 = *(unsigned int *)(param_1 + 0x24);
    }
    else {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x24));
      temp_v1 = in_s0;
    }
    param_2[7] = temp_v1;
    temp_v1 = temp_v0;
    if ((*(unsigned int *)(param_1 + 8) & 0x4000) != 0) {
      temp_v0 = *(unsigned int *)(param_1 + 0x28);
    }
    else {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x28));
    }
    param_2[0xb] = temp_v0;
    if ((*(unsigned int *)(param_1 + 8) & 0x8000) != 0) {
      temp_v1 = *(unsigned int *)(param_1 + 0x2c);
    }
    else {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x2c));
    }
    param_2[0xf] = temp_v1;
  }
  return;
}
