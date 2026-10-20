#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


unsigned char FUN_003ade20(int param_1)

{
  int temp_v0;
  int idx;
  int bit;
  
  temp_v0 = FUN_00162e8c();
  if (param_1 == 0x10 || param_1 == 0x11) {
    param_1 = 8;
  }
  else if (param_1 == 0x12 || param_1 == 0x13) {
    param_1 = 0xc;
  }
  else if (param_1 == 0x2f || param_1 == 0x33) {
    param_1 = 0x2b;
  }
  else if (param_1 == 0x30 || param_1 == 0x34) {
    param_1 = 0x2c;
  }
  else if (param_1 == 0x31 || param_1 == 0x35) {
    param_1 = 0x2d;
  }
  else if (param_1 == 0x32 || param_1 == 0x36) {
    param_1 = 0x2e;
  }
  else if (param_1 == 0x72 || param_1 == 0x75) {
    param_1 = 0x6b;
  }
  else if (param_1 == 0x73 || param_1 == 0x76) {
    param_1 = 0x6c;
  }
  else if (param_1 == 0x74 || param_1 == 0x77) {
    param_1 = 0x6f;
  }
  else if (param_1 == 0x82 || param_1 == 0x83) {
    param_1 = 0x80;
  }
  idx = param_1 / 0x20;
  bit = param_1 % 0x20;
  return (*(unsigned int *)(temp_v0 + idx * 4 + 0xd0c) & (1 << bit)) != 0;
}

} /* extern "C" */
