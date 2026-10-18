/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002331c0` (_code @ 0x2331c0, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */


void FUN_002331c0(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  temp_v0 = DAT_0044ea00;
  piVar4 = (int *)(DAT_0044ea00 + 0x12ac);
  temp_v1 = *piVar4;
  temp_v2 = piVar4[temp_v1 + 2];
  *piVar4 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != piVar4[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  return;
}
