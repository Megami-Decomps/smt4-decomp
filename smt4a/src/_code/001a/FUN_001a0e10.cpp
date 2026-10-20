/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0e10` (_code @ 0x1a0e10, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ClearExclusiveLocal(void);
int nn_os_CriticalSection_Initialize(int);
int svcSleepThread(int, int);
int hasExclusiveAccess(int);

extern unsigned int DAT_005b4794; /* 0x5b4794 */
extern unsigned int uRam006426d8; /* 0x6426d8 */

/* Unsupported intrinsic, declaration required: ClearExclusiveLocal (CALLOTHER). */
/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
/* Supplied declaration required: svcSleepThread. */


unsigned int FUN_001a0e10(void)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = DAT_005b4794;
  do {
    if (DAT_005b4794 != 0) {
      ClearExclusiveLocal();
      goto LAB_001a0e44;
    }
    temp_v0 = (unsigned char)hasExclusiveAccess(0x5b4794);
  } while (!temp_v0);
  DAT_005b4794 = 1;
LAB_001a0e44:
  if (temp_v1 == 0) {
    uRam006426d8 = 0;
    nn_os_CriticalSection_Initialize(0x6426d8);
    do {
      temp_v0 = (unsigned char)hasExclusiveAccess(0x5b4794);
    } while (!temp_v0);
    DAT_005b4794 = 0x6426d8;
  }
  else {
    while (DAT_005b4794 < 2) {
      svcSleepThread(1000000,0);
    }
  }
  return DAT_005b4794;
}

} /* extern "C" */
