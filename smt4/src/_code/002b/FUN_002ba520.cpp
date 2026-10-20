/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba520` (_code @ 0x2ba520, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_0044e334; /* 0x44e334 */


void FUN_002ba520(int param_1,int *param_2)

{
  int temp_v0;
  int temp_v1;
  romwright_code *pcVar3;
  
  if (param_1 == 0x2010000) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  }
  pcVar3 = DAT_0044e334;
  if (param_1 < 0x2010000) {
    if (param_1 != 0x1010000) {
      if (param_1 != 0x1020000 && param_1 != 0x1030000) {
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        return;
      }
      if (*param_2 != 0 && DAT_0044e334 != (romwright_code *)0x0) {
        (*DAT_0044e334)(param_2[0xf],0x101,param_2[0x10]);
      }
      if (param_2[1] != 0) {
        pcVar3 = DAT_0044e334;
      }
      if (param_2[1] == 0 || pcVar3 == (romwright_code *)0x0) {
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        return;
      }
    }
    else if ((param_2[1] == 0) || (DAT_0044e334 == (romwright_code *)0x0)) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return;
    }
    temp_v1 = param_2[0x10];
    temp_v0 = 0x10000;
  }
  else {
    if ((param_1 != 0x2020000 && param_1 != 0x2030000) ||
       (*param_2 == 0 || DAT_0044e334 == (romwright_code *)0x0)) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return;
    }
    temp_v0 = param_2[0xf];
    temp_v1 = param_2[0x10];
  }
  (*pcVar3)(temp_v0,0x101,temp_v1);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

} /* extern "C" */
