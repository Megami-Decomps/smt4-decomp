/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d91c` (_code @ 0x37d91c, 0x114 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int FUN_0037d91c(int *param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  if (*(char *)((int)param_1 + 5) == '\0') {
    return 0;
  }
  if ((short)param_1[0x1c] < *(short *)((int)param_1 + 0x6e)) {
    *(short *)(param_1 + 0x1c) = (short)param_1[0x1c] + 1;
  }
  if (*(short *)((int)param_1 + 0x76) < (short)param_1[0x1d]) {
    *(short *)((int)param_1 + 0x76) = *(short *)((int)param_1 + 0x76) + 1;
  }
  if ((short)param_1[0x1f] < *(short *)((int)param_1 + 0x7a)) {
    *(short *)(param_1 + 0x1f) = (short)param_1[0x1f] + 1;
  }
  if (*(short *)((int)param_1 + 0x82) < (short)param_1[0x20]) {
    *(short *)((int)param_1 + 0x82) = *(short *)((int)param_1 + 0x82) + 1;
  }
  if (*(char *)((int)param_1 + 0x4a) != '\0') {
    if (param_1[0x31] != 0) {
      return 1;
    }
    *(unsigned char *)((int)param_1 + 0x4a) = 0;
  }
  if (((param_1[0x11] < 1) || (temp_v0 = param_1[0x11] - 1, param_1[0x11] = temp_v0, temp_v0 < 1)) &&
     (param_1[8] != 0)) {
    temp_v0 = 0;
    while( 1 ) {
      temp_v2 = param_1[0x11];
      temp_v3 = temp_v2 == 0;
      if (temp_v3) {
        temp_v2 = (unsigned int)*(unsigned char *)((int)param_1 + 0x4a);
      }
      if ((!temp_v3 || temp_v2 != 0) || (temp_v0 = temp_v0 + 1, temp_v0 >= 10001)) break;
      temp_v1 = (**(romwright_code **)(*param_1 + 8))(param_1,param_2);
      if (temp_v1 == 1) {
        return 0xffffffff;
      }
    }
  }
  return 1;
}
