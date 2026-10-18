/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003af4c4` (_code @ 0x3af4c4, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002a63f8(unsigned int, int);


unsigned char FUN_003af4c4(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v1 = 0;
  do {
    temp_v0 = FUN_002a63f8(0x14,temp_v1);
    if (temp_v0 != 0) {
      temp_v2 = temp_v2 + 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 5);
  temp_v1 = 0;
  do {
    temp_v0 = FUN_002a63f8(0x15,temp_v1);
    if (temp_v0 != 0) {
      temp_v2 = temp_v2 + 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  return temp_v2 >= 9;
}
