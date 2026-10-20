/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a043c` (_code @ 0x2a043c, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00244d98(int);
int sysFlagsSetBits(int);
int FUN_002cbaf8(unsigned int, int);
int nw_gfx_SceneNode_AttachChild(unsigned int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char LAB_00155650; /* 0x155650 */

/* Supplied declaration required: FUN_00244d98. */
/* Supplied declaration required: sysFlagsSetBits. */
extern unsigned int asdModelGetSlotArray0(int);
/* Supplied declaration required: FUN_002cbaf8. */
/* Supplied declaration required: nw_gfx_SceneNode_AttachChild. */


void FUN_002a043c(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = asdModelGetSlotArray0(param_2);
  FUN_002cbaf8(*(unsigned int *)(param_1 + 8),param_2);
  if (param_2 == 0) {
    nw_gfx_SceneNode_AttachChild(temp_v0,*(unsigned int *)(param_1 + 0xc));
    sysFlagsSetBits(1);
    temp_v1 = *(int *)(param_1 + 4);
    if (temp_v1 != 0) {
      *(unsigned char *)(temp_v1 + 0x58) = 1;
      *(unsigned char **)(temp_v1 + 0x4c) = &LAB_00155650;
    }
    FUN_00244d98(0);
    return;
  }
  if (param_2 == 1) {
    nw_gfx_SceneNode_AttachChild(temp_v0,*(unsigned int *)(param_1 + 0xc));
    sysFlagsSetBits(2);
    temp_v1 = *(int *)(param_1 + 4);
    if (temp_v1 != 0) {
      *(unsigned char *)(temp_v1 + 0x58) = 1;
      *(unsigned char **)(temp_v1 + 0x4c) = &LAB_00155650;
    }
    FUN_00244d98(1);
    return;
  }
  return;
}

} /* extern "C" */
