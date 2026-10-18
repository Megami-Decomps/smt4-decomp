/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1c1c` (_code @ 0x2a1c1c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_002a1c7c; /* 0x2a1c7c */
extern int FUN_002e10f0(); /* 0x2e10f0 */
extern romwright_code *DAT_005b4020; /* 0x5b4020 */
extern unsigned int DAT_00640388; /* 0x640388 */

/* Supplied declaration required: FUN_0014e38c. */


void FUN_002a1c1c(void)

{
/* irregular: 5 native warning(s); review required */
  FUN_0014e38c(&LAB_002a1c7c,DAT_00640388,0,0,FUN_002e10f0,0,0);
  if (DAT_005b4020 != (romwright_code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002a1c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_005b4020)();
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}
