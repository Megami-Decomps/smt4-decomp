/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_TransformNode_Initialize` (_code @ 0x2378c4, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int nw_gfx_SceneNode_Initialize(void);
extern unsigned int nw_gfx_TransformNode_CreateCallbacks(unsigned int, unsigned int);


unsigned int nw_gfx_TransformNode_Initialize(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = nw_gfx_SceneNode_Initialize();
  if (-1 < (int)temp_v0) {
    temp_v1 = nw_gfx_TransformNode_CreateCallbacks(param_1,param_2);
    temp_v0 = temp_v1 | temp_v0;
  }
  return temp_v0;
}
