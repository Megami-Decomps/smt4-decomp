/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025cc14` (_code @ 0x25cc14, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0025cc14_arg0 fn_0025cc14_arg0;
typedef struct fn_0025cc14_arg1 fn_0025cc14_arg1;
struct fn_0025cc14_arg0 {
    unsigned char pad_0x0[0x1c];
    undefined2 field_0x1c; /* +0x1c */
    unsigned char pad_0x1e[0x2];
    undefined4 field_0x20; /* +0x20 */
    int field_0x24; /* +0x24 */
    int field_0x28; /* +0x28 */
};
struct fn_0025cc14_arg1 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x3];
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x3];
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0x17];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    byte field_0x5c; /* +0x5c */
    byte field_0x5d; /* +0x5d */
    byte field_0x5e; /* +0x5e */
    unsigned char pad_0x5f[0xc];
    byte field_0x6b; /* +0x6b */
    byte field_0x6c; /* +0x6c */
    byte field_0x6d; /* +0x6d */
};

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_002c34a4(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c5ff4. */


void FUN_0025cc14(fn_0025cc14_arg0 *param_1,fn_0025cc14_arg1 *param_2,int param_3,unsigned short param_4
                 )

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (param_1->field_0x28 != 0) {
    FUN_002c4360();
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
  }
  temp_v0 = 0;
  if (param_2 != (fn_0025cc14_arg1 *)0x0) {
    temp_v0 = param_3;
  }
  if ((param_2 != (fn_0025cc14_arg1 *)0x0 && param_3 != 0) && -1 < temp_v0) {
    temp_v0 = FUN_002c34a4(0x10000,0x100,0,param_3,0x10,1);
    param_1->field_0x1c = param_4;
    param_1->field_0x28 = temp_v0;
    param_1->field_0x20 = temp_v0;
    param_1->field_0x24 = param_3;
    FUN_002c5ff4(temp_v0,param_2,param_3);
    return;
  }
  return;
}
