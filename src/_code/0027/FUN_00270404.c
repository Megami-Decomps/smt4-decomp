/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270404` (_code @ 0x270404, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_00447e58; /* 0x447e58 */

/* Supplied declaration required: FUN_00192320. */
/* Supplied declaration required: FUN_002a7aa0. */
/* Supplied declaration required: FUN_002e0020. */


void FUN_00270404(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0x3f;
  do {
    if (*(int *)(DAT_00447e58 + temp_v0 * 0x38 + 0x3c) != 0) {
      FUN_002a7aa0();
      *(unsigned int *)(DAT_00447e58 + temp_v0 * 0x38 + 0x3c) = 0;
    }
    temp_v0 = temp_v0 - 1;
  } while (-1 < temp_v0);
  FUN_002e0020();
  FUN_00192320();
  return;
}
