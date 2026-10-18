/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045f740` (_code @ 0x45f740, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001b6668. */


void FUN_0045f740(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_001b6668(param_1 + 0xc,param_2 + 0x108);
  FUN_001b6668(param_1,param_2 + 0x100);
  *(unsigned int *)(param_2 + 0x10) = 0;
  return;
}
