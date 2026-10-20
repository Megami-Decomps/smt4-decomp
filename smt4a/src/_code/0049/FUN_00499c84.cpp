/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00499c84` (_code @ 0x499c84, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001695a0(...);
int asdMemFree(...);
int scrScriptProcessDestroy(...);
int FUN_0019e2dc(...);
int FUN_0019ea64(...);
int FUN_00497144(...);

typedef struct fn_00499c84_arg0 fn_00499c84_arg0;
struct fn_00499c84_arg0 {
    unsigned char pad_0x0[0x394];
    int field_0x394; /* +0x394 */
    int field_0x398; /* +0x398 */
    int field_0x39c; /* +0x39c */
    unsigned char pad_0x3a0[0x79c];
    void *field_0xb3c; /* +0xb3c */
};

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_0019e2dc. */
/* Supplied declaration required: FUN_0019ea64. */
/* Supplied declaration required: FUN_00497144. */


void FUN_00499c84(fn_00499c84_arg0 *param_1)

{
/* irregular: 6 native warning(s); review required */
  if (param_1->field_0xb3c != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1->field_0xb3c + 4))();
    param_1->field_0xb3c = (void *)0x0;
  }
  if (param_1->field_0x39c != 0) {
    scrScriptProcessDestroy();
    param_1->field_0x39c = 0;
  }
  if (param_1->field_0x394 != 0) {
    asdMemFree();
    param_1->field_0x394 = 0;
  }
  if (param_1->field_0x398 != 0) {
    asdMemFree();
    param_1->field_0x398 = 0;
  }
  FUN_0019e2dc();
  FUN_00497144(param_1);
  FUN_001695a0();
  FUN_0019ea64(1);
  return;
}

} /* extern "C" */
