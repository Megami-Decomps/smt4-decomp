/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00512220` (_code @ 0x512220, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int emptyStub_002f4370(unsigned int *, int, int);
int FUN_002f5020(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_005b4454; /* 0x5b4454 */
extern unsigned char DAT_005b4458; /* 0x5b4458 */
extern unsigned int DAT_005b445c; /* 0x5b445c */
extern unsigned int DAT_005b4460; /* 0x5b4460 */

/* Supplied declaration required: emptyStub_002f4370. */
/* Supplied declaration required: FUN_002f5020. */


void FUN_00512220(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002f5020();
  DAT_005b4454 = 0;
  DAT_005b4458 = 1;
  DAT_005b445c = 0;
  DAT_005b4460 = 0;
  emptyStub_002f4370(&DAT_005b445c,0x42cd08,0x100000);
  return;
}

} /* extern "C" */
