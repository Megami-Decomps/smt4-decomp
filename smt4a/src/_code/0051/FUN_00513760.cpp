/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00513760` (_code @ 0x513760, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f4270(unsigned char [4], unsigned char [4], unsigned char [4]);

extern unsigned int DAT_00589520; /* 0x589520 */
extern unsigned int DAT_00589524; /* 0x589524 */

/* Supplied declaration required: FUN_001f4270. */


void FUN_00513760(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0 [4];
  unsigned char temp_v1 [4];
  unsigned char temp_v2 [4];
  
  FUN_001f4270(temp_v0,temp_v1,temp_v2);
  DAT_00589520 = param_1;
  DAT_00589524 = param_2;
  return;
}

} /* extern "C" */
