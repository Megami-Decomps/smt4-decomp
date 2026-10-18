/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f50bc` (_code @ 0x1f50bc, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057f580; /* 0x57f580 */

/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_003d2150. */


void FUN_001f50bc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f580;
  if (*(int *)(DAT_0057f580 + 8) == 2) {
    *(unsigned int *)(DAT_0057f580 + 8) = 3;
  }
  else {
    *(unsigned int *)(DAT_0057f580 + 0xc) = 3;
  }
  FUN_001846d0(temp_v0 + 0x38,1);
  FUN_003d2150(0x10002aa);
  return;
}
