/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147088` (_code @ 0x147088, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_005c0a84; /* 0x5c0a84 */

extern int FUN_0016f864(unsigned int);
extern int FUN_0016f988(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002e3390(unsigned int);


int FUN_00147088(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_005c0a84 != '\0') {
    temp_v0 = -0x1f5f2c07;
  }
  else {
    temp_v0 = FUN_0016f864(0);
    if (-1 < temp_v0) {
      temp_v1 = FUN_002e3390(param_2);
      temp_v0 = FUN_0016f988(param_1,param_2,temp_v1,0);
      if (-1 < temp_v0) {
        DAT_005c0a84 = '\x01';
        temp_v0 = 0;
      }
    }
  }
  return temp_v0;
}
