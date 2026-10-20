/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba400` (_code @ 0x2ba400, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00581288; /* 0x581288 */
extern int *DAT_00587f0c; /* 0x587f0c */


void FUN_002ba400(int param_1)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  
  piVar2 = DAT_00587f0c;
  if (*DAT_00587f0c == 1) {
    DAT_00587f0c[1] = 0;
    *piVar2 = 2;
    *(unsigned char *)(piVar2 + 3) = 0;
    *(unsigned char *)(piVar2 + 0x1b) = 0;
    if (param_1 != 0) {
      *(unsigned char *)((int)piVar2 + 0x61) = 1;
    }
    else {
      *(unsigned char *)((int)piVar2 + 0x61) = 0;
    }
    *(unsigned char *)(piVar2 + 4) = 1;
    temp_v0 = DAT_00581288;
    temp_v1 = *(int *)(DAT_00581288 + 0x20);
    temp_v2 = *(int *)(DAT_00581288 + 0x24);
    piVar2[5] = *(int *)(DAT_00581288 + 0x1c);
    piVar2[6] = temp_v1;
    piVar2[7] = temp_v2;
    piVar2[8] = *(int *)(temp_v0 + 0x4c);
    piVar2[9] = 0;
    *(unsigned char *)(piVar2 + 10) = 1;
  }
  return;
}

} /* extern "C" */
