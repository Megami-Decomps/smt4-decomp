/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004964e0` (_code @ 0x4964e0, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_001641c4. */
extern unsigned short FUN_001643b4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00498ff0. */
/* Supplied declaration required: FUN_004d05c4. */
/* Supplied declaration required: FUN_004d06e4. */
/* Supplied declaration required: FUN_004d097c. */


void FUN_004964e0(unsigned int *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  FUN_004d097c(param_1[0x2cf]);
  FUN_004d06e4();
  temp_v4 = 0;
  if (temp_v4 < (short)param_1[0x580c]) {
    do {
      FUN_001641c4();
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < (short)param_1[0x580c]);
  }
  *(unsigned short *)(param_1 + 0x580c) = 0;
  *(unsigned short *)(param_1 + 0x580b) = 0xffff;
  *(unsigned short *)((int)param_1 + 0x1602e) = 0xffff;
  (**(romwright_code **)(*(int *)param_1[0x2cf] + 8))
            ((int *)param_1[0x2cf],param_1 + param_1[0x2d0] * 0x1d + 0x2d8);
  temp_v3 = 9;
  temp_v2 = 0x29;
  *(unsigned short *)(param_1[0x2cf] + 4) = *(unsigned short *)(param_1[0x2cf] + 4) | 0x1000;
  *(unsigned int **)(param_1[0x2cf] + 100) = param_1 + 0xe9;
  if (param_1[0x2d0] == 7 || param_1[0x2d0] == 8) {
    temp_v3 = 10;
    temp_v2 = 0x28;
  }
  FUN_004d05c4(param_1 + 0x2c2,0x20,temp_v2,temp_v3);
  *(unsigned char *)(param_1 + 0x2c6) = 1;
  temp_v0 = FUN_001643b4(0x14,0x576);
  *(unsigned short *)(param_1 + 0x580b) = temp_v0;
  temp_v0 = FUN_001643b4(0x14,0x577);
  *(unsigned short *)((int)param_1 + 0x1602e) = temp_v0;
  *(short *)(param_1 + 0x580c) = (short)param_1[0x580c] + 2;
  if (param_2 != 0) {
    FUN_00498ff0(param_1);
  }
  temp_v1 = *param_1 & 0xfffff1ff;
  *param_1 = temp_v1;
  if (param_1[0x2d0] == 8) {
    temp_v1 = temp_v1 | 0x800;
  }
  else {
    if (param_1[0x2d0] == 7) {
      *param_1 = temp_v1 | 0x400;
      return;
    }
    temp_v1 = temp_v1 | 0x200;
  }
  *param_1 = temp_v1;
  return;
}
