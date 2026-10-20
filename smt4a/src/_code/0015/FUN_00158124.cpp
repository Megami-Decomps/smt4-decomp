/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158124` (_code @ 0x158124, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00158124_arg0 fn_00158124_arg0;
struct fn_00158124_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    void *field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    void *field_0x18; /* +0x18 */
    void *field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x14];
    uint field_0x34; /* +0x34 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern int DAT_0056fcb8; /* 0x56fcb8 */


unsigned char FUN_00158124(fn_00158124_arg0 *param_1)

{
  int temp_v0;
  void *pvVar2;
  int *piVar3;
  int temp_v1;
  
  if ((param_1->field_0x34 & 1) == 0) {
    if ((DAT_0056fcb8 != 0) &&
       (!((*(unsigned int *)(DAT_0056fcb8 + 4) & 1) == 0 || (*(unsigned int *)(DAT_0056fcb8 + 4) & 2) == 0))) {
      pvVar2 = (void *)(DAT_0056fcb8 + 0x10);
    }
    else {
      pvVar2 = param_1->field_0xc;
    }
    if (((param_1->field_0x10 != 0 && param_1->field_0x4 != 0) && pvVar2 != (void *)0x0) &&
       (*(float *)((int)pvVar2 + 0x34) != 0.0f)) {
      piVar3 = (int *)param_1->field_0x18;
      if (piVar3 != param_1->field_0x1c) {
        temp_v0 = 0;
        do {
          temp_v1 = *piVar3;
          piVar3 = piVar3 + 1;
          if ((*(unsigned int *)(temp_v1 + 4) & 1) == 0) {
            temp_v0 = temp_v0 + 1;
          }
        } while (piVar3 != param_1->field_0x1c);
        return temp_v0 != 0;
      }
    }
  }
  return 0;
}

} /* extern "C" */
