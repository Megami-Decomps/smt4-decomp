/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c8a9c` (_code @ 0x4c8a9c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int *g_btlHelp; /* 0x5738e8 */

extern int infoWinHasValue(void);


unsigned int FUN_004c8a9c(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *g_btlHelp;
  do {
    temp_v0 = temp_v1;
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v1 = *(int *)(temp_v0 + 0x874);
  } while ((((*(short *)(temp_v0 + 0x872) < 0) || (*(short *)(temp_v0 + 2) != 1)) ||
           ((*(unsigned short *)(temp_v0 + 6) & 1) != 0)) || (temp_v0 = infoWinHasValue(), temp_v0 == 0));
  return 1;
}

} /* extern "C" */
