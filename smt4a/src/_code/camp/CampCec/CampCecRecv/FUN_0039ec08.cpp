/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039ec08` (_code @ 0x39ec08, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0031cf00(void);
int scrSetResult(int);

extern int g_campCecRecv; /* 0x57f128 */

extern int scrGetArg(void);
/* Supplied declaration required: FUN_0031cf00. */
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0039ec08(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v1 = scrGetArg();
  if (g_campCecRecv == 0) {
    temp_v0 = 0;
  }
  else {
    if (temp_v1 != 0) {
      scrSetResult(*(unsigned short *)(g_campCecRecv + 0x14e));
      return 1;
    }
    FUN_0031cf00();
    temp_v0 = *(unsigned short *)(temp_v1 + 0x62);
  }
  scrSetResult(temp_v0);
  return 1;
}

} /* extern "C" */
