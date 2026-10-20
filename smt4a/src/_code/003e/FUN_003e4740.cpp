/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4740` (_code @ 0x3e4740, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f9c0c(unsigned int, unsigned char [76], int);
int FUN_003fd8dc(int, int, unsigned int);
int FUN_003fe86c(int, int, int);
int FUN_00406768(unsigned int, int, int);

extern int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_003f9c0c. */
/* Supplied declaration required: FUN_003fd8dc. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_00406768. */


void FUN_003e4740(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [76];
  
  if (*(int *)(param_1 + 0x54c) != param_2) {
    if (*(int *)(param_1 + 0x54c) != -1) {
      *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x2c) + 4) + 0x1fc) = 0;
    }
    *(int *)(param_1 + 0x54c) = param_2;
    FUN_003f9c0c(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x54c) * 4 + 0x30),temp_v2,0);
    *(unsigned int *)(param_1 + 0x3c) = 0;
    temp_v1 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
    *(unsigned int *)(temp_v1 + 0x1fc) = 0x3f800000;
    temp_v0 = DAT_0056fcc0;
    if (param_2 == 0) {
      FUN_003fe86c(temp_v1,0,0);
      FUN_003fd8dc(temp_v1,8,0xffffffff);
      FUN_00406768(*(unsigned int *)(temp_v0 + 4),0,0x4c4c4cff);
      return;
    }
    if (param_2 == 1) {
      FUN_003fe86c(temp_v1,1,0);
      FUN_003fd8dc(temp_v1,8,0x999999ff);
      FUN_00406768(*(unsigned int *)(temp_v0 + 4),0,0x191919ff);
      return;
    }
    if (param_2 == 2) {
      FUN_003fe86c(temp_v1,2,1);
      FUN_003fd8dc(temp_v1,8,0xffffffff);
      FUN_00406768(*(unsigned int *)(temp_v0 + 4),0,0x4c4c4cff);
    }
  }
  return;
}

} /* extern "C" */
