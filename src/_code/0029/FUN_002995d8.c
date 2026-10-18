/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002995d8` (_code @ 0x2995d8, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002471d8(void);
extern int FUN_002b45e8(unsigned int);


unsigned int FUN_002995d8(unsigned int param_1)

{
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_002471d8();
  temp_v2 = FUN_002b45e8(param_1);
  if ((temp_v2 != 0) &&
     ((((temp_v0 = *(unsigned char *)(temp_v2 + 0x60), (temp_v0 & 1) != 0 && (temp_v1 == 4)) ||
       (((temp_v0 & 4) != 0 && (temp_v1 == 5)))) || (((temp_v0 & 2) != 0 && (temp_v1 == 1)))))) {
    return 1;
  }
  return 0;
}
