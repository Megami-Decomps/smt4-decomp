/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f934c` (_code @ 0x2f934c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002f934c(int param_1)

{
  char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = *(char *)(param_1 + 0x4ae5);
  temp_v1 = temp_v0 == '\0';
  if (temp_v1) {
    temp_v0 = *(char *)(param_1 + 0x4ae6);
  }
  if (temp_v1 && temp_v0 == '\0') {
    temp_v0 = *(char *)(param_1 + 0x4ae7);
    temp_v1 = temp_v0 == '\0';
    if (temp_v1) {
      temp_v0 = *(char *)(param_1 + 0x4ae8);
    }
    temp_v2 = temp_v1 && temp_v0 == '\0';
    if (temp_v1 && temp_v0 == '\0') {
      temp_v2 = *(char *)(param_1 + 0x4ae9) == '\0';
    }
    if (temp_v2) {
      return 1;
    }
  }
  return 0;
}
