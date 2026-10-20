/* NON_MATCHING: romwright 0.5.0 decompilation of `NAVI_PROC` (_code @ 0x1a96c0, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int NaviMain_DispatchState(int);

extern int g_naviMain; /* 0x44cdf0 */

extern int FUN_00287758(void);
/* Supplied declaration required: NaviMain_DispatchState. */


unsigned int NAVI_PROC(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00287758();
  if ((temp_v0 != 0) && (*(int *)(g_naviMain + 0x30) == 0)) {
    NaviMain_DispatchState(g_naviMain + 0x40);
  }
  return 0;
}

} /* extern "C" */
