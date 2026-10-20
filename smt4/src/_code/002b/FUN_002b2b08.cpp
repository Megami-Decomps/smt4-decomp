/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2b08` (_code @ 0x2b2b08, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_002b2b08(int param_1)

{
  romwright_code *pcVar1;
  int temp_v0;
  
  for (temp_v0 = *(int *)(param_1 + 0x8c); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0xac)) {
    pcVar1 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)(temp_v0 + 0x90) + 4) * 0x44 + 0x46412c);
    if (pcVar1 != (romwright_code *)0x0) {
      (*pcVar1)(*(unsigned int *)(*(int *)(temp_v0 + 0x90) + 8));
    }
  }
  *(unsigned int *)(param_1 + 0x84) = 0;
  return;
}

} /* extern "C" */
