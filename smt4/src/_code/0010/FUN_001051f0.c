/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001051f0` (_code @ 0x1051f0, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00465199; /* 0x465199 */
extern unsigned int DAT_004651a4; /* 0x4651a4 */
extern unsigned int DAT_004e4138; /* 0x4e4138 */

/* Supplied declaration required: FUN_002c0d08. */
extern int nn_applet_CTR_IsExpectedToProcessHomeButton(void);
extern int nn_os_CriticalSection_TryEnter(unsigned int *);
/* Supplied declaration required: nn_os_LightEvent_ClearSignal. */


unsigned int FUN_001051f0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = nn_applet_CTR_IsExpectedToProcessHomeButton();
  if (temp_v0 != 0) {
    if (DAT_00465199 != '\0') {
      nn_os_LightEvent_ClearSignal(&DAT_004651a4);
      temp_v0 = nn_os_CriticalSection_TryEnter(&DAT_004e4138);
      if (temp_v0 == 0) {
        temp_v1 = 2;
      }
      else {
        temp_v1 = 3;
      }
    }
    else {
      FUN_002c0d08();
      temp_v1 = 1;
    }
  }
  return temp_v1;
}
