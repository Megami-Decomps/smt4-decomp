/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318054` (_code @ 0x318054, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int DAT_0059dbb4; /* 0x59dbb4 */


void FUN_00318054(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  temp_v0 = DAT_0059dbb4;
  piVar4 = (int *)(DAT_0059dbb4 + 0x12b8);
  temp_v1 = *piVar4;
  temp_v2 = piVar4[temp_v1 + 2];
  *piVar4 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v2 != piVar4[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  return;
}

} /* extern "C" */
