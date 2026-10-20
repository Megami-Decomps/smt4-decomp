/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5154` (_code @ 0x2e5154, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028322c(...);
int FUN_00285834(...);

typedef struct fn_002e5154_arg0 fn_002e5154_arg0;
struct fn_002e5154_arg0 {
    unsigned char pad_0x0[0x2];
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0x11];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x3];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x7];
    void *field_0x24; /* +0x24 */
    void *field_0x28; /* +0x28 */
    void *field_0x2c; /* +0x2c */
    void *field_0x30; /* +0x30 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0028322c. */
/* Supplied declaration required: FUN_00285834. */


void FUN_002e5154(fn_002e5154_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  void *unaff_r6;
  
  if (param_1 != (fn_002e5154_arg0 *)0x0) {
    unaff_r6 = (void *)0x0;
  }
  temp_v0 = 0;
  if (param_1 == (fn_002e5154_arg0 *)0x0) {
    return;
  }
  param_1->field_0x24 = unaff_r6;
  do {
    FUN_0028322c((&param_1[0xb].field_0x28)[temp_v0]);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x32);
  puVar1 = *(unsigned int **)&param_1[0xb].field_0x18;
  param_1->field_0x24 = unaff_r6;
  param_1->field_0x28 = unaff_r6;
  param_1->field_0x2c = unaff_r6;
  param_1->field_0x30 = unaff_r6;
  *(unsigned int *)&param_1[1].field_0x14 = 0;
  *(unsigned int *)&param_1[1].field_0x18 = 0;
  *(unsigned int *)&param_1[1].field_0x1c = 0;
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = (unsigned int)unaff_r6;
  }
  FUN_00285834(param_1);
  return;
}

} /* extern "C" */
