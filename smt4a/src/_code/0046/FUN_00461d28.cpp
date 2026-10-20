/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00461d28` (_code @ 0x461d28, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int FUN_00461d28(int *param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  if (*(char *)((int)param_1 + 5) == '\0') {
    return 0;
  }
  if ((short)param_1[0x24] < *(short *)((int)param_1 + 0x8e)) {
    *(short *)(param_1 + 0x24) = (short)param_1[0x24] + 1;
  }
  if (*(short *)((int)param_1 + 0x96) < (short)param_1[0x25]) {
    *(short *)((int)param_1 + 0x96) = *(short *)((int)param_1 + 0x96) + 1;
  }
  if ((short)param_1[0x27] < *(short *)((int)param_1 + 0x9a)) {
    *(short *)(param_1 + 0x27) = (short)param_1[0x27] + 1;
  }
  if (*(short *)((int)param_1 + 0xa2) < (short)param_1[0x28]) {
    *(short *)((int)param_1 + 0xa2) = *(short *)((int)param_1 + 0xa2) + 1;
  }
  if ((short)param_1[0x2a] < *(short *)((int)param_1 + 0xa6)) {
    *(short *)(param_1 + 0x2a) = (short)param_1[0x2a] + 1;
  }
  if ((char)param_1[0x20] != '\0') {
    if (param_1[0x4c] != 0) {
      return 1;
    }
    *(unsigned char *)(param_1 + 0x20) = 0;
  }
  if (((param_1[0x1f] < 1) || (temp_v0 = param_1[0x1f] - 1, param_1[0x1f] = temp_v0, temp_v0 < 1)) &&
     (param_1[8] != 0)) {
    temp_v0 = 0;
    while( 1 ) {
      temp_v2 = param_1[0x1f];
      temp_v3 = temp_v2 == 0;
      if (temp_v3) {
        temp_v2 = (unsigned int)*(unsigned char *)(param_1 + 0x20);
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

} /* extern "C" */
