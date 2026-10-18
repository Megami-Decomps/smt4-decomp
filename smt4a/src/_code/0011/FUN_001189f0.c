/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001189f0` (_code @ 0x1189f0, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001220f1; /* 0x1220f1 */
extern unsigned char LAB_0012cfd5; /* 0x12cfd5 */

/* Supplied declaration required: FUN_002e5700. */
/* Supplied declaration required: FUN_002f5020. */
extern int FUN_00304d10(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00304e8e. */


void FUN_001189f0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = FUN_00304d10(param_2,0);
  if (temp_v0 != 0) {
    FUN_00304e8e(param_1,temp_v0);
    return;
  }
  FUN_002f5020(&uStack_18,&LAB_0012cfd5,0xc,1);
  FUN_00304e8e(param_1,&uStack_18);
  FUN_002e5700(&uStack_18,&LAB_001220f1,0xc,1);
  return;
}
