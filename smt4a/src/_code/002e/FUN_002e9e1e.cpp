/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9e1e` (_code @ 0x2e9e1e, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_002e9e1e_arg0 fn_002e9e1e_arg0;
struct fn_002e9e1e_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x8];
    void *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
};

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int wordRefsDiffer_002e9b20(int **, unsigned int **);


void FUN_002e9e1e(fn_002e9e1e_arg0 *param_1)

{
  int temp_v0;
  int *piVar2;
  int *temp_v1;
  unsigned int *temp_v2;
  
  temp_v2 = (unsigned int *)param_1->field_0x10;
  piVar2 = (int *)*temp_v2;
  while (temp_v1 = piVar2, temp_v0 = wordRefsDiffer_002e9b20(&temp_v1,&temp_v2), temp_v0 != 0) {
    piVar2 = (int *)param_1->field_0x10;
    if (temp_v1 != param_1->field_0x10) {
      piVar2 = (int *)*temp_v1;
      *(int **)temp_v1[1] = piVar2;
      *(int *)(*temp_v1 + 4) = temp_v1[1];
      param_1->field_0x14 = param_1->field_0x14 - 1;
      *temp_v1 = param_1->field_0x4;
      param_1->field_0x4 = (undefined4)temp_v1;
    }
  }
  return;
}

} /* extern "C" */
