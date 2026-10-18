/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00249da4` (_code @ 0x249da4, 0x16c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00249da4_arg0 fn_00249da4_arg0;
struct fn_00249da4_arg0 {
    unsigned char pad_0x0[0x8];
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x24];
    undefined1 field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x3];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    unsigned char pad_0x40[0xc];
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    unsigned char pad_0x58[0x20];
    undefined4 field_0x78; /* +0x78 */
    unsigned char pad_0x7c[0x4];
    undefined4 field_0x80; /* +0x80 */
    undefined4 field_0x84; /* +0x84 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern unsigned int DAT_00433158; /* 0x433158 */

extern int FUN_0024eed4(fn_00249da4_arg0 *, unsigned int);
/* Supplied declaration required: FUN_002a515c. */
/* Supplied declaration required: FUN_002a6410. */
/* Supplied declaration required: FUN_002a8978. */
/* Supplied declaration required: FUN_002a8ab0. */
/* Supplied declaration required: FUN_002aeb2c. */
extern int FUN_002c0ac8(fn_00249da4_arg0 *);
extern int FUN_002c0ba8(unsigned int);


void FUN_00249da4(fn_00249da4_arg0 *param_1,unsigned int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_002c0ba8(0x522);
  if ((temp_v0 == 0) || (param_1 != (fn_00249da4_arg0 *)0x0)) {
    temp_v1 = FUN_002c0ac8(param_1);
    temp_v2 = *(int *)(temp_v1 + 0x84) != -1;
    temp_v0 = temp_v1;
    if (temp_v2) {
      temp_v0 = *(int *)(temp_v1 + 0x80);
    }
    if (temp_v2 && temp_v0 != 0) {
      FUN_002aeb2c(*(unsigned int *)(temp_v1 + 0x10));
      FUN_002a6410(DAT_00433158,*(unsigned int *)(temp_v1 + 0x10),*(unsigned int *)(temp_v1 + 0x84));
      *(unsigned int *)(temp_v1 + 0x84) = 0xffffffff;
      *(unsigned int *)(temp_v1 + 0x80) = 0;
    }
    *(unsigned char *)(temp_v1 + 0x30) = 1;
    FUN_002a8978(temp_v1);
    *(unsigned int *)(temp_v1 + 8) = param_2;
    temp_v0 = FUN_0024eed4(param_1,param_2);
    if (temp_v0 != 0) {
      if (temp_v0 == 1) {
        FUN_002a8ab0(temp_v1,2,0);
        *(unsigned int *)(temp_v1 + 0x78) = 2;
        return;
      }
      if (temp_v0 == 2) {
        if (param_3 != 0) {
          FUN_002a8ab0(temp_v1,6,0);
        }
        else {
          FUN_002a8ab0(temp_v1,7,0);
        }
        *(unsigned int *)(temp_v1 + 0x78) = 2;
        return;
      }
      if (temp_v0 == 3) {
        FUN_002a8ab0(temp_v1,5,0);
        temp_v0 = FUN_002c0ac8(param_1);
        *(unsigned int *)(temp_v0 + 0x78) = 1;
        *(unsigned int *)(temp_v0 + 0x4c) = *(unsigned int *)(temp_v0 + 0x34);
        *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(temp_v0 + 0x38);
        *(unsigned int *)(temp_v0 + 0x54) = *(unsigned int *)(temp_v0 + 0x3c);
        FUN_002a515c(temp_v1 + 0x40,*(unsigned int *)(temp_v1 + 8));
        return;
      }
    }
    else {
      *(unsigned int *)(temp_v1 + 0x24) = 0;
      if (*(int *)(temp_v1 + 0x78) != 0) {
        *(unsigned int *)(temp_v1 + 0x78) = 1;
      }
      else {
        *(unsigned char *)(temp_v1 + 0x30) = 0;
        *(unsigned int *)(temp_v1 + 0x28) = 0;
      }
    }
  }
  return;
}
