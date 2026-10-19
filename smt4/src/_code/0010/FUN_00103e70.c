/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103e70` (_code @ 0x103e70, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00465198; /* 0x465198 */
extern unsigned int DAT_004e4138; /* 0x4e4138 */

extern int FUN_00110138(void);
/* Supplied declaration required: nn_applet_CTR_ReplySleepQuery. */
extern unsigned char nn_os_CriticalSection_TryEnter(unsigned int);


unsigned int FUN_00103e70(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  temp_v1 = FUN_00110138();
  if (temp_v1 != 0) {
    if (DAT_00465198 != '\0') {
      temp_v0 = nn_os_CriticalSection_TryEnter((unsigned int)&DAT_004e4138);
      if (temp_v0) {
        temp_v2 = 2;
      }
    }
    else {
      nn_applet_CTR_ReplySleepQuery(0);
      temp_v2 = 1;
    }
  }
  return temp_v2;
}
