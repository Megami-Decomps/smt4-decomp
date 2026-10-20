/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004383d8` (_code @ 0x4383d8, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


int FUN_004383d8(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = 0x575;
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = temp_v0 + (temp_v2 - temp_v0) / 2;
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 * 8 + 0x5c1fdc);
    if (temp_v3 >= param_1 && temp_v3 != param_1) {
      temp_v2 = temp_v1 - 1;
    }
    if (temp_v3 < param_1) {
      temp_v0 = temp_v1 + 1;
    }
    if (temp_v3 == param_1) break;
    if (temp_v2 < temp_v0) {
      return 0;
    }
  }
  return temp_v1 * 8 + 0x5c1fdc;
}

} /* extern "C" */
