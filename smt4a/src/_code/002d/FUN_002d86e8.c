/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d86e8` (_code @ 0x2d86e8, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0058103c; /* 0x58103c */

/* Supplied declaration required: FUN_001f4e20. */
/* Supplied declaration required: FUN_002392b8. */


void FUN_002d86e8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0058103c;
  *(unsigned char *)(DAT_0058103c + 0x1d) = 1;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  FUN_002392b8();
  FUN_001f4e20(0,1);
  return;
}
