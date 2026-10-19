/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028ec84` (_code @ 0x28ec84, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0028ec84_arg0 fn_0028ec84_arg0;
struct fn_0028ec84_arg0 {
    unsigned char pad_0x0[0x2];
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0x21];
    void *field_0x24; /* +0x24 */
    void *field_0x28; /* +0x28 */
    void *field_0x2c; /* +0x2c */
    void *field_0x30; /* +0x30 */
};

/* Supplied declaration required: FUN_0028ec64. */


void FUN_0028ec84(fn_0028ec84_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  void *pvVar1;
  fn_0028ec84_arg0 *pfVar2;
  
  if (param_1->field_0x2 == 0) {
    if (param_1->field_0x28 != (void *)0x0) {
      pfVar2 = *(fn_0028ec84_arg0 **)((int)param_1->field_0x28 + 0x30);
      if (pfVar2 != (fn_0028ec84_arg0 *)0x0) {
        if (pfVar2->field_0x30 != (void *)0x0) {
          FUN_0028ec64();
        }
        FUN_0028ec84(pfVar2);
      }
      FUN_0028ec84(param_1->field_0x28);
      param_1->field_0x28 = (void *)0x0;
    }
    pvVar1 = param_1->field_0x24;
    if (pvVar1 != (void *)0x0) {
      if (*(fn_0028ec84_arg0 **)((int)pvVar1 + 0x28) == param_1) {
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
