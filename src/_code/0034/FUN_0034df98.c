/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034df98` (_code @ 0x34df98, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b8070. */
/* Supplied declaration required: FUN_002c1d3c. */


void FUN_0034df98(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int in_fpscr;
  
  FUN_002c1d3c(DAT_0044ea00,*(unsigned int *)(param_1 + 0x10));
  VectorSignedToFloat(*(unsigned int *)(*(int *)(param_1 + 0x10) + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3)
  ;
  VectorSignedToFloat(*(unsigned int *)(*(int *)(param_1 + 0x10) + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3)
  ;
  FUN_002b8070();
  return;
}
