/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00217954` (_code @ 0x217954, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00217954(int param_1)

{
  char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = *(char *)(param_1 + 0x5925);
  temp_v1 = temp_v0 == '\0';
  if (temp_v1) {
    temp_v0 = *(char *)(param_1 + 0x5926);
  }
  if (temp_v1 && temp_v0 == '\0') {
    temp_v0 = *(char *)(param_1 + 0x5927);
    temp_v1 = temp_v0 == '\0';
    if (temp_v1) {
      temp_v0 = *(char *)(param_1 + 0x5928);
    }
    temp_v2 = temp_v1 && temp_v0 == '\0';
    if (temp_v1 && temp_v0 == '\0') {
      temp_v2 = *(char *)(param_1 + 0x5929) == '\0';
    }
    if (temp_v2) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
