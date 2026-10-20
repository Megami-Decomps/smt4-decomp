/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SkeletalModel_Initialize` (_code @ 0x4466b8, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0044670c(unsigned int, unsigned int);
int nw_gfx_Model_Initialize(void);

/* Supplied declaration required: FUN_0044670c. */
/* Supplied declaration required: nw_gfx_Model_Initialize. */


unsigned int nw_gfx_SkeletalModel_Initialize(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = param_1;
  nw_gfx_Model_Initialize();
  if ((-1 < (int)temp_v0) && (*(char *)(param_1 + 0x230) == '\0')) {
    FUN_0044670c(param_1,param_2);
    temp_v0 = param_1 | temp_v0;
  }
  return temp_v0;
}

} /* extern "C" */
