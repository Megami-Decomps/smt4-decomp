/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b2e0` (_code @ 0x33b2e0, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

extern unsigned int FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_00282a90. */
/* Supplied declaration required: FUN_003ae28c. */


void FUN_0033b2e0(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_003ae28c(DAT_00439ca8);
  temp_v0 = FUN_0027eb98(DAT_0043427c);
  FUN_00282a90(0,temp_v0,0,0,6,4,6,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}
