/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e010` (_code @ 0x15e010, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0015e8ec(unsigned int);


int FUN_0015e010(int param_1)

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
    temp_v1 = FUN_0015e8ec(0xcd78);
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

} /* extern "C" */
