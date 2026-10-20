/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Material_CopyResFragmentLightingTable` (_code @ 0x456a60, 0x2d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_Material_CopyResLightingLookupTable(int *, unsigned int, int *);

typedef int romwright_code(...);
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: nw_gfx_Material_CopyResLightingLookupTable. */


/* WARNING: Removing unreachable block (ram,0x00456adc) */

void nw_gfx_Material_CopyResFragmentLightingTable
               (unsigned int *param_1,unsigned int param_2,int *param_3,int *param_4)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  piVar1 = (int *)(**(romwright_code **)(*param_3 + 8))(param_3,0x18,4);
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0x80000000;
    return;
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  if (*param_4 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *param_4 + (int)param_4;
  }
  temp_v1 = 0;
  if (temp_v0 != 0) {
    nw_gfx_Material_CopyResLightingLookupTable(&temp_v2,param_2,param_3);
    temp_v1 = temp_v3;
    if (temp_v2 != 0) {
      *piVar1 = temp_v2 - (int)piVar1;
    }
    else {
      *piVar1 = 0;
    }
  }
  if (param_4[1] != 0) {
    temp_v0 = (int)param_4 + param_4[1] + 4;
  }
  else {
    temp_v0 = 0;
  }
  if ((temp_v0 != 0) && (-1 < (int)temp_v1)) {
    nw_gfx_Material_CopyResLightingLookupTable(&temp_v2,param_2,param_3);
    piVar3 = piVar1 + 1;
    if (temp_v2 != 0) {
      *piVar3 = temp_v2 - (int)piVar3;
    }
    else {
      *piVar3 = 0;
    }
    temp_v1 = temp_v1 | temp_v3;
  }
  if (param_4[2] != 0) {
    temp_v0 = (int)param_4 + param_4[2] + 8;
  }
  else {
    temp_v0 = 0;
  }
  if ((temp_v0 != 0) && (-1 < (int)temp_v1)) {
    nw_gfx_Material_CopyResLightingLookupTable(&temp_v2,param_2,param_3);
    piVar3 = piVar1 + 2;
    if (temp_v2 != 0) {
      *piVar3 = temp_v2 - (int)piVar3;
    }
    else {
      *piVar3 = 0;
    }
    temp_v1 = temp_v1 | temp_v3;
  }
  if (param_4[3] != 0) {
    temp_v0 = (int)param_4 + param_4[3] + 0xc;
  }
  else {
    temp_v0 = 0;
  }
  if ((temp_v0 != 0) && (-1 < (int)temp_v1)) {
    nw_gfx_Material_CopyResLightingLookupTable(&temp_v2,param_2,param_3);
    piVar3 = piVar1 + 3;
    if (temp_v2 != 0) {
      *piVar3 = temp_v2 - (int)piVar3;
    }
    else {
      *piVar3 = 0;
    }
    temp_v1 = temp_v1 | temp_v3;
  }
  if (param_4[4] != 0) {
    temp_v0 = (int)param_4 + param_4[4] + 0x10;
  }
  else {
    temp_v0 = 0;
  }
  if ((temp_v0 != 0) && (-1 < (int)temp_v1)) {
    nw_gfx_Material_CopyResLightingLookupTable(&temp_v2,param_2,param_3);
    piVar3 = piVar1 + 4;
    if (temp_v2 != 0) {
      *piVar3 = temp_v2 - (int)piVar3;
    }
    else {
      *piVar3 = 0;
    }
    temp_v1 = temp_v1 | temp_v3;
  }
  if (param_4[5] != 0) {
    temp_v0 = (int)param_4 + param_4[5] + 0x14;
  }
  else {
    temp_v0 = 0;
  }
  if ((temp_v0 != 0) && (-1 < (int)temp_v1)) {
    nw_gfx_Material_CopyResLightingLookupTable(&temp_v2,param_2,param_3);
    piVar3 = piVar1 + 5;
    if (temp_v2 != 0) {
      *piVar3 = temp_v2 - (int)piVar3;
    }
    else {
      *piVar3 = 0;
    }
    temp_v1 = temp_v1 | temp_v3;
  }
  param_1[1] = temp_v1;
  *param_1 = (unsigned int)piVar1;
  return;
}

} /* extern "C" */
