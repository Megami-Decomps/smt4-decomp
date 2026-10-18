/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230ecc` (_code @ 0x230ecc, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00253f94(void);
extern int FUN_002ae3c4(void);
extern int FUN_002b45e8(int);


int FUN_00230ecc(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  if (param_1 == 0) {
    return 0;
  }
  temp_v1 = 0;
  temp_v0 = FUN_002ae3c4();
  if (!((temp_v0 == 4 || temp_v0 == 5) || temp_v0 == 6)) {
    if (temp_v0 != 7) {
      temp_v0 = FUN_002b45e8(param_1);
      if (temp_v0 != 0) {
        temp_v1 = FUN_00253f94();
      }
    }
    else {
      temp_v0 = FUN_002b45e8(param_1);
      temp_v1 = (int)*(short *)(temp_v0 + 0x68);
    }
  }
  else {
    temp_v0 = FUN_002b45e8(param_1);
    temp_v1 = (int)*(short *)(temp_v0 + 0x66);
  }
  return temp_v1;
}
