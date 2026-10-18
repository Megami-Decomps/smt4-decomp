/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230790` (_code @ 0x230790, 0xf8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00230790_arg0 fn_00230790_arg0;
struct fn_00230790_arg0 {
    unsigned char pad_0x0[0x10];
    int field_0x10; /* +0x10 */
    byte field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x844];
    int field_0x860; /* +0x860 */
    int field_0x864; /* +0x864 */
};

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002c0ba8(unsigned int);


void FUN_00230790(fn_00230790_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int uStack_24;
  unsigned int uStack_20;
  int temp_v3;
  unsigned int uStack_18;
  unsigned int temp_v4;
  
  temp_v0 = param_1->field_0x860;
  if (temp_v0 != 8) {
    temp_v2 = 0x7c7b7a79;
    uStack_24 = 0x807f7e7d;
    uStack_20 = 0x81;
    temp_v4 = 0x81;
    temp_v3 = 0x8b8a8988;
    uStack_18 = 0x8f8e8d8c;
    if (param_1->field_0x10 != 1) {
      temp_v1 = *(unsigned char *)((int)&temp_v2 + temp_v0);
      if ((((param_1->field_0x14 != 0) || (param_1->field_0x18 == 8)) ||
          (temp_v0 = FUN_002c0ba8(0x410), temp_v0 == 0)) && (param_1->field_0x860 == 0)) {
        temp_v1 = 0x78;
      }
    }
    else {
      temp_v1 = *(unsigned char *)((int)&temp_v3 + temp_v0);
      if (((param_1->field_0x14 != 0) || (param_1->field_0x18 == 8)) ||
         (temp_v0 = FUN_002c0ba8(0x410), temp_v0 == 0)) {
        if (param_1->field_0x860 == 0) {
          temp_v1 = 0x86;
        }
        else if (param_1->field_0x860 == 3) {
          temp_v1 = 0x87;
        }
      }
    }
  }
  else {
    temp_v2 = 0x84838281;
    temp_v1 = *(unsigned char *)((int)&temp_v2 + param_1->field_0x864);
  }
  FUN_002b8b78(temp_v1);
  return;
}
