/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d390` (_code @ 0x14d390, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a7a94(int);


unsigned int FUN_0014d390(int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (((char)param_1[3] == '\0') ||
     (temp_v2 = *param_1, temp_v0 = FUN_002a7a94(temp_v2), *(int *)(temp_v2 + temp_v0) != 0x54415743)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
