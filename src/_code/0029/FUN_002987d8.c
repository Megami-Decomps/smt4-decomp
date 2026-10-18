/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002987d8` (_code @ 0x2987d8, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0029a924(unsigned int);
extern int FUN_0029a9d4(unsigned int, unsigned int);
extern int FUN_002a8740(int);
/* Supplied declaration required: FUN_002ae164. */
extern int FUN_002b63ac(void);


unsigned int FUN_002987d8(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_002ae164(param_2);
  if (param_1 < 0) {
    temp_v0 = FUN_002b63ac();
    temp_v1 = FUN_0029a9d4(param_2,1);
    if (*(short *)(temp_v0 + 0x2c) < temp_v1) {
      return 0;
    }
  }
  else {
    temp_v0 = FUN_002a8740(param_1);
    temp_v1 = FUN_0029a924(param_2);
    if (*(short *)(temp_v0 + 0x2c) < temp_v1) {
      return 0;
    }
  }
  return 1;
}
