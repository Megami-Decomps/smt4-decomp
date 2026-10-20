/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe2e8` (_code @ 0x2fe2e8, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_002fe2e8_arg0 fn_002fe2e8_arg0;
struct fn_002fe2e8_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x10];
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4];
    void *field_0x20; /* +0x20 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


void FUN_002fe2e8(fn_002fe2e8_arg0 *param_1,int param_2)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v1 = *(int *)((int)param_1->field_0x20 + 0xc0) * *(int *)((int)param_1->field_0x20 + 0xc4);
  if ((temp_v1 != 0) &&
     (temp_v0 = param_1->field_0x18 +
              (((unsigned int)(param_2 - param_1->field_0x18) / 0x28) * temp_v1 + param_1->field_0x4) * 0x28,
     0 < (int)temp_v1)) {
    puVar2 = (unsigned int *)(temp_v0 - 0x18);
    if ((temp_v1 & 1) != 0) {
      puVar2 = (unsigned int *)(temp_v0 + 0x10);
      *puVar2 = 0xffffffff;
    }
    for (temp_v0 = (int)temp_v1 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar2[10] = 0xffffffff;
      puVar2 = puVar2 + 0x14;
      *puVar2 = 0xffffffff;
    }
  }
  return;
}

} /* extern "C" */
