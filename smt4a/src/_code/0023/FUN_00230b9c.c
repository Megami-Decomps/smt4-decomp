/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230b9c` (_code @ 0x230b9c, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00230b9c_arg0 fn_00230b9c_arg0;
struct fn_00230b9c_arg0 {
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

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */


void FUN_00230b9c(fn_00230b9c_arg0 *param_1,short param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  short temp_v1;
  
  temp_v0 = DAT_00588fe8;
  temp_v1 = (short)param_1;
  if (param_1 == (fn_00230b9c_arg0 *)0x0) {
    temp_v1 = 6;
  }
  else {
    if (param_1 == (fn_00230b9c_arg0 *)0x1) {
      temp_v1 = 7;
    }
    else if (param_1 == (fn_00230b9c_arg0 *)0x2) {
      temp_v1 = 8;
    }
    else if (param_1 == (fn_00230b9c_arg0 *)0x3) {
      temp_v1 = 9;
    }
    if (param_1 != (fn_00230b9c_arg0 *)0x1) {
      if (param_1 == (fn_00230b9c_arg0 *)0x2 || param_1 == (fn_00230b9c_arg0 *)0x3) {
        param_2 = 9;
      }
      FUN_00184c00(DAT_00588fe8 + 0x28,(int)param_2,0);
      FUN_00184758(temp_v0 + 0x28,(int)temp_v1,0);
      return;
    }
  }
  param_2 = 8;
  FUN_00184c00(DAT_00588fe8 + 0x28,(int)param_2,0);
  FUN_00184758(temp_v0 + 0x28,(int)temp_v1,0);
  return;
}
