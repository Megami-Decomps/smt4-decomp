/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004516ec` (_code @ 0x4516ec, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_005c1d10; /* 0x5c1d10 */
extern romwright_code *DAT_005c1d14; /* 0x5c1d14 */


void FUN_004516ec(int *param_1)

{
  int *piVar1;
  romwright_code *pcVar2;
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(*param_1 + 0x1c);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x1c + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 0x1c;
  }
  else {
    temp_v0 = 0;
  }
  temp_v1 = temp_v0 + *(int *)(*param_1 + 0x18) * 0x10;
  for (; temp_v0 != temp_v1; temp_v0 = temp_v0 + 0x10) {
    if (*(int *)(temp_v0 + 0xc) != 0) {
      piVar1 = (int *)(temp_v0 + 0xc + *(int *)(temp_v0 + 0xc));
    }
    else {
      piVar1 = (int *)0x0;
    }
    if ((piVar1 != (int *)0x0) &&
       ((pcVar2 = DAT_005c1d10, *piVar1 == -0x80000000 ||
        (pcVar2 = DAT_005c1d14, *piVar1 == 0x40000000)))) {
      (*pcVar2)();
    }
  }
  return;
}
