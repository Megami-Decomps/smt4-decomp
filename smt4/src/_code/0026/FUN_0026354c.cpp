/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026354c` (_code @ 0x26354c, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameGetQuestCenterBlock(void);


unsigned char FUN_0026354c(unsigned int param_1)

{
  int temp_v0;
  
  if (param_1 < 0x20) {
    temp_v0 = gameGetQuestCenterBlock();
    return ((1 << (param_1 & 7)) & 0xffU & (unsigned int)*(unsigned char *)(temp_v0 + 8 + (param_1 >> 3))) != 0;
  }
  return 0;
}

} /* extern "C" */
