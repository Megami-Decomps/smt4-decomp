/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c8824` (_code @ 0x2c8824, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00447a60; /* 0x447a60 */


int FUN_002c8824(void)

{
  char temp_v0;
  int temp_v1;
  char *pcVar3;
  int temp_v2;
  
  temp_v2 = 0x10;
  temp_v1 = 0;
  pcVar3 = (char *)(DAT_00447a60 + 0x24);
  do {
    temp_v0 = *pcVar3;
    pcVar3 = pcVar3 + 0x3c;
    if (temp_v0 != '\0') {
      temp_v1 = temp_v1 + 1;
    }
    temp_v2 = temp_v2 - 1;
  } while (temp_v2 != 0);
  return temp_v1;
}

} /* extern "C" */
