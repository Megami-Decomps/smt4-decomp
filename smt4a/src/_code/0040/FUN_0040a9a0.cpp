/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040a9a0` (_code @ 0x40a9a0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0040a9a0_arg0 fn_0040a9a0_arg0;
struct fn_0040a9a0_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
};

/* stack frame of param_2: 6 slot(s), 18 byte(s) */
typedef struct {
    unsigned char spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int FUN_001581dc(unsigned int *);


void FUN_0040a9a0(fn_0040a9a0_arg0 *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  temp_v2 = 0;
  temp_v5 = 0x10000;
  temp_v3 = param_1->field_0x18;
  temp_v4 = param_1->field_0x1c;
  temp_v6 = (unsigned char)param_1->field_0x14;
  temp_v1 = param_2;
  temp_v0 = FUN_001581dc((unsigned int *)&temp_v1);
  param_1->field_0xc = temp_v0;
  return;
}

} /* extern "C" */
