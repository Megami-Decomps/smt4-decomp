/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042d5b4` (_code @ 0x42d5b4, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_005b4486; /* 0x5b4486 */
extern signed char DAT_005b4487; /* 0x5b4487 */
extern signed char DAT_005b4488; /* 0x5b4488 */
extern signed char DAT_005b448a; /* 0x5b448a */
extern unsigned int DAT_006426b4; /* 0x6426b4 */

extern int FUN_0042fbd4(void);
extern unsigned int FUN_004303d0(unsigned int);
extern unsigned int FUN_004320c4(unsigned int);
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned int FUN_0042d5b4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0xc8a10bf0;
  if ((DAT_005b4486 != '\0') || (temp_v0 = FUN_0042fbd4(), temp_v0 != 0)) {
    nn_os_CriticalSection_Enter(&DAT_006426b4);
    temp_v1 = 0;
    if (param_1 != 0) {
      temp_v0 = FUN_0042fbd4();
      if (temp_v0 == 0 && DAT_005b448a == '\0') {
        temp_v1 = 0xc8810bea;
        nn_os_CriticalSection_Leave(&DAT_006426b4);
        return temp_v1;
      }
      temp_v1 = FUN_004303d0(0xe);
    }
    if (DAT_005b4487 == '\0') {
      nn_os_CriticalSection_Leave(&DAT_006426b4);
      return 0xc8a10bf0;
    }
    if (DAT_005b4488 != '\0') {
      temp_v1 = FUN_004320c4(0);
      if ((temp_v1 & 0x80000000) != 0) {
        nn_os_CriticalSection_Leave(&DAT_006426b4);
        return temp_v1;
      }
      DAT_005b4488 = '\0';
    }
    nn_os_CriticalSection_Leave(&DAT_006426b4);
  }
  return temp_v1;
}
