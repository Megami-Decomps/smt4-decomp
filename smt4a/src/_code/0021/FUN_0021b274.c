/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021b274` (_code @ 0x21b274, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0021b274_arg0 fn_0021b274_arg0;
struct fn_0021b274_arg0 {
    unsigned char pad_0x0[0x20];
    undefined4 field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x34];
    undefined4 field_0x58; /* +0x58 */
    undefined2 field_0x5c; /* +0x5c */
    undefined2 field_0x5e; /* +0x5e */
    undefined1 field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x26];
    undefined1 field_0x87; /* +0x87 */
    unsigned char pad_0x88[0x2];
    undefined1 field_0x8a; /* +0x8a */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */


void FUN_0021b274(fn_0021b274_arg0 *param_1,short param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  short temp_v2;
  unsigned char *pbVar5;
  
  temp_v0 = DAT_0057f108;
  puVar3 = (unsigned int *)&DAT_0057f108;
  pbVar5 = (unsigned char *)(DAT_0057f108 + 0x1b20);
  if (!(param_1 == (fn_0021b274_arg0 *)0x1 || param_1 == (fn_0021b274_arg0 *)0x2)) {
    if (param_1 == (fn_0021b274_arg0 *)0x3 || param_1 == (fn_0021b274_arg0 *)0x4) {
      if (DAT_0057f108 != 0) {
        puVar3 = (unsigned int *)(unsigned int)*pbVar5;
      }
      if ((DAT_0057f108 != 0 && puVar3 != (unsigned int *)0x4) && puVar3 != (unsigned int *)0x3) {
        FUN_00184c00(DAT_0057f108 + 0x1a08,0x18,0);
        temp_v1 = 3;
        *pbVar5 = temp_v1;
      }
    }
  }
  else {
    if (DAT_0057f108 != 0) {
      puVar3 = (unsigned int *)(unsigned int)*pbVar5;
    }
    if ((DAT_0057f108 != 0 && puVar3 != (unsigned int *)0x2) && puVar3 != (unsigned int *)0x1) {
      FUN_00184c00(DAT_0057f108 + 0x1a08,0x17,0);
      temp_v1 = 1;
      *pbVar5 = temp_v1;
    }
  }
  temp_v2 = (short)param_1;
  if (param_1 == (fn_0021b274_arg0 *)0x1) {
    temp_v2 = 9;
  }
  else {
    if (param_1 == (fn_0021b274_arg0 *)0x2) {
      temp_v2 = 10;
    }
    else if (param_1 == (fn_0021b274_arg0 *)0x3) {
      temp_v2 = 0xb;
    }
    else if (param_1 == (fn_0021b274_arg0 *)0x4) {
      temp_v2 = 0xc;
    }
    if (param_1 != (fn_0021b274_arg0 *)0x2) {
      if (param_1 == (fn_0021b274_arg0 *)0x3 || param_1 == (fn_0021b274_arg0 *)0x4) {
        param_2 = 0x14;
      }
      FUN_00184758(temp_v0 + 0x6e4,(int)temp_v2,param_3);
      FUN_00184c00(temp_v0 + 0x6e4,(int)param_2,param_3);
      return;
    }
  }
  param_2 = 0x13;
  FUN_00184758(temp_v0 + 0x6e4,(int)temp_v2,param_3);
  FUN_00184c00(temp_v0 + 0x6e4,(int)param_2,param_3);
  return;
}
