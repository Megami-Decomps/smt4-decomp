/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b0410` (_code @ 0x3b0410, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00313648(unsigned int);

extern int g_lmapScene; /* 0x581288 */

extern int scrGetArg(void);
/* Supplied declaration required: FUN_00313648. */


unsigned int FUN_003b0410(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = scrGetArg();
  temp_v0 = g_lmapScene;
  if (temp_v1 == 0) {
    temp_v2 = 0x1d;
  }
  else {
    *(unsigned int *)(g_lmapScene + 0x54) = 0;
    *(unsigned int *)(temp_v0 + 0x58) = 0;
    temp_v2 = 0x2c;
  }
  FUN_00313648(temp_v2);
  return 1;
}

} /* extern "C" */
