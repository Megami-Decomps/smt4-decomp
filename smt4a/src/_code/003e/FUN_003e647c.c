/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e647c` (_code @ 0x3e647c, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_00357bc8(unsigned int, char *);


void FUN_003e647c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 != 2) {
    if (temp_v0 < 2) {
      if (temp_v0 != 0) {
        if (temp_v0 != 1) {
          return;
        }
      }
      else {
        *(unsigned int *)(param_1 + 0x48) = 0;
        *(unsigned int *)(param_1 + 8) = 1;
      }
      temp_v0 = FUN_00357bc8(*(unsigned int *)(param_1 + 0x14),"npcShop_ItemDes_start");
      if (-1 < temp_v0) {
        FUN_00275f44(*(unsigned int *)(param_1 + 0x18),temp_v0);
      }
      *(unsigned int *)(param_1 + 8) = 3;
      return;
    }
    if (temp_v0 != 3) {
      if (temp_v0 == 99) {
        temp_v1 = *(unsigned int *)(param_1 + 4);
        *(unsigned int *)(param_1 + 4) = 3;
        *(unsigned int *)(param_1 + 8) = 0;
        *(unsigned int *)(param_1 + 0xc) = temp_v1;
      }
    }
    else {
      temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x18));
      if (temp_v0 == 2) {
        if (*(int *)(param_1 + 0x48) >= 3) {
          *(unsigned int *)(param_1 + 8) = 99;
          return;
        }
        *(unsigned int *)(param_1 + 8) = 2;
      }
    }
    return;
  }
  for (temp_v0 = *(int *)(param_1 + 0x48); temp_v0 < 3; temp_v0 = temp_v0 + 1) {
    if (*(short *)(param_1 + temp_v0 * 0xc + 0x2c) != 0) {
      FUN_00275f44(*(unsigned int *)(param_1 + 0x18),*(unsigned short *)(param_1 + temp_v0 * 0xc + 0x2c));
      *(unsigned int *)(param_1 + 8) = 3;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      return;
    }
  }
  *(unsigned int *)(param_1 + 8) = 99;
  return;
}
