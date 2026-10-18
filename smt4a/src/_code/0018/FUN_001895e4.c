/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001895e4` (_code @ 0x1895e4, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005b479c; /* 0x5b479c */
extern unsigned char DAT_005c1494; /* 0x5c1494 */
extern int DAT_005c1498; /* 0x5c1498 */
extern unsigned int DAT_005c1fd0; /* 0x5c1fd0 */

extern unsigned int FUN_001a0e10(void);
extern int nn_cfg_CTR_detail_InitializeBase(unsigned int *, unsigned int);
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned int FUN_001895e4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_001a0e10();
  nn_os_CriticalSection_Enter();
  if (DAT_005c1498 == 0) {
    temp_v1 = nn_cfg_CTR_detail_InitializeBase(&DAT_005c1fd0,0x56573b);
    if (temp_v1 >= 0) {
      DAT_005c1494 = 1;
      DAT_005b479c = DAT_005c1fd0;
    }
    else if (temp_v1 == -0x26defc05) {
      nn_os_CriticalSection_Leave(temp_v0);
      return 0xd92103fb;
    }
  }
  DAT_005c1498 = DAT_005c1498 + 1;
  nn_os_CriticalSection_Leave(temp_v0);
  return 0;
}
