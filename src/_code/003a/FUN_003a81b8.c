/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a81b8` (_code @ 0x3a81b8, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_002356d4. */
/* Supplied declaration required: FUN_002a0f50. */
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002b8b78. */


void FUN_003a81b8(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0x5a0));
  if (temp_v0 == 2) {
    FUN_002356d4(0);
    FUN_002a0f68(0);
    *(unsigned int *)(param_1 + 0x18) = 0;
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned char *)(param_1 + 0xa5b0) = 0;
    FUN_002a0f50();
    FUN_002b8b78();
    return;
  }
  return;
}
