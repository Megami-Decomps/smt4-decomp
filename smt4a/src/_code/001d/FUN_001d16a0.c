/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d16a0` (_code @ 0x1d16a0, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001d2a54(unsigned int);


int FUN_001d16a0(int param_1)

{
  char temp_v0;
  int temp_v1;
  
  temp_v0 = *(char *)(param_1 + 3);
  temp_v1 = 0xcd78;
  if (temp_v0 == '\0') {
    temp_v1 = 0xdf0c;
  }
  else if (temp_v0 == '\x01') {
    temp_v1 = 0xd930;
  }
  else if (temp_v0 == '\x02') {
    temp_v1 = FUN_001d2a54(0xcd78);
    if (temp_v1 == 0) {
      temp_v1 = 0x37140;
    }
    else {
      temp_v1 = 0x30bb0;
    }
  }
  if (*(char *)(param_1 + 2) == '\0') {
    temp_v1 = temp_v1 + 0x5dc;
  }
  else if (*(char *)(param_1 + 2) == '\x01') {
    temp_v1 = temp_v1 + 10000;
  }
  return temp_v1;
}
