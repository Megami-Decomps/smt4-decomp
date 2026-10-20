/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d814` (_code @ 0x15d814, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_Fog_DestroyResFog(int *, int);

typedef int romwright_code(...);
extern unsigned char DAT_0055bb98; /* 0x55bb98 */

extern int FUN_00172718(int *, unsigned int);
extern int *FUN_001b7420(int, int *, int, unsigned int);
/* Supplied declaration required: nw_gfx_Fog_DestroyResFog. */


int * FUN_0015d814(unsigned int param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  
  temp_v0 = FUN_00172718(param_2,0);
  temp_v1 = (**(romwright_code **)(*param_2 + 8))(param_2,0x16c,4);
  piVar3 = (int *)0x0;
  temp_v2 = temp_v0;
  if (temp_v1 != 0) {
    temp_v2 = 0;
    piVar3 = (int *)FUN_001b7420(temp_v1,param_2,temp_v0,param_1);
    *piVar3 = (int)&DAT_0055bb98;
    piVar3[0x52] = temp_v0;
    piVar3[0x53] = (int)param_2;
    piVar3[0x54] = 0;
    piVar3[0x55] = 0;
    piVar3[0x56] = 0;
    piVar3[0x57] = 0;
    piVar3[0x58] = 0;
    piVar3[0x59] = 0;
    piVar3[0x5a] = 0;
  }
  (**(romwright_code **)(*piVar3 + 0x24))(piVar3,param_2);
  if (temp_v2 != 0) {
    nw_gfx_Fog_DestroyResFog(param_2,temp_v2);
  }
  return piVar3;
}

} /* extern "C" */
