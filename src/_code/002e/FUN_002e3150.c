/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3150` (_code @ 0x2e3150, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_002bee58. */


void FUN_002e3150(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0044e144;
  *(unsigned char *)(DAT_0044e144 + 0x1eb4) = 1;
  FUN_002bee58(temp_v0 + 0x274,7);
  FUN_002bee58(temp_v0 + 0x300,8);
  return;
}
