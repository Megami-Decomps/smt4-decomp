/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00409294` (_code @ 0x409294, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0034111c. */


void FUN_00409294(void)

{
/* irregular: irregular input(s): in_fpscr, in_r3, in_stack_00000000; 5 native warning(s); review required */
  unsigned int in_r3;
  unsigned int in_fpscr;
  int in_stack_00000000;
  
  FUN_0016c4b8(DAT_0059dbb4,0);
  in_fpscr = in_fpscr & 0xfffffff;
  VectorSignedToFloat(0x100 - in_stack_00000000,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0034111c(in_r3);
  VectorSignedToFloat(0x100 - in_stack_00000000,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0034111c(in_r3);
  return;
}
