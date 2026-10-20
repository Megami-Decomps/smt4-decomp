/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneNode_IsCircularReference` (_code @ 0x2af370, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;

/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


void nw_gfx_SceneNode_IsCircularReference(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0xc);
  if ((temp_v0 != 0) && (temp_v0 != param_2)) {
    nw_gfx_SceneNode_IsCircularReference(temp_v0, /* unrecovered */ 0);
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
