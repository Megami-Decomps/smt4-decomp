/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012d520` (_code @ 0x12d520, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_SceneEnvironmentSetting_CreateEnvironmentArray(unsigned int *, int *, unsigned int *);

typedef int romwright_code(...);
extern unsigned char DAT_004215d0; /* 0x4215d0 */

/* Supplied declaration required: nw_gfx_SceneEnvironmentSetting_CreateEnvironmentArray. */


unsigned int * FUN_0012d520(unsigned int *param_1,unsigned int param_2,int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  if ((param_1 == (unsigned int *)0x0) || ((*param_1 & 0x800000) == 0)) {
    param_1 = (unsigned int *)0x0;
  }
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_3 + 8))(param_3,0x3c,4);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = (unsigned int)&DAT_004215d0;
    puVar1[1] = (unsigned int)param_3;
    puVar1[2] = (unsigned int)param_1;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
  }
  nw_gfx_SceneEnvironmentSetting_CreateEnvironmentArray(puVar1,param_3,param_1);
  return puVar1;
}

} /* extern "C" */
