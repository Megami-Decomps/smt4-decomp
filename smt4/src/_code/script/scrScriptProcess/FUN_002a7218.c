/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7218` (_code @ 0x2a7218, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002a7218_arg0 fn_002a7218_arg0;
struct fn_002a7218_arg0 {
    unsigned char pad_0x0[0xd4];
    int field_0xd4; /* +0xd4 */
    unsigned char pad_0xd8[0x10];
    int field_0xe8; /* +0xe8 */
    int field_0xec; /* +0xec */
    void *field_0xf0; /* +0xf0 */
    void *field_0xf4; /* +0xf4 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0044de78; /* 0x44de78 */
extern fn_002a7218_arg0 *DAT_0044de7c; /* 0x44de7c */
extern fn_002a7218_arg0 *DAT_0044de80; /* 0x44de80 */

/* Supplied declaration required: FUN_002c415c. */


void FUN_002a7218(fn_002a7218_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1->field_0xe8 != 0) {
    FUN_002c415c();
    param_1->field_0xe8 = 0;
  }
  if (param_1->field_0xec != 0) {
    FUN_002c415c();
    param_1->field_0xec = 0;
  }
  if (param_1->field_0xd4 != 0) {
    FUN_002c415c();
    param_1->field_0xd4 = 0;
  }
  if (DAT_0044de7c == param_1) {
    DAT_0044de7c = param_1->field_0xf4;
  }
  else {
    *(void **)((int)param_1->field_0xf0 + 0xf4) = param_1->field_0xf4;
  }
  if (DAT_0044de80 == param_1) {
    DAT_0044de80 = param_1->field_0xf0;
  }
  else {
    *(void **)((int)param_1->field_0xf4 + 0xf0) = param_1->field_0xf0;
  }
  param_1->field_0xf0 = (void *)0x0;
  param_1->field_0xf4 = (void *)0x0;
  DAT_0044de78 = DAT_0044de78 - 1;
  FUN_002c415c(param_1);
  return;
}
