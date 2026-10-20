/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394490` (_code @ 0x394490, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strncpy(...);

typedef struct fn_00394490_arg0 fn_00394490_arg0;
struct fn_00394490_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x5];
    undefined1 field_0x1a; /* +0x1a */
    unsigned char pad_0x1b[0x1];
    undefined2 field_0x1c; /* +0x1c */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;


void FUN_00394490(fn_00394490_arg0 *param_1,unsigned short param_2,unsigned int param_3)

{
  param_1->field_0x1a = 1;
  param_1->field_0x1c = param_2;
  *(unsigned int *)(param_1 + 1) = 0;
  *(unsigned int *)&param_1[1].field_0x4 = 0;
  *(unsigned int *)&param_1[1].field_0x8 = 0;
  *(unsigned int *)&param_1[1].field_0xc = 0;
  *(unsigned int *)&param_1[1].field_0x10 = 0;
  *(unsigned int *)&param_1[1].field_0x14 = 0;
  strncpy(param_1 + 1,param_3,0x18);
  return;
}

} /* extern "C" */
