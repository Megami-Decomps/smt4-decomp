/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018968c` (_code @ 0x18968c, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005b479c; /* 0x5b479c */
extern int DAT_005c1490; /* 0x5c1490 */
extern unsigned int DAT_005c1fcc; /* 0x5c1fcc */
extern unsigned int DAT_005c1fd0; /* 0x5c1fd0 */

extern unsigned int FUN_001a0e10(void);
extern int nn_cfg_CTR_detail_InitializeBase(unsigned int *, char *);
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned int FUN_0018968c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_001a0e10();
  nn_os_CriticalSection_Enter();
  if (DAT_005c1490 == 0) {
    temp_v1 = nn_cfg_CTR_detail_InitializeBase(&DAT_005c1fcc,"cfg:i");
    if (temp_v1 >= 0) {
      DAT_005c1fd0 = DAT_005c1fcc;
      DAT_005b479c = DAT_005c1fcc;
    }
    else if (temp_v1 == -0x26defc05) {
      nn_os_CriticalSection_Leave(temp_v0);
      return 0xd92103fb;
    }
  }
  DAT_005c1490 = DAT_005c1490 + 1;
  nn_os_CriticalSection_Leave(temp_v0);
  return 0;
}
