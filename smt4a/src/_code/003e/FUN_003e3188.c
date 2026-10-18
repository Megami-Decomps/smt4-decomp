/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e3188` (_code @ 0x3e3188, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e3188_arg1 fn_003e3188_arg1;
struct fn_003e3188_arg1 {
    unsigned char pad_0x0[0x3];
    byte field_0x3; /* +0x3 */
    unsigned char pad_0x4[0x30];
    undefined4 field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x32];
    short field_0x6a; /* +0x6a */
    unsigned char pad_0x6c[0xac];
    unsigned char field_0x118; /* +0x118 */
    unsigned char pad_0x119[0x3];
    unsigned char field_0x11c; /* +0x11c */
    unsigned char pad_0x11d[0x17f];
    unsigned char field_0x29c; /* +0x29c */
    unsigned char pad_0x29d[0x4];
    unsigned char field_0x2a1; /* +0x2a1 */
    unsigned char pad_0x2a2[0x162];
    void *field_0x404; /* +0x404 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_00573868; /* 0x573868 */
extern unsigned int DAT_0057386c; /* 0x57386c */

/* Supplied declaration required: FUN_003e025c. */
/* Supplied declaration required: FUN_003ed238. */
/* Supplied declaration required: FUN_004caca0. */
/* Supplied declaration required: FUN_004cb2a4. */


void FUN_003e3188(unsigned int *param_1,fn_003e3188_arg1 *param_2)

{
/* irregular: 4 native warning(s); review required */
  fn_003e3188_arg1 *pfVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  if (!((*(unsigned int *)&param_2[0x11].field_0x11c & DAT_0057386c) == 0 &&
       (DAT_00573868 & *(unsigned int *)&param_2[0x11].field_0x118) == 0)) {
    FUN_004caca0(param_2,1,1,0);
  }
  else {
    FUN_004caca0(param_2,1,1);
  }
  *param_1 = 0x12;
  param_1[4] = 0;
  param_1[3] = 0;
  pfVar1 = param_2;
  FUN_004cb2a4(param_2,1);
  if (pfVar1 != (fn_003e3188_arg1 *)0x0) {
    FUN_003ed238(param_2,0x400);
    temp_v0 = 4;
    do {
      temp_v1 = *(unsigned int *)(*(int *)&param_2[7].field_0x29c + temp_v0 * 0x1d0 + 0x50);
      if (((temp_v1 & 1) != 0 && (temp_v1 & 0x80) != 0) && (temp_v1 & 0x400) != 0) {
        param_2[7].field_0x2a1 = param_2[7].field_0x2a1 + '\x01';
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x36);
    param_1[4] = 0;
    *param_1 = 0xd;
    param_1[3] = 0;
    FUN_003e025c(param_1,param_2);
    return;
  }
  return;
}
