/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002419c0` (_code @ 0x2419c0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00447e88; /* 0x447e88 */

/* Supplied declaration required: FUN_002712dc. */
extern int FUN_0027eecc(void);
/* Supplied declaration required: FUN_002d5374. */


void FUN_002419c0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0027eecc();
  if (temp_v0 == 0x1c) {
    *(unsigned int *)(DAT_00447e88 + 4) = 10;
    FUN_002d5374();
    FUN_002712dc();
    return;
  }
  return;
}
