/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036840c` (_code @ 0x36840c, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0036840c_arg0 fn_0036840c_arg0;
typedef struct fn_0036840c_arg1 fn_0036840c_arg1;
struct fn_0036840c_arg0 {
    unsigned char pad_0x0[0x10];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0xb];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x3];
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0xb];
    unsigned char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x3];
    unsigned char field_0x34; /* +0x34 */
    unsigned char pad_0x35[0x37];
    int field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0x10];
    int field_0x80; /* +0x80 */
    unsigned char pad_0x84[0xc];
    int field_0x90; /* +0x90 */
};
struct fn_0036840c_arg1 {
    unsigned char pad_0x0[0x10];
    void *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x8];
    void *field_0x20; /* +0x20 */
    void *field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x8];
    void *field_0x30; /* +0x30 */
    void *field_0x34; /* +0x34 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


void FUN_0036840c(fn_0036840c_arg0 *param_1,fn_0036840c_arg1 *param_2)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int *piVar4;
  int temp_v2;
  
  piVar4 = param_2->field_0x24;
  for (piVar1 = param_2->field_0x20; piVar1 != piVar4; piVar1 = piVar1 + 2) {
    *(int *)(param_1->field_0x6c + *piVar1 * 4) = piVar1[1];
  }
  piVar4 = param_2->field_0x34;
  for (piVar1 = param_2->field_0x30; piVar1 != piVar4; piVar1 = piVar1 + 2) {
    *(int *)(param_1->field_0x80 + *piVar1 * 4) = piVar1[1];
  }
  piVar1 = param_2->field_0x10;
  temp_v2 = param_2->field_0x14 - (int)piVar1;
  temp_v0 = 1;
  if (temp_v0 < temp_v2 / 0xc + 1) {
    do {
      temp_v1 = *piVar1;
      piVar4 = piVar1 + 1;
      temp_v0 = temp_v0 + 1;
      piVar1 = piVar1 + 3;
      *(int *)(param_1->field_0x90 + temp_v1 * 4) = *piVar4;
    } while (temp_v0 < temp_v2 / 0xc + 1);
  }
  return;
}
