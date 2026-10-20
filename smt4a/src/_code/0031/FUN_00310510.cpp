/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310510` (_code @ 0x310510, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00310510_arg1 fn_00310510_arg1;
struct fn_00310510_arg1 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    int field_0x10; /* +0x10 */
};

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int iterNotEqual(int *, unsigned int *);


void FUN_00310510(int *param_1,fn_00310510_arg1 *param_2,int *param_3,unsigned int param_4)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int uStack_18;
  
  temp_v2 = *(int *)(*param_3 + 0x18);
  *param_1 = *(int *)(*param_3 + 0x14);
  temp_v1 = 0;
  uStack_18 = param_4;
  temp_v0 = iterNotEqual(&temp_v2,(unsigned int *)&temp_v1);
  if (temp_v0 != 0) {
    *(int *)(temp_v2 + 0x14) = *param_1;
  }
  *(unsigned int *)(*param_3 + 0x18) = 0;
  temp_v1 = 0;
  temp_v0 = iterNotEqual(param_1,(unsigned int *)&temp_v1);
  if (temp_v0 != 0) {
    *(int *)(*param_1 + 0x18) = temp_v2;
  }
  *(unsigned int *)(*param_3 + 0x14) = 0;
  if (param_2->field_0x4 == *param_3) {
    param_2->field_0x4 = *param_1;
  }
  if (param_2->field_0x8 == *param_3) {
    param_2->field_0x8 = temp_v2;
  }
  param_2->field_0x10 = param_2->field_0x10 - 1;
  return;
}

} /* extern "C" */
