/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00257108` (_code @ 0x257108, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00257108_arg0 fn_00257108_arg0;
struct fn_00257108_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0xc];
    int field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    int field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x4];
    undefined4 field_0x24; /* +0x24 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_00257108(fn_00257108_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_1->field_0x1c - 1;
  param_1->field_0x1c = temp_v0;
  if (temp_v0 == 0) {
    temp_v1 = 0;
    if (temp_v1 < (unsigned int)param_1->field_0x4) {
      do {
        FUN_002c0894(*(unsigned int *)(param_1->field_0x14 + temp_v1 * 4));
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (unsigned int)param_1->field_0x4);
    }
    FUN_002c415c(param_1->field_0x24);
    return;
  }
  return;
}
