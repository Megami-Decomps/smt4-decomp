/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010feb4` (_code @ 0x10feb4, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern signed char DAT_00471a10; /* 0x471a10 */

extern int FUN_002c1364(unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_002c1398(unsigned int);
extern unsigned int FUN_002c30c4(unsigned int);


int FUN_0010feb4(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_00471a10 != '\0') {
    temp_v0 = -0x1f5f2c07;
  }
  else {
    temp_v0 = FUN_002c1398(0);
    if (-1 < temp_v0) {
      temp_v1 = FUN_002c30c4(param_2);
      temp_v0 = FUN_002c1364(param_1,param_2,temp_v1,0);
      if (-1 < temp_v0) {
        DAT_00471a10 = '\x01';
        temp_v0 = 0;
      }
    }
  }
  return temp_v0;
}

} /* extern "C" */
