/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f9e80` (_code @ 0x3f9e80, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019d4d8(int, int, int, unsigned int, int, int);
int FUN_001b15cc(unsigned int *, int, int [6]);

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern unsigned char DAT_00557b00; /* 0x557b00 */

/* Supplied declaration required: FUN_0019d4d8. */
/* Supplied declaration required: FUN_001b15cc. */


unsigned int * FUN_003f9e80(unsigned int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar5;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int aiStack_48 [6];
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = (unsigned int)&DAT_00557b00;
  param_1[0xe] = 0;
  temp_v2 = 0;
  temp_v3 = 6;
  piVar1 = (int *)(param_2 + 0x20);
  piVar5 = (int *)(param_2 + 8);
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  do {
    temp_v4 = *piVar1;
    piVar1 = piVar1 + 1;
    temp_v5 = 0;
    if (temp_v4 != 0) {
      temp_v5 = *piVar5 + param_2;
    }
    piVar5 = piVar5 + 1;
    aiStack_48[temp_v2] = temp_v5;
    temp_v3 = temp_v3 - 1;
    temp_v2 = temp_v2 + 1;
  } while (temp_v3 != 0);
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v0 = 0x10000;
  FUN_0019d4d8(0x10000,0x100,0,*(unsigned int *)(param_2 + 0x38),4,1);
  param_1[0xf] = temp_v0;
  temp_v1 = 0x10000;
  temp_v6 = temp_v0;
  FUN_0019d4d8(0x10000,0x100,0,*(unsigned int *)(param_2 + 0x3c),0x10,1);
  param_1[0x10] = temp_v1;
  param_1[0x11] = param_2;
  temp_v7 = temp_v1;
  temp_v9 = temp_v1;
  FUN_001b15cc(param_1 + 1,param_2,aiStack_48);
  return param_1;
}

} /* extern "C" */
