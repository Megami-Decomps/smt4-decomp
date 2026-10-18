/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fe0b8` (_code @ 0x1fe0b8, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002a72fc. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c583c. */


void FUN_001fe0b8(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 4);
  *(unsigned char *)(temp_v0 + 0x18) = 1;
  if (*(int *)(temp_v0 + 0x1c) != 0) {
    FUN_002a72fc();
    FUN_002b2520(*(unsigned int *)(temp_v0 + 0x1c));
    *(unsigned int *)(temp_v0 + 0x1c) = 0;
  }
  FUN_002c583c(0);
  return;
}
