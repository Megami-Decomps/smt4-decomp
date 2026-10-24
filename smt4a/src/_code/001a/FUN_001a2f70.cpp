/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a2f70` (_code @ 0x1a2f70, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_Thread_FinalizeImpl(int *);
int FUN_002e3140(void);
int software_interrupt(int);

extern unsigned char DAT_005b4448; /* 0x5b4448 */
extern int DAT_005b4454; /* 0x5b4454 */
extern unsigned char DAT_005b4458; /* 0x5b4458 */
extern int DAT_006416a8; /* 0x6416a8 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: nn_os_Thread_FinalizeImpl. */
/* Supplied declaration required: FUN_002e3140. */


void FUN_001a2f70(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  DAT_005b4448 = 1;
  software_interrupt(0x18);
  if (DAT_006416a8 < 0) {
    FUN_002e3140();
  }
  software_interrupt(0x24);
  if (DAT_005b4454 < 0) {
    FUN_002e3140();
  }
  DAT_005b4458 = 1;
  nn_os_Thread_FinalizeImpl(&DAT_005b4454);
  if (DAT_005b4454 != 0) {
    software_interrupt(0x23);
    DAT_005b4454 = 0;
  }
  temp_v0 = 0;
  do {
    if ((&DAT_006416a8)[temp_v0] != 0) {
      software_interrupt(0x23);
      (&DAT_006416a8)[temp_v0] = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  return;
}

} /* extern "C" */
