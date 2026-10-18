/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031fd08` (_code @ 0x31fd08, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab854(void);
extern int FUN_0026140c(void);


unsigned int FUN_0031fd08(unsigned int param_1)

{
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_0026140c();
  switch(param_1) {
  case 0:
    temp_v0 = *(short *)(temp_v1 + 0x20);
    break;
  case 1:
    if (*(unsigned short *)(temp_v1 + 0x2a) != 0) {
      return (unsigned int)*(unsigned short *)(temp_v1 + 0x2a);
    }
    return 0xffffffff;
  case 2:
    temp_v2 = (unsigned int)*(char *)(temp_v1 + 0x43);
    if (0 < (int)temp_v2) {
      return temp_v2;
    }
    return 0xffffffff;
  case 3:
    temp_v2 = (unsigned int)*(short *)(temp_v1 + 0x28);
    if (0 < (int)temp_v2) {
      return temp_v2;
    }
    return 0xffffffff;
  case 4:
    if (*(unsigned short *)(temp_v1 + 0x2c) == 0) {
      return 0xffffffff;
    }
    return (unsigned int)*(unsigned short *)(temp_v1 + 0x2c);
  case 5:
    temp_v2 = (unsigned int)*(char *)(temp_v1 + 0x35);
    if (-1 < (int)temp_v2) {
      return temp_v2;
    }
    return 0xffffffff;
  case 6:
    temp_v2 = (unsigned int)*(short *)(temp_v1 + 0x2e);
    if (-1 < (int)temp_v2) {
      return temp_v2;
    }
    return 0xffffffff;
  default:
    return 0xffffffff;
  case 0xe:
    temp_v0 = *(short *)(temp_v1 + 0x22);
  }
  if (-1 < temp_v0) {
    temp_v1 = FUN_001ab854();
    return (unsigned int)*(unsigned short *)(temp_v1 + 0x62);
  }
  return 0xffffffff;
}
