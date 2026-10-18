/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230ac0` (_code @ 0x230ac0, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00230ac0_arg0 fn_00230ac0_arg0;
struct fn_00230ac0_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x38];
    undefined4 field_0x4c; /* +0x4c */
    undefined2 field_0x50; /* +0x50 */
    undefined2 field_0x52; /* +0x52 */
    undefined1 field_0x54; /* +0x54 */
    unsigned char pad_0x55[0x31];
    undefined1 field_0x86; /* +0x86 */
    unsigned char pad_0x87[0x3];
    undefined1 field_0x8a; /* +0x8a */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int DAT_0057f268; /* 0x57f268 */

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */


void FUN_00230ac0(fn_00230ac0_arg0 *param_1,short param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  short temp_v2;
  
  temp_v0 = DAT_0057f268;
  temp_v2 = (short)param_1;
  if (param_1 == (fn_00230ac0_arg0 *)0x4) {
    temp_v2 = 10;
    param_2 = 0xc;
  }
  else {
    if (param_1 == (fn_00230ac0_arg0 *)0x5) {
      temp_v2 = 0xb;
    }
    else if (param_1 == (fn_00230ac0_arg0 *)0x7) {
      temp_v2 = 0xd;
    }
    else if (param_1 == (fn_00230ac0_arg0 *)0x8) {
      temp_v2 = 0xe;
    }
    if (param_1 != (fn_00230ac0_arg0 *)0x5) {
      if (param_1 == (fn_00230ac0_arg0 *)0x7 || param_1 == (fn_00230ac0_arg0 *)0x8) {
        param_2 = 0xd;
      }
    }
    else {
      param_2 = 0xc;
    }
  }
  FUN_00184c00(DAT_0057f268 + 0x928,(int)param_2,param_3);
  temp_v1 = 0;
  do {
    FUN_00184758(temp_v0 + temp_v1 * 0x8c + 0x298,(int)temp_v2,param_3);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  if (param_4 != 0) {
    FUN_00184758(temp_v0 + 0x4c8,0xc,param_3);
    return;
  }
  FUN_00184758(temp_v0 + 0x4c8,(int)temp_v2,param_3);
  return;
}
