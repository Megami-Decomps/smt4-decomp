/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025d5c8` (_code @ 0x25d5c8, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int FUN_0025d5c8(int *param_1)

{
  int temp_v0;
  romwright_code *pcVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = *param_1;
  pcVar2 = *(romwright_code **)(temp_v2 + *(int *)(temp_v2 + 0x3ac) * 4 + 0xc);
  if (((pcVar2 != (romwright_code *)0x0) && (temp_v0 = (*pcVar2)(temp_v2), temp_v0 == 3)) &&
     (temp_v0 = *(int *)(temp_v2 + 0x3b0), temp_v0 != -1)) {
    temp_v1 = *(unsigned int *)(temp_v2 + 0x3ac);
    *(int *)(temp_v2 + 0x3ac) = temp_v0;
    temp_v3 = temp_v0 == 9;
    *(unsigned int *)(temp_v2 + 0x3a8) = temp_v1;
    if (temp_v3) {
      temp_v0 = 1;
    }
    *(unsigned int *)(temp_v2 + 0x3b0) = 0xffffffff;
    if (temp_v3) {
      *(char *)(temp_v2 + 1000) = (char)temp_v0;
    }
  }
  return 0;
}

} /* extern "C" */
