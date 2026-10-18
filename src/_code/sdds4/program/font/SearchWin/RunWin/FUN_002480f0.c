/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002480f0` (_code @ 0x2480f0, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0043e158; /* 0x43e158 */

/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002bf9e8. */


void FUN_002480f0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e158;
  if (*(int *)(DAT_0043e158 + 8) == 2) {
    *(unsigned int *)(DAT_0043e158 + 8) = 3;
  }
  else {
    *(unsigned int *)(DAT_0043e158 + 0xc) = 3;
  }
  FUN_002bf030(temp_v0 + 0x38,1);
  FUN_002bf9e8(0x10001fe);
  return;
}
