/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00173f38` (_code @ 0x173f38, 0x1c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
} param_5_stack;

extern int FUN_001784b0(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_0018fefc. */
/* Supplied declaration required: FUN_001900f0. */
/* Supplied declaration required: FUN_0019029c. */
/* Supplied declaration required: FUN_001904c8. */
extern int FUN_0019070c(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_001a6458. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


unsigned int FUN_00173f38(int param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int iStack_34;
  unsigned int temp_v13;
  unsigned int uStack_2c;
  int temp_v14;
  
  if ((param_3 & 0x1f) != 0) {
    return 0;
  }
  temp_v6 = param_3 + param_4;
  temp_v0 = param_1;
  temp_v7 = param_3;
  iStack_34 = param_1;
  temp_v13 = param_2;
  uStack_2c = param_3;
  temp_v14 = param_4;
  FUN_001900f0(param_1,param_2,&temp_v7,temp_v6);
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v0 = FUN_001784b0(temp_v13,(unsigned int *)&temp_v9);
    if (temp_v0 != 0) {
      temp_v0 = param_1;
      FUN_0019029c(param_1,temp_v9,&temp_v7,temp_v6);
      if (temp_v0 == 0) {
        return 0;
      }
      temp_v0 = param_1;
      FUN_0018fefc(param_1,temp_v12,&temp_v7,temp_v6);
      temp_v4 = temp_v7;
      if (temp_v0 == 0) {
        return 0;
      }
      if ((temp_v7 & 0x1f) != 0) {
        return 0;
      }
      temp_v1 = (temp_v11 * 0x3298 + 0x1fU) & 0xffffffe0;
      temp_v8 = temp_v7 + temp_v1;
      if (0 < (int)(temp_v8 - temp_v6)) {
        return 0;
      }
      temp_v5 = 0;
      temp_v3 = temp_v7;
      if (temp_v1 / 0x3298 != 0) {
        do {
          if (temp_v3 == 0) {
            temp_v0 = 0;
          }
          else {
            temp_v0 = FUN_0019070c(temp_v3,(unsigned int *)(param_1 + 0xb8));
          }
          nw_ut_internal_LinkListImpl_insert(param_1 + 0xcc,param_1 + 0xd0,temp_v0 + 0xf8);
          temp_v5 = temp_v5 + 1;
          temp_v3 = temp_v3 + 0x3298;
        } while (temp_v5 < temp_v1 / 0x3298);
      }
      *(unsigned int *)(param_1 + 0xb8) = temp_v4;
      *(unsigned int *)(param_1 + 0xbc) = temp_v1;
      temp_v7 = temp_v8;
      if ((temp_v8 & 0x1f) != 0) {
        return 0;
      }
      temp_v4 = temp_v8 + ((temp_v10 * 0x138 + 0x1fU) & 0xffffffe0);
      if (0 < (int)(temp_v4 - temp_v6)) {
        return 0;
      }
      FUN_001a6458(param_1 + 0xf4);
      temp_v7 = temp_v4;
    }
    if ((param_5 != 0) &&
       (temp_v0 = param_1, FUN_001904c8(param_1,&temp_v7,temp_v6,param_5), temp_v0 == 0)) {
      return 0;
    }
    *(unsigned int *)(param_1 + 4) = temp_v13;
    *(unsigned int *)(param_1 + 0x104) = param_3;
    *(int *)(param_1 + 0x108) = temp_v14;
    temp_v2 = 1;
  }
  return temp_v2;
}
