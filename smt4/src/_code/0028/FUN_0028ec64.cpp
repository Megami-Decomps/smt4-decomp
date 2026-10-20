/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028ec64` (_code @ 0x28ec64, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nodeTreeRelease(...);

typedef struct fn_0028ec64_arg0 fn_0028ec64_arg0;
struct fn_0028ec64_arg0 {
    unsigned char pad_0x0[0x2];
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0x21];
    void *field_0x24; /* +0x24 */
    void *field_0x28; /* +0x28 */
    void *field_0x2c; /* +0x2c */
    void *field_0x30; /* +0x30 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: nodeTreeRelease. */


void FUN_0028ec64(fn_0028ec64_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  void *pvVar1;
  int temp_v0;
  
  if (param_1->field_0x30 != (fn_0028ec64_arg0 *)0x0) {
    FUN_0028ec64((fn_0028ec64_arg0 *)param_1->field_0x30);
  }
  if (param_1->field_0x2 == 0) {
    if (param_1->field_0x28 != (void *)0x0) {
      temp_v0 = *(int *)((int)param_1->field_0x28 + 0x30);
      if (temp_v0 != 0) {
        if (*(fn_0028ec64_arg0 **)(temp_v0 + 0x30) != (fn_0028ec64_arg0 *)0x0) {
          FUN_0028ec64(*(fn_0028ec64_arg0 **)(temp_v0 + 0x30));
        }
        nodeTreeRelease(temp_v0);
      }
      nodeTreeRelease(param_1->field_0x28);
      param_1->field_0x28 = (void *)0x0;
    }
    pvVar1 = param_1->field_0x24;
    if (pvVar1 != (void *)0x0) {
      if (*(fn_0028ec64_arg0 **)((int)pvVar1 + 0x28) == param_1) {
        *(void **)((int)pvVar1 + 0x28) = param_1->field_0x30;
        if (param_1->field_0x30 != (void *)0x0) {
          *(unsigned int *)((int)param_1->field_0x30 + 0x2c) = 0;
        }
      }
      else {
        if (param_1->field_0x2c != (void *)0x0) {
          *(void **)((int)param_1->field_0x2c + 0x30) = param_1->field_0x30;
        }
        if (param_1->field_0x30 != (void *)0x0) {
          *(void **)((int)param_1->field_0x30 + 0x2c) = param_1->field_0x2c;
        }
      }
      param_1->field_0x2c = (void *)0x0;
      param_1->field_0x30 = (void *)0x0;
      param_1->field_0x24 = (void *)0x0;
    }
    param_1->field_0x2 = 1;
  }
  return;
}

} /* extern "C" */
