/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneNode_Initialize` (_code @ 0x375a60, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00376070. */
extern unsigned int nw_gfx_SceneNode_CreateCallbacks(unsigned int, unsigned int);
/* Supplied declaration required: nw_gfx_SceneNode_CreateChildren. */


unsigned int nw_gfx_SceneNode_Initialize(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = param_1;
  nw_gfx_SceneNode_CreateChildren();
  if (-1 < (int)temp_v1) {
    *(unsigned int *)(param_1 + 0x10) = param_1;
    temp_v0 = nw_gfx_SceneNode_CreateCallbacks(param_1,param_2);
    temp_v1 = temp_v0 | temp_v1;
    if (-1 < (int)temp_v1) {
      FUN_00376070(param_1,param_2);
      temp_v1 = param_1 | temp_v1;
    }
  }
  return temp_v1;
}
