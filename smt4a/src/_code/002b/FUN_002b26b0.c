/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b26b0` (_code @ 0x2b26b0, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_003ff17c(unsigned int);
extern int FUN_003ff190(unsigned int);


int FUN_002b26b0(unsigned short *param_1,unsigned short *param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = param_1[1] & 0xff;
  temp_v2 = param_2[1] & 0xff;
  if ((param_1[1] >> 8 == 10) && (temp_v0 = FUN_003ff17c(temp_v1), temp_v0 != 0)) {
    temp_v0 = FUN_003ff190(temp_v1);
    if (temp_v0 == 0) {
      temp_v1 = 0xffffff9d;
    }
    else {
      temp_v1 = 99;
    }
  }
  if ((param_2[1] >> 8 == 10) && (temp_v0 = FUN_003ff17c(temp_v2), temp_v0 != 0)) {
    temp_v0 = FUN_003ff190(temp_v2);
    if (temp_v0 == 0) {
      temp_v2 = 0xffffff9d;
    }
    else {
      temp_v2 = 99;
    }
  }
  temp_v0 = temp_v2 - temp_v1;
  if (temp_v0 == 0) {
    temp_v0 = (unsigned int)*param_2 - (unsigned int)*param_1;
  }
  return temp_v0;
}
