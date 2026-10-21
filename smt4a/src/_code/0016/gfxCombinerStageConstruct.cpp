/* NON_MATCHING: romwright 0.5.0 decompilation of `gfxCombinerStageConstruct` (_code @ 0x16df70, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f5020(...);

extern unsigned char LAB_00197ea8; /* 0x197ea8 */
extern unsigned char LAB_00197eac; /* 0x197eac */

/* Supplied declaration required: FUN_002f5020. */


int gfxCombinerStageConstruct(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002f5020();
  param_1 = param_1 + 3;
  FUN_002f5020(param_1,&LAB_00197ea8,1,3);
  param_1 = param_1 + 6;
  FUN_002f5020(param_1,&LAB_00197eac,1,3);
  param_1 = param_1 + 3;
  FUN_002f5020(param_1,&LAB_00197ea8,1,3);
  return param_1 - 0xd;
}

} /* extern "C" */
