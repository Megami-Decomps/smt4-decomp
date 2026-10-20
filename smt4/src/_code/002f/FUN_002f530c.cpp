/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f530c` (_code @ 0x2f530c, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004651e8; /* 0x4651e8 */

extern unsigned int FUN_00220438(int);
extern unsigned int FUN_002cbf90(int);
extern unsigned int FUN_002e1458(void);


unsigned char FUN_002f530c(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = 0xe7e3ffff;
  if (param_2 == 0) {
    (*(unsigned int *)((unsigned char *)&DAT_004651e8 + 0x10)) = 0xc8804464;
    return 0;
  }
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 == 2) {
        temp_v0 = FUN_002e1458();
      }
    }
    else {
      temp_v0 = FUN_00220438(param_2);
    }
  }
  else {
    temp_v0 = FUN_002cbf90(param_2);
  }
  return (temp_v0 & 0x80000000) == 0;
}

} /* extern "C" */
