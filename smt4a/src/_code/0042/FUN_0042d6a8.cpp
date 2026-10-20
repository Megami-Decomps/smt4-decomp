/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042d6a8` (_code @ 0x42d6a8, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bcd48(int, int);

extern signed char DAT_005b4487; /* 0x5b4487 */
extern signed char DAT_005b4488; /* 0x5b4488 */
extern unsigned int DAT_006426b4; /* 0x6426b4 */

/* Supplied declaration required: FUN_001bcd48. */
extern int FUN_004320e4(unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int FUN_0042d6a8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_005b4487 == '\0') {
    temp_v0 = -0x375ef410;
  }
  else if (DAT_005b4488 == '\0') {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_006426b4);
    temp_v0 = FUN_004320e4(0);
    if (temp_v0 < 0) {
      nn_os_CriticalSection_Leave((unsigned int)&DAT_006426b4);
      return temp_v0;
    }
    FUN_001bcd48(16000000,0);
    DAT_005b4488 = '\x01';
    nn_os_CriticalSection_Leave((unsigned int)&DAT_006426b4);
  }
  return temp_v0;
}

} /* extern "C" */
