/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN9Obj55bc7cD1Ev` (_code @ 0x456f60, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_Material_DestroyResMaterial(unsigned int, unsigned int);

typedef int romwright_code(...);
extern unsigned char DAT_0055bc84; /* 0x55bc84 */

/* Supplied declaration required: nw_gfx_Material_DestroyResMaterial. */


unsigned int * _ZN9Obj55bc7cD1Ev(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int temp_v5;
  
  *param_1 = (unsigned int)&DAT_0055bc84;
  temp_v5 = param_1[1];
  puVar7 = (unsigned int *)param_1[5];
  for (puVar6 = (unsigned int *)param_1[4]; puVar6 != puVar7; puVar6 = puVar6 + 1) {
    nw_gfx_Material_DestroyResMaterial(temp_v5,*puVar6);
  }
  temp_v3 = param_1[4];
  temp_v1 = param_1[5];
  if (temp_v3 >= temp_v1) {
    temp_v4 = 0;
  }
  else {
    temp_v4 = ((temp_v1 - temp_v3) & 7) >> 2;
  }
  temp_v2 = temp_v4 + 1;
  temp_v0 = (int)(temp_v1 - temp_v3) >> 2;
  if (temp_v2 < temp_v0 + 1) {
    do {
      temp_v2 = temp_v2 + 2;
    } while (temp_v2 < temp_v0 + 1);
  }
  param_1[5] = temp_v3;
  if ((int *)param_1[3] != (int *)0x0 && temp_v3 != 0) {
    (**(romwright_code **)(*(int *)param_1[3] + 0xc))();
  }
  return param_1;
}

} /* extern "C" */
