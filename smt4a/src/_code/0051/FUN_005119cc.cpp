/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005119cc` (_code @ 0x5119cc, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00188b60(unsigned int *);
int FUN_002f4370(unsigned int *, unsigned char *, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_0042ce3c; /* 0x42ce3c */
extern unsigned int DAT_006430f4; /* 0x6430f4 */

/* Supplied declaration required: FUN_00188b60. */
/* Supplied declaration required: FUN_002f4370. */


void FUN_005119cc(void)

{
/* irregular: 2 native warning(s); review required */
  DAT_006430f4 = 0;
  FUN_00188b60(&DAT_006430f4);
  FUN_002f4370(&DAT_006430f4,&LAB_0042ce3c,0x100000);
  return;
}

} /* extern "C" */
