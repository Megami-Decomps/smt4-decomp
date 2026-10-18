/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ffa0` (_code @ 0x20ffa0, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004dad80; /* 0x4dad80 */

extern unsigned int FUN_00252394(unsigned int);
/* Supplied declaration required: nw_gfx_SceneNode_AttachChild. */


void FUN_0020ffa0(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00252394(1);
  nw_gfx_SceneNode_AttachChild(temp_v0,*(unsigned int *)(*param_1 + param_2 * 4));
  DAT_004dad80 = DAT_004dad80 + 1;
  return;
}
