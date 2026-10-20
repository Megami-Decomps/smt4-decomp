/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00511778` (_code @ 0x511778, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(...);
int emptyStub_002f4370(unsigned int *, unsigned char *, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_0042ce3c; /* 0x42ce3c */
extern unsigned int DAT_006426c0; /* 0x6426c0 */
extern unsigned int DAT_006426cc; /* 0x6426cc */

/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
/* Supplied declaration required: emptyStub_002f4370. */


void FUN_00511778(void)

{
/* irregular: 2 native warning(s); review required */
  DAT_006426c0 = 0;
  nn_os_CriticalSection_Initialize(&DAT_006426c0);
  DAT_006426cc = 0;
  nn_os_CriticalSection_Initialize(&DAT_006426cc,&LAB_0042ce3c,0x100000);
  emptyStub_002f4370(&DAT_006426cc,&LAB_0042ce3c,0x100000);
  return;
}

} /* extern "C" */
