/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020d4fc` (_code @ 0x20d4fc, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_00253538. */
/* Supplied declaration required: FUN_0027e9e4. */


void FUN_0020d4fc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00447a78;
  *(unsigned char *)(DAT_00447a78 + 0x18) = 1;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  FUN_00253538();
  FUN_0027e9e4(0,1);
  return;
}
