/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001388e8` (_code @ 0x1388e8, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_applet_CTR_ReplySleepQuery(int);

extern signed char DAT_005b408c; /* 0x5b408c */
extern unsigned int DAT_00640550; /* 0x640550 */

extern int FUN_0014733c(void);
/* Supplied declaration required: nn_applet_CTR_ReplySleepQuery. */
extern unsigned char nn_os_CriticalSection_TryEnter(unsigned int);


unsigned int FUN_001388e8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  temp_v1 = FUN_0014733c();
  if (temp_v1 != 0) {
    if (DAT_005b408c != '\0') {
      temp_v0 = nn_os_CriticalSection_TryEnter((unsigned int)&DAT_00640550);
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

} /* extern "C" */
