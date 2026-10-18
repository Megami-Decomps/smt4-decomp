/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001030f4` (_code @ 0x1030f4, 0x6e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001030ac(unsigned int);
extern long long aeabi_idivmod(int, unsigned int);


unsigned int FUN_001030f4(char *param_1,unsigned int param_2)

{
  char temp_v0;
  int temp_v1;
  long long temp_v2;
  
  temp_v1 = FUN_001030ac(param_2);
  if (temp_v1 != -1) {
    temp_v2 = aeabi_idivmod(temp_v1,0xbc);
    if ((int)temp_v2 >= 0x1f) {
      temp_v0 = (char)temp_v2 - '?';
    }
    else {
      temp_v0 = (char)temp_v2 - '\x7f';
    }
    *param_1 = temp_v0;
    temp_v0 = (char)((unsigned long long)temp_v2 >> 0x20);
    if (temp_v2 >= 0x3f00000000) {
      temp_v0 = temp_v0 + 'A';
    }
    else {
      temp_v0 = temp_v0 + '@';
    }
    param_1[1] = temp_v0;
    return 2;
  }
  if (param_2 == 0x203e) {
    temp_v0 = '~';
  }
  else if (param_2 != 0xa5) {
    if (param_2 - 0xff61 >= 0x3f) {
      if (((param_2 < 0x80) && (param_2 != 0x7e)) && (param_2 != 0x5c)) {
        *param_1 = (char)param_2;
        return 1;
      }
      return 0xffffffff;
    }
    temp_v0 = (char)param_2 + '@';
  }
  else {
    temp_v0 = '\\';
  }
  *param_1 = temp_v0;
  return 1;
}
