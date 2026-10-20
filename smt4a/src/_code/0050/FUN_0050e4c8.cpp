/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050e4c8` (_code @ 0x50e4c8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(unsigned int *);
int emptyStub_002f4370(unsigned int *, unsigned char *, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_0042ce3c; /* 0x42ce3c */
extern unsigned int DAT_0058936c; /* 0x58936c */
extern unsigned int DAT_0062d280; /* 0x62d280 */

/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
/* Supplied declaration required: emptyStub_002f4370. */


void FUN_0050e4c8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  DAT_0058936c = *(unsigned int *)(param_1 + 4);
  DAT_0062d280 = 0;
  nn_os_CriticalSection_Initialize(&DAT_0062d280);
  emptyStub_002f4370(&DAT_0062d280,&LAB_0042ce3c,0x100000);
  return;
}

} /* extern "C" */
