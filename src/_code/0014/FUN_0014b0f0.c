/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014b0f0` (_code @ 0x14b0f0, 0x3d8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int FUN_002b52c8(int *);
extern unsigned int FUN_002b5318(unsigned int *, unsigned int);


unsigned int FUN_0014b0f0(int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v2 = *(int *)(*param_1 + 0xc);
  if (temp_v2 != 0) {
    temp_v2 = *param_1 + 0xc + temp_v2;
  }
  else {
    temp_v2 = 0;
  }
  temp_v6 = param_4;
  if (temp_v2 != 0) {
    temp_v2 = *(int *)(*param_1 + 0xc);
    if (temp_v2 != 0) {
      temp_v2 = *param_1 + 0xc + temp_v2;
    }
    else {
      temp_v2 = 0;
    }
    temp_v3 = *(int *)(temp_v2 + 8);
    if (temp_v3 != 0) {
      puVar1 = (unsigned int *)(temp_v2 + 8 + temp_v3);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    temp_v0 = FUN_002b5318(puVar1,param_3);
    if (-1 < (int)temp_v0) {
      temp_v2 = *(int *)(*param_1 + 0xc);
      if (temp_v2 != 0) {
        temp_v2 = *param_1 + 0xc + temp_v2;
      }
      else {
        temp_v2 = 0;
      }
      temp_v6 = *(int *)(temp_v2 + 8);
      if (temp_v6 != 0) {
        temp_v6 = temp_v2 + 8 + temp_v6;
      }
      else {
        temp_v6 = 0;
      }
      temp_v4 = FUN_002b52c8(&temp_v6);
    }
    temp_v4 = temp_v4 | temp_v0;
  }
  temp_v2 = *(int *)(*param_1 + 0x10);
  if (temp_v2 != 0) {
    temp_v2 = *param_1 + 0x10 + temp_v2;
  }
  else {
    temp_v2 = 0;
  }
  if (temp_v2 != 0) {
    temp_v2 = *(int *)(*param_1 + 0x10);
    if (temp_v2 != 0) {
      temp_v2 = *param_1 + 0x10 + temp_v2;
    }
    else {
      temp_v2 = 0;
    }
    temp_v3 = *(int *)(temp_v2 + 8);
    if (temp_v3 != 0) {
      puVar1 = (unsigned int *)(temp_v2 + 8 + temp_v3);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    temp_v0 = FUN_002b5318(puVar1,param_3);
    if (-1 < (int)temp_v0) {
      temp_v2 = *(int *)(*param_1 + 0x10);
      if (temp_v2 != 0) {
        temp_v2 = *param_1 + 0x10 + temp_v2;
      }
      else {
        temp_v2 = 0;
      }
      temp_v6 = *(int *)(temp_v2 + 8);
      if (temp_v6 != 0) {
        temp_v6 = temp_v2 + 8 + temp_v6;
      }
      else {
        temp_v6 = 0;
      }
      temp_v1 = FUN_002b52c8(&temp_v6);
      temp_v4 = temp_v4 | temp_v1;
    }
    temp_v4 = temp_v4 | temp_v0;
  }
  temp_v2 = *(int *)*param_1;
  if (temp_v2 != 0) {
    temp_v2 = *param_1 + temp_v2;
  }
  else {
    temp_v2 = 0;
  }
  if (temp_v2 != 0) {
    temp_v2 = *(int *)*param_1;
    if (temp_v2 != 0) {
      temp_v2 = *param_1 + temp_v2;
    }
    else {
      temp_v2 = 0;
    }
    temp_v3 = *(int *)(temp_v2 + 8);
    if (temp_v3 != 0) {
      puVar1 = (unsigned int *)(temp_v2 + 8 + temp_v3);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    temp_v0 = FUN_002b5318(puVar1,param_3);
    if (-1 < (int)temp_v0) {
      temp_v2 = *(int *)*param_1;
      if (temp_v2 != 0) {
        temp_v2 = *param_1 + temp_v2;
      }
      else {
        temp_v2 = 0;
      }
      temp_v6 = *(int *)(temp_v2 + 8);
      if (temp_v6 != 0) {
        temp_v6 = temp_v2 + 8 + temp_v6;
      }
      else {
        temp_v6 = 0;
      }
      temp_v1 = FUN_002b52c8(&temp_v6);
      temp_v4 = temp_v4 | temp_v1;
    }
    temp_v4 = temp_v4 | temp_v0;
  }
  temp_v2 = *(int *)(*param_1 + 4);
  if (temp_v2 != 0) {
    temp_v2 = *param_1 + 4 + temp_v2;
  }
  else {
    temp_v2 = 0;
  }
  if (temp_v2 != 0) {
    temp_v2 = *(int *)(*param_1 + 4);
    if (temp_v2 != 0) {
      temp_v2 = *param_1 + 4 + temp_v2;
    }
    else {
      temp_v2 = 0;
    }
    temp_v3 = *(int *)(temp_v2 + 8);
    if (temp_v3 != 0) {
      puVar1 = (unsigned int *)(temp_v2 + 8 + temp_v3);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    temp_v0 = FUN_002b5318(puVar1,param_3);
    if (-1 < (int)temp_v0) {
      temp_v2 = *(int *)(*param_1 + 4);
      if (temp_v2 != 0) {
        temp_v2 = *param_1 + 4 + temp_v2;
      }
      else {
        temp_v2 = 0;
      }
      temp_v6 = *(int *)(temp_v2 + 8);
      if (temp_v6 != 0) {
        temp_v6 = temp_v2 + 8 + temp_v6;
      }
      else {
        temp_v6 = 0;
      }
      temp_v1 = FUN_002b52c8(&temp_v6);
      temp_v4 = temp_v4 | temp_v1;
    }
    temp_v4 = temp_v4 | temp_v0;
  }
  temp_v2 = *(int *)(*param_1 + 8);
  if (temp_v2 != 0) {
    temp_v2 = *param_1 + 8 + temp_v2;
  }
  else {
    temp_v2 = 0;
  }
  if (temp_v2 != 0) {
    temp_v2 = *(int *)(*param_1 + 8);
    if (temp_v2 != 0) {
      temp_v2 = *param_1 + 8 + temp_v2;
    }
    else {
      temp_v2 = 0;
    }
    temp_v3 = *(int *)(temp_v2 + 8);
    if (temp_v3 != 0) {
      puVar1 = (unsigned int *)(temp_v2 + 8 + temp_v3);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    temp_v0 = FUN_002b5318(puVar1,param_3);
    if (-1 < (int)temp_v0) {
      temp_v2 = *(int *)(*param_1 + 8);
      if (temp_v2 != 0) {
        temp_v2 = *param_1 + 8 + temp_v2;
      }
      else {
        temp_v2 = 0;
      }
      temp_v6 = *(int *)(temp_v2 + 8);
      if (temp_v6 != 0) {
        temp_v6 = temp_v2 + 8 + temp_v6;
      }
      else {
        temp_v6 = 0;
      }
      temp_v1 = FUN_002b52c8(&temp_v6);
      temp_v4 = temp_v4 | temp_v1;
    }
    temp_v4 = temp_v4 | temp_v0;
  }
  temp_v2 = *(int *)(*param_1 + 0x14);
  if (temp_v2 != 0) {
    temp_v2 = *param_1 + 0x14 + temp_v2;
  }
  else {
    temp_v2 = 0;
  }
  if (temp_v2 != 0) {
    temp_v2 = *(int *)(*param_1 + 0x14);
    if (temp_v2 != 0) {
      temp_v2 = *param_1 + 0x14 + temp_v2;
    }
    else {
      temp_v2 = 0;
    }
    temp_v3 = *(int *)(temp_v2 + 8);
    if (temp_v3 != 0) {
      puVar1 = (unsigned int *)(temp_v2 + 8 + temp_v3);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    temp_v0 = FUN_002b5318(puVar1,param_3);
    if (-1 < (int)temp_v0) {
      temp_v2 = *(int *)(*param_1 + 0x14);
      if (temp_v2 != 0) {
        temp_v2 = *param_1 + 0x14 + temp_v2;
      }
      else {
        temp_v2 = 0;
      }
      temp_v3 = *(int *)(temp_v2 + 8);
      if (temp_v3 != 0) {
        temp_v5 = temp_v3 + temp_v2 + 8;
      }
      temp_v6 = temp_v5;
      temp_v1 = FUN_002b52c8(&temp_v6);
      temp_v4 = temp_v4 | temp_v1;
    }
    temp_v4 = temp_v4 | temp_v0;
  }
  return temp_v4;
}
