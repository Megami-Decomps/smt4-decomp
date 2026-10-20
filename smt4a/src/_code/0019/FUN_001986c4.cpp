/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001986c4` (_code @ 0x1986c4, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a83bc(unsigned int);

/* Supplied declaration required: FUN_001a83bc. */


void FUN_001986c4(int param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  unsigned int in_s0;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if ((*(unsigned int *)(param_1 + 8) & 0x10000) == 0) {
    if ((*(unsigned int *)(param_1 + 8) & 0x40) != 0) {
      temp_v0 = *(unsigned int *)(param_1 + 0xc);
    }
    else {
      temp_v1 = in_s0;
      FUN_001a83bc(*(unsigned int *)(param_1 + 0xc));
      temp_v0 = in_s0;
      in_s0 = temp_v1;
    }
    *param_2 = temp_v0;
  }
  if ((*(unsigned int *)(param_1 + 8) & 0x20000) == 0) {
    if ((*(unsigned int *)(param_1 + 8) & 0x80) != 0) {
      temp_v0 = *(unsigned int *)(param_1 + 0x10);
    }
    else {
      temp_v1 = in_s0;
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x10));
      temp_v0 = in_s0;
      in_s0 = temp_v1;
    }
    param_2[1] = temp_v0;
  }
  if ((*(unsigned int *)(param_1 + 8) & 0x40000) == 0) {
    if ((*(unsigned int *)(param_1 + 8) & 0x100) != 0) {
      temp_v0 = *(unsigned int *)(param_1 + 0x14);
    }
    else {
      temp_v1 = in_s0;
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x14));
      temp_v0 = in_s0;
      in_s0 = temp_v1;
    }
    param_2[2] = temp_v0;
  }
  if ((*(unsigned int *)(param_1 + 8) & 0x80000) == 0) {
    if ((*(unsigned int *)(param_1 + 8) & 0x200) != 0) {
      temp_v0 = *(unsigned int *)(param_1 + 0x18);
    }
    else {
      temp_v1 = in_s0;
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x18));
      temp_v0 = in_s0;
      in_s0 = temp_v1;
    }
    param_2[3] = temp_v0;
  }
  if ((*(unsigned int *)(param_1 + 8) & 0x100000) == 0) {
    if ((*(unsigned int *)(param_1 + 8) & 0x400) != 0) {
      temp_v0 = *(unsigned int *)(param_1 + 0x1c);
    }
    else {
      temp_v1 = in_s0;
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x1c));
      temp_v0 = in_s0;
      in_s0 = temp_v1;
    }
    param_2[4] = temp_v0;
  }
  if ((*(unsigned int *)(param_1 + 8) & 0x200000) == 0) {
    if ((*(unsigned int *)(param_1 + 8) & 0x800) != 0) {
      temp_v0 = *(unsigned int *)(param_1 + 0x20);
    }
    else {
      temp_v1 = in_s0;
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x20));
      temp_v0 = in_s0;
      in_s0 = temp_v1;
    }
    param_2[5] = temp_v0;
  }
  if ((*(unsigned int *)(param_1 + 8) & 0x400000) == 0) {
    if ((*(unsigned int *)(param_1 + 8) & 0x2000) != 0) {
      temp_v0 = *(unsigned int *)(param_1 + 0x24);
    }
    else {
      temp_v1 = in_s0;
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x24));
      temp_v0 = in_s0;
      in_s0 = temp_v1;
    }
    param_2[6] = temp_v0;
  }
  if ((*(unsigned int *)(param_1 + 8) & 0x800000) == 0) {
    if ((*(unsigned int *)(param_1 + 8) & 0x4000) != 0) {
      temp_v0 = *(unsigned int *)(param_1 + 0x28);
    }
    else {
      temp_v1 = in_s0;
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x28));
      temp_v0 = in_s0;
      in_s0 = temp_v1;
    }
    param_2[7] = temp_v0;
  }
  if ((*(unsigned int *)(param_1 + 8) & 0x1000000) == 0) {
    if ((*(unsigned int *)(param_1 + 8) & 0x8000) != 0) {
      in_s0 = *(unsigned int *)(param_1 + 0x2c);
    }
    else {
      FUN_001a83bc(*(unsigned int *)(param_1 + 0x2c));
    }
    param_2[8] = in_s0;
  }
  return;
}

} /* extern "C" */
