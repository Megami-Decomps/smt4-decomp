/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7f98` (_code @ 0x3a7f98, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_0023553c. */
/* Supplied declaration required: FUN_002a0cb0. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: FUN_002b8838. */


void FUN_003a7f98(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0x5a0));
  if (temp_v0 == 2) {
    FUN_0023553c(0);
    FUN_002a0cc8(0);
    *(unsigned int *)(param_1 + 0x18) = 0;
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned char *)(param_1 + 0xa5b0) = 0;
    FUN_002a0cb0();
    FUN_002b8838();
    return;
  }
  return;
}
