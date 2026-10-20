/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012b64c` (_code @ 0x12b64c, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_SceneNode_AttachChild(int, int *);

typedef int romwright_code(...);
extern unsigned char DAT_00421160; /* 0x421160 */

extern int *FUN_002b52b4(int, int *, unsigned int *, unsigned int);
/* Supplied declaration required: nw_gfx_SceneNode_AttachChild. */


int * FUN_0012b64c(int param_1,unsigned int *param_2,unsigned int param_3,int *param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if ((param_2 == (unsigned int *)0x0) || ((~*param_2 & 0x400000a2) != 0)) {
    param_2 = (unsigned int *)0x0;
  }
  temp_v0 = (**(romwright_code **)(*param_4 + 8))(param_4,0x188,4);
  piVar2 = (int *)0x0;
  if (temp_v0 != 0) {
    piVar2 = (int *)FUN_002b52b4(temp_v0,param_4,param_2,param_3);
    piVar2[0x52] = 0;
    *piVar2 = (int)&DAT_00421160;
    piVar2[0x5c] = 0;
    piVar2[0x5d] = 0;
    piVar2[0x5e] = 0;
    temp_v1 = param_2[0x44];
    temp_v2 = param_2[0x45];
    piVar2[0x5f] = param_2[0x43];
    piVar2[0x60] = temp_v1;
    piVar2[0x61] = temp_v2;
  }
  (**(romwright_code **)(*piVar2 + 0x24))(piVar2,param_4);
  if (param_1 != 0) {
    nw_gfx_SceneNode_AttachChild(param_1,piVar2);
  }
  return piVar2;
}

} /* extern "C" */
