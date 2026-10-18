/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b315c` (_code @ 0x1b315c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001a7470(int);
extern int FUN_001a747c(int);


unsigned int FUN_001b315c(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_001a747c(param_1 + 8);
  temp_v1 = 0;
  if ((temp_v0 != 0) && (temp_v0 = FUN_001a7470(param_1 + 8), temp_v1 = 0, temp_v0 != 0)) {
    temp_v2 = *(char *)(param_1 + 0x45) != '\0';
    temp_v0 = 0;
    if (temp_v2) {
      temp_v0 = *(int *)(param_1 + 0x48);
    }
    if (!(temp_v2 && temp_v0 != 0)) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = 0;
      if (*(int *)(param_1 + 0x4c) != 0) {
        temp_v1 = 1;
      }
    }
  }
  return temp_v1;
}
