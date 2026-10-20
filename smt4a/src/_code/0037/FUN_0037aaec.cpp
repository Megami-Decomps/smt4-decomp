/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037aaec` (_code @ 0x37aaec, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b40c4; /* 0x5b40c4 */

extern unsigned int FUN_00317e50(int);
extern unsigned int FUN_0032c9fc(int);
extern unsigned int FUN_003596e0(void);


unsigned char FUN_0037aaec(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = 0xe7e3ffff;
  if (param_2 == 0) {
    DAT_005b40c4 = 0xc8804464;
    return 0;
  }
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 == 2) {
        temp_v0 = FUN_003596e0();
      }
    }
    else {
      temp_v0 = FUN_00317e50(param_2);
    }
  }
  else {
    temp_v0 = FUN_0032c9fc(param_2);
  }
  return (temp_v0 & 0x80000000) == 0;
}

} /* extern "C" */
