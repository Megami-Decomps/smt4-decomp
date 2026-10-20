/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Camera_Initialize` (_code @ 0x455108, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int nw_gfx_Camera_CreateAnimGroup(unsigned int, unsigned int);
extern unsigned int nw_gfx_Camera_StoreOriginal(unsigned int, unsigned int);
extern unsigned int nw_gfx_TransformNode_Initialize(void);


unsigned int nw_gfx_Camera_Initialize(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = nw_gfx_TransformNode_Initialize();
  if (-1 < (int)temp_v0) {
    temp_v1 = nw_gfx_Camera_StoreOriginal(param_1,param_2);
    temp_v2 = nw_gfx_Camera_CreateAnimGroup(param_1,param_2);
    temp_v0 = temp_v2 | temp_v0 | temp_v1;
  }
  return temp_v0;
}

} /* extern "C" */
