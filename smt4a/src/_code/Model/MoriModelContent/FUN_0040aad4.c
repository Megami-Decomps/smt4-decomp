/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040aad4` (_code @ 0x40aad4, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0040aad4_arg0 fn_0040aad4_arg0;
struct fn_0040aad4_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    undefined4 field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
};

/* stack frame of param_1: 6 slot(s), 18 byte(s) */
typedef struct {
    unsigned char sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int FUN_001581dc(int *);
/* Supplied declaration required: FUN_00178b04. */
extern unsigned int FUN_003fe9cc(void);


void FUN_0040aad4(fn_0040aad4_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  
  if (param_1->field_0x10 != 0) {
    temp_v3 = 0;
    temp_v6 = 0x10000;
    temp_v2 = param_1->field_0x10;
    temp_v4 = param_1->field_0x18;
    temp_v5 = param_1->field_0x1c;
    temp_v7 = (unsigned char)param_1->field_0x14;
    temp_v0 = FUN_001581dc(&temp_v2);
    param_1->field_0xc = temp_v0;
    temp_v1 = 0x26c;
    FUN_00178b04(0x26c,"c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelContent.cpp",0xef);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = FUN_003fe9cc();
    }
    param_1->field_0x4 = temp_v0;
  }
  return;
}
