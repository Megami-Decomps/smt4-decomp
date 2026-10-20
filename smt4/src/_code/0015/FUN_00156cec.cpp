/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00156cec` (_code @ 0x156cec, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_004734c8; /* 0x4734c8 */
extern romwright_code *DAT_004734cc; /* 0x4734cc */


void FUN_00156cec(int *param_1)

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
       ((pcVar2 = DAT_004734c8, *piVar1 == -0x80000000 ||
        (pcVar2 = DAT_004734cc, *piVar1 == 0x40000000)))) {
      (*pcVar2)();
    }
  }
  return;
}

} /* extern "C" */
