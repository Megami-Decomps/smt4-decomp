/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a83bc` (_code @ 0x1a83bc, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_0059dafc; /* 0x59dafc */

/* Supplied declaration required: FUN_001b3780. */


void FUN_001a83bc(int param_1)

{
/* irregular: 3 native warning(s); review required */
  FUN_001b3780();
                    /* WARNING: Could not recover jumptable at 0x001a83ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(&DAT_0059dafc +
              (unsigned int)*(unsigned char *)(param_1 + 0xd) * 4 + (unsigned int)*(unsigned char *)(param_1 + 0xc) * 0x20))(param_1);
  return;
}
