/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00452624` (_code @ 0x452624, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00451274(int *);
int FUN_0045181c(int *);

typedef struct fn_00452624_arg0 fn_00452624_arg0;
struct fn_00452624_arg0 {
    unsigned char pad_0x0[0x2c];
    int field_0x2c; /* +0x2c */
    int field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x4];
    int field_0x38; /* +0x38 */
    int field_0x3c; /* +0x3c */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00451274. */
/* Supplied declaration required: FUN_0045181c. */


void FUN_00452624(fn_00452624_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = param_1->field_0x38;
  temp_v1 = 0;
  if (temp_v1 < temp_v2) {
    do {
      if (param_1->field_0x3c != 0) {
        temp_v0 = (int)&param_1->field_0x3c + param_1->field_0x3c;
      }
      else {
        temp_v0 = 0;
      }
      piVar2 = (int *)(temp_v0 + temp_v1 * 4);
      temp_v3 = *piVar2;
      if (temp_v3 != 0) {
        temp_v3 = (int)piVar2 + temp_v3;
      }
      else {
        temp_v3 = 0;
      }
      FUN_0045181c(&temp_v3);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  temp_v2 = param_1->field_0x2c;
  temp_v1 = 0;
  if (temp_v1 < temp_v2) {
    do {
      if (param_1->field_0x30 != 0) {
        temp_v0 = (int)&param_1->field_0x30 + param_1->field_0x30;
      }
      else {
        temp_v0 = 0;
      }
      piVar2 = (int *)(temp_v0 + temp_v1 * 4);
      temp_v3 = *piVar2;
      if (temp_v3 != 0) {
        temp_v3 = (int)piVar2 + temp_v3;
      }
      else {
        temp_v3 = 0;
      }
      FUN_00451274(&temp_v3);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  return;
}

} /* extern "C" */
