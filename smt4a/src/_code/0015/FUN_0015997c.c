/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015997c` (_code @ 0x15997c, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005c0ac4; /* 0x5c0ac4 */
extern unsigned int DAT_005c14c0; /* 0x5c14c0 */
extern unsigned int DAT_006430f4; /* 0x6430f4 */

/* Supplied declaration required: FUN_0016f864. */
extern int FUN_0016f988(unsigned int *, char *, unsigned int, unsigned int);
extern unsigned int FUN_002e3390(char *);
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


int FUN_0015997c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  nn_os_CriticalSection_Enter(&DAT_006430f4);
  if (DAT_005c0ac4 == 0) {
    FUN_0016f864();
    temp_v0 = FUN_002e3390("ndm:u");
    temp_v1 = FUN_0016f988(&DAT_005c14c0,"ndm:u",temp_v0,0);
    if (temp_v1 < 0) {
      nn_os_CriticalSection_Leave(&DAT_006430f4);
      return temp_v1;
    }
  }
  DAT_005c0ac4 = DAT_005c0ac4 + 1;
  nn_os_CriticalSection_Leave(&DAT_006430f4);
  return 0;
}
