/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ebc0` (_code @ 0x29ebc0, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a0d0c(void);
extern int gameGetUnitRecord(void);


unsigned int FUN_0029ebc0(unsigned int param_1)

{
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_002a0d0c();
  switch(param_1) {
  case 0:
    temp_v0 = *(short *)(temp_v1 + 0x1c);
    if (-1 < temp_v0) {
      temp_v1 = gameGetUnitRecord();
      return (unsigned int)*(unsigned short *)(temp_v1 + 0x46);
    }
    break;
  case 1:
    if (*(unsigned short *)(temp_v1 + 0x26) != 0) {
      return (unsigned int)*(unsigned short *)(temp_v1 + 0x26);
    }
    return 0xffffffff;
  case 2:
    if (0 < *(short *)(temp_v1 + 0x24)) {
      return (int)*(short *)(temp_v1 + 0x24);
    }
    break;
  case 3:
    if (*(unsigned short *)(temp_v1 + 0x28) != 0) {
      return (unsigned int)*(unsigned short *)(temp_v1 + 0x28);
    }
    break;
  case 4:
    temp_v2 = (unsigned int)*(char *)(temp_v1 + 0x31);
    if (-1 < (int)temp_v2) {
      return temp_v2;
    }
    return 0xffffffff;
  case 5:
    temp_v2 = (unsigned int)*(short *)(temp_v1 + 0x2a);
    if (-1 < (int)temp_v2) {
      return temp_v2;
    }
    return 0xffffffff;
  case 0xd:
    temp_v0 = *(short *)(temp_v1 + 0x1e);
    if (-1 < temp_v0) {
      temp_v1 = gameGetUnitRecord();
      return (unsigned int)*(unsigned short *)(temp_v1 + 0x46);
    }
  }
  return 0xffffffff;
}

} /* extern "C" */
