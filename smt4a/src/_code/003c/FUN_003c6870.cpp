/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c6870` (_code @ 0x3c6870, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004aa8b0(unsigned int, int);

extern unsigned int DAT_00570dd8; /* 0x570dd8 */
extern unsigned int DAT_00570ddc; /* 0x570ddc */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_004aa8b0. */


unsigned int FUN_003c6870(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_004aa8b0(*param_1,1);
  temp_v0 = btlGetMainState();
  temp_v1 = DAT_00570ddc | *(unsigned int *)(temp_v0 + 0x45a4);
  *(unsigned int *)(temp_v0 + 0x45a0) = DAT_00570dd8 | *(unsigned int *)(temp_v0 + 0x45a0);
  *(unsigned int *)(temp_v0 + 0x45a4) = temp_v1;
  return 1;
}

} /* extern "C" */
