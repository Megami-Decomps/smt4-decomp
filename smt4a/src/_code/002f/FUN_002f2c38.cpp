/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2c38` (_code @ 0x2f2c38, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00594a04; /* 0x594a04 */

extern int FUN_002eb6ae(int, unsigned int);
extern unsigned int FUN_002f34ac(int, int);


unsigned int FUN_002f2c38(int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((*(char *)(param_1 + 0x66) != *(char *)(param_2 + 0x66)) ||
     (*(short *)(param_1 + 0x86) != *(short *)(param_2 + 0x86))) {
    return 0;
  }
  if (*(char *)(DAT_00594a04 + 4) == '\x01') {
    temp_v0 = FUN_002eb6ae(param_1,0x200);
    if ((temp_v0 != 0) && (temp_v0 = FUN_002eb6ae(param_2,0x200), temp_v0 != 0)) {
      return 1;
    }
  }
  temp_v1 = FUN_002f34ac(param_1 + 0xdc,param_2 + 0xdc);
  return temp_v1;
}

} /* extern "C" */
