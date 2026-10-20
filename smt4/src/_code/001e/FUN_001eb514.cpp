/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001eb514` (_code @ 0x1eb514, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_001eb574; /* 0x1eb574 */
extern int FUN_0021073c(...); /* 0x21073c */
extern romwright_code *DAT_00465108; /* 0x465108 */
extern unsigned int DAT_004e3f64; /* 0x4e3f64 */

/* Supplied declaration required: asdProcessCreateSimple. */


void FUN_001eb514(void)

{
/* irregular: 5 native warning(s); review required */
  asdProcessCreateSimple(&LAB_001eb574,DAT_004e3f64,0,0,FUN_0021073c,0,0);
  if (DAT_00465108 != (romwright_code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001eb560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00465108)();
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
