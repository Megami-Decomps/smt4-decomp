/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00255180` (_code @ 0x255180, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlMainFindEntryByListedId(int, unsigned int);

/* Supplied declaration required: btlMainFindEntryByListedId. */
extern int btlGetMainState(void);


void FUN_00255180(unsigned int param_1,int param_2,unsigned short param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = btlGetMainState();
  btlMainFindEntryByListedId(temp_v0,param_1);
  if (temp_v0 != 0) {
    *(unsigned short *)(temp_v0 + param_2 * 2 + 0x72) = param_3;
  }
  return;
}

} /* extern "C" */
