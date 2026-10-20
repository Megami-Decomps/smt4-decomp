/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00443e94` (_code @ 0x443e94, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00452f14(unsigned int, unsigned int);
extern unsigned int nw_gfx_AmbientLight_CreateOriginalValue(unsigned int, unsigned int);
extern unsigned int nw_gfx_TransformNode_Initialize(void);


unsigned int FUN_00443e94(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = nw_gfx_TransformNode_Initialize();
  if (-1 < (int)temp_v0) {
    temp_v1 = nw_gfx_AmbientLight_CreateOriginalValue(param_1,param_2);
    temp_v0 = temp_v1 | temp_v0;
    if (-1 < (int)temp_v0) {
      temp_v1 = FUN_00452f14(param_1,param_2);
      temp_v0 = temp_v1 | temp_v0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
