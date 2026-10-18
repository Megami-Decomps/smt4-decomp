/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377818` (_code @ 0x377818, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

/* Supplied declaration required: FUN_002ad44c. */
/* Supplied declaration required: FUN_00377428. */


void FUN_00377818(void)

{
/* irregular: irregular input(s): in_stack_00000000, in_stack_00000004; 4 native warning(s); review required */
  unsigned int in_stack_00000000;
  unsigned int in_stack_00000004;
  unsigned char temp_v0 [16];
  
  FUN_002ad44c(temp_v0);
  FUN_00377428(temp_v0,in_stack_00000000,in_stack_00000004);
  return;
}
