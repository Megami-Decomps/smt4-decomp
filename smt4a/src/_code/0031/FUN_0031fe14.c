/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031fe14` (_code @ 0x31fe14, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0026140c(void);


unsigned int FUN_0031fe14(unsigned int param_1)

{
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_0026140c();
  switch(param_1) {
  default:
    temp_v2 = 0;
    return temp_v2;
  case 7:
    temp_v0 = *(char *)(temp_v1 + 0x33);
    break;
  case 8:
    temp_v0 = *(char *)(temp_v1 + 0x34);
    break;
  case 9:
    temp_v0 = *(char *)(temp_v1 + 0x37);
    break;
  case 10:
    return *(unsigned char *)(temp_v1 + 0x36) & 1;
  case 0xf:
    return (*(unsigned char *)(temp_v1 + 0x36) & 2) >> 1;
  }
  temp_v2 = 1;
  if (temp_v0 != '\x01') {
    temp_v2 = 0;
  }
  return temp_v2;
}
