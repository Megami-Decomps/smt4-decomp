/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d5a08` (_code @ 0x2d5a08, 0x410 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_7_stack;

/* Supplied declaration required: FUN_002a66e0. */
/* Supplied declaration required: FUN_002bc11c. */
/* Supplied declaration required: FUN_002bd75c. */
extern int FUN_002bf5c0(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5300. */


int * FUN_002d5a08(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  
  piVar1 = (int *)FUN_002c5300(0x100,0x100,0,0x14,1);
  piVar2 = (int *)FUN_002c5300(0x100,0x100,0,0x30,1);
  temp_v0 = 0;
  FUN_002bd75c();
  piVar1[3] = temp_v0;
  *(int *)(temp_v0 + 0x14) = param_1;
  *(int *)(piVar1[3] + 0x18) = param_2;
  *(unsigned int *)(piVar1[3] + 4) = 0xde1;
  *(int *)(piVar1[3] + 8) = param_3;
  *(unsigned int *)(piVar1[3] + 0xc) = 0x2000000;
  FUN_002a66e0(param_4,param_5,piVar1[3] + 0x34);
  temp_v1 = 0;
  if (param_4 != 0x6752) {
    if (param_4 < 0x6752) {
      temp_v0 = param_4 - 0x1907;
      if (temp_v0 != 0) {
        if (temp_v0 == 1) goto LAB_002d5b24;
        temp_v8 = temp_v0 != 3;
        if (temp_v8) {
          temp_v0 = param_4 - 0x6607;
        }
        if (!temp_v8 || temp_v0 == 0xf9) {
          temp_v1 = 0x8056;
        }
      }
      else if (param_5 == 0x8363) {
        temp_v1 = 0x8d62;
      }
    }
    else if (param_4 != 0x6754) {
      if (!(param_4 != 0x6758 && param_4 != 0x6759)) {
        temp_v1 = 0x8056;
      }
    }
    else if (param_5 == 0x8363) {
      temp_v1 = 0x8d62;
    }
  }
  else {
LAB_002d5b24:
    if (param_5 == 0x1401) {
      temp_v1 = 0x8058;
    }
    else if (param_5 != 0x8033) {
      if (param_5 == 0x8034) {
        temp_v1 = 0x8057;
      }
    }
    else {
      temp_v1 = 0x8056;
    }
  }
  temp_v4 = 0;
  temp_v6 = 0;
  temp_v0 = param_1 * param_2 * 2;
  temp_v7 = param_1 * param_2 * 4;
  temp_v3 = temp_v0;
  if (temp_v1 != 0x81a5) {
    temp_v3 = 0;
    if (temp_v1 < 0x81a5) {
      if (temp_v1 == 0x8056) {
        temp_v4 = 4;
        temp_v3 = temp_v0;
      }
      else if (temp_v1 == 0x8057) {
        temp_v4 = 2;
        temp_v3 = temp_v0;
      }
      else if (temp_v1 == 0x8058) {
        temp_v6 = 2;
        temp_v3 = temp_v7;
      }
    }
    else {
      temp_v5 = temp_v7;
      if ((temp_v1 == 0x88f0) || (temp_v5 = temp_v0, temp_v1 == 0x8d62)) {
        temp_v4 = 3;
        temp_v3 = temp_v5;
      }
    }
  }
  piVar2[1] = temp_v4;
  piVar2[4] = temp_v3;
  temp_v4 = 0;
  *piVar2 = param_4;
  if (param_3 != 0x10000) {
    if (param_3 != 0x20000) {
      if (param_3 == 0x30000) {
        temp_v2 = 0x30000;
        temp_v4 = FUN_002c5300(temp_v2,0x100,0,temp_v3,1);
      }
    }
    else {
      temp_v2 = 0x20000;
      temp_v4 = FUN_002c5300(temp_v2,0x100,0,temp_v3,1);
    }
  }
  else {
    temp_v4 = FUN_002bf5c0(0x10000,0x100,0,temp_v3,0x40,1);
  }
  piVar2[2] = temp_v4;
  temp_v3 = FUN_002bc11c();
  piVar2[3] = temp_v3;
  piVar2[5] = temp_v6;
  piVar1[2] = piVar2[2];
  temp_v2 = FUN_002bc11c();
  temp_v6 = 0;
  *(unsigned int *)(piVar1[3] + 0x30) = temp_v2;
  temp_v4 = 0;
  temp_v3 = temp_v0;
  if (param_6 != 0x81a5) {
    if (param_6 < 0x81a5) {
      if (param_6 == 0x8056) {
        temp_v4 = 4;
      }
      else if (param_6 == 0x8057) {
        temp_v4 = 2;
      }
      else {
        temp_v3 = 0;
        if (param_6 == 0x8058) {
          temp_v6 = 2;
          temp_v3 = temp_v7;
        }
      }
    }
    else if ((param_6 == 0x88f0) || (temp_v3 = 0, temp_v7 = temp_v0, param_6 == 0x8d62)) {
      temp_v4 = 3;
      temp_v3 = temp_v7;
    }
  }
  piVar2[7] = temp_v4;
  piVar2[6] = param_4;
  piVar2[10] = temp_v3;
  temp_v0 = 0;
  if (param_7 != 0x10000) {
    if (param_7 != 0x20000) {
      if (param_7 != 0x30000) {
        piVar2[8] = temp_v0;
        temp_v0 = FUN_002bc11c();
        piVar2[9] = temp_v0;
        piVar2[0xb] = temp_v6;
        piVar1[1] = (int)(piVar2 + 6);
        *piVar1 = (int)piVar2;
        return piVar1;
      }
      temp_v2 = 0x30000;
    }
    else {
      temp_v2 = 0x20000;
    }
    temp_v0 = FUN_002c5300(temp_v2,0x100,0,temp_v3,1);
  }
  else {
    temp_v0 = FUN_002bf5c0(0x10000,0x100,0,temp_v3,0x40,1);
  }
  piVar2[8] = temp_v0;
  temp_v0 = FUN_002bc11c();
  piVar2[9] = temp_v0;
  piVar2[0xb] = temp_v6;
  piVar1[1] = (int)(piVar2 + 6);
  *piVar1 = (int)piVar2;
  return piVar1;
}
