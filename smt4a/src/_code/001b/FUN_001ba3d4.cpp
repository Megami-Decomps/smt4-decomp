/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ba3d4` (_code @ 0x1ba3d4, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int *FUN_0019c06c(void);
extern int flagValueGetStorage(void);


unsigned short FUN_001ba3d4(int param_1)

{
  int temp_v0;
  unsigned short temp_v1;
  int *piVar3;
  int temp_v2;
  
  piVar3 = (int *)FUN_0019c06c();
  temp_v1 = 0;
  if (piVar3 != (int *)0x0) {
    temp_v0 = piVar3[2];
    temp_v2 = flagValueGetStorage();
    switch((char)temp_v0) {
    case 0:
      break;
    case 1:
      temp_v2 = temp_v2 + 0xf0;
      break;
    case 2:
      temp_v2 = temp_v2 + 0x168;
      break;
    case 3:
      temp_v2 = temp_v2 + 600;
      break;
    case 4:
      temp_v2 = temp_v2 + 0x348;
      break;
    case 5:
      temp_v2 = temp_v2 + 0x438;
      break;
    case 6:
      temp_v2 = temp_v2 + 0x528;
      break;
    case 7:
      temp_v2 = temp_v2 + 0x618;
      break;
    case 8:
      temp_v2 = temp_v2 + 0x708;
      break;
    case 9:
      temp_v2 = temp_v2 + 0x76c;
      break;
    case 10:
      temp_v2 = temp_v2 + 0x8fc;
      break;
    default:
      temp_v2 = 0;
      break;
    case 0xc:
      temp_v2 = temp_v2 + 0xf3c;
    }
    param_1 = param_1 - *piVar3;
    if (*(char *)((int)piVar3 + 9) == '\0') {
      return (unsigned short)(((unsigned int)*(unsigned char *)(temp_v2 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1d))
                                               >> 3)) & (1 << ((param_1 % 8) & 0xffU))) != 0);
    }
    if (*(char *)((int)piVar3 + 9) == '\x01') {
      temp_v1 = *(unsigned short *)(temp_v2 + param_1 * 2);
    }
    else {
      temp_v1 = 0;
    }
  }
  return temp_v1;
}

} /* extern "C" */
