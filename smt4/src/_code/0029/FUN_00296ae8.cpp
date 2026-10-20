/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296ae8` (_code @ 0x296ae8, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002869e8(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_002869e8. */


void FUN_00296ae8(void)

{
/* irregular: irregular input(s): in_stack_00000004, in_stack_00000008; 3 native warning(s); review required */
  int temp_v0;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (((in_stack_00000004 != 0) &&
      (temp_v0 = in_stack_00000004 + in_stack_00000008 * 0x10 + *(int *)(in_stack_00000004 + 0x14),
      *(int *)(temp_v0 + 4) != 0)) && (in_stack_00000004 + *(int *)(temp_v0 + 8) != 0)) {
    FUN_002869e8();
  }
  return;
}

} /* extern "C" */
