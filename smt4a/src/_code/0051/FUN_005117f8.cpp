/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005117f8` (_code @ 0x5117f8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(unsigned int *);
int emptyStub_002f4370(unsigned char **, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_0055b3b0; /* 0x55b3b0 */
extern unsigned char *DAT_006462a0; /* 0x6462a0 */
extern unsigned int DAT_006462a4; /* 0x6462a4 */
extern unsigned int DAT_006462b0; /* 0x6462b0 */
extern unsigned int DAT_006462b4; /* 0x6462b4 */
extern unsigned int DAT_006462b8; /* 0x6462b8 */

/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
/* Supplied declaration required: emptyStub_002f4370. */


void FUN_005117f8(void)

{
/* irregular: 2 native warning(s); review required */
  DAT_006462a0 = &DAT_0055b3b0;
  DAT_006462a4 = 0;
  nn_os_CriticalSection_Initialize(&DAT_006462a4);
  DAT_006462b0 = 0;
  DAT_006462b4 = 0;
  DAT_006462b8 = 0;
  emptyStub_002f4370(&DAT_006462a0,0x43a20c,0x100000);
  return;
}

} /* extern "C" */
