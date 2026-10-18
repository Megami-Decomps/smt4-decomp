/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00283428` (_code @ 0x283428, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00283428_arg0 fn_00283428_arg0;
struct fn_00283428_arg0 {
    unsigned char pad_0x0[0x2];
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0x1d];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x3];
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


void FUN_00283428(fn_00283428_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  temp_v0 = 0;
  if (param_1 != (fn_00283428_arg0 *)0x0) {
    do {
      FUN_0028322c((&param_1[10].field_0x30)[temp_v0]);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x32);
    puVar1 = *(unsigned int **)&param_1[10].field_0x20;
    param_1->field_0x24 = (void *)0x0;
    param_1->field_0x28 = (void *)0x0;
    param_1->field_0x2c = (void *)0x0;
    param_1->field_0x30 = (void *)0x0;
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0;
    }
    FUN_00285834(param_1);
    return;
  }
  return;
}
