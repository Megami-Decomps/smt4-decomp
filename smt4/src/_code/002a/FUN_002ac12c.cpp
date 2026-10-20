/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac12c` (_code @ 0x2ac12c, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a2dec(int);
extern int FUN_002a2df8(int);


unsigned int FUN_002ac12c(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_002a2df8(param_1 + 8);
  temp_v1 = 0;
  if ((temp_v0 != 0) && (temp_v0 = FUN_002a2dec(param_1 + 8), temp_v1 = 0, temp_v0 != 0)) {
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

} /* extern "C" */
