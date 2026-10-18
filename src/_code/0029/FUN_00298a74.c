/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298a74` (_code @ 0x298a74, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0029abc0(unsigned int);
extern int FUN_0029ac70(unsigned int, unsigned int);
extern int FUN_002a89e4(int);
/* Supplied declaration required: FUN_002ae3f0. */
extern int FUN_002b66ec(void);


unsigned int FUN_00298a74(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_002ae3f0(param_2);
  if (param_1 < 0) {
    temp_v0 = FUN_002b66ec();
    temp_v1 = FUN_0029ac70(param_2,1);
    if (*(short *)(temp_v0 + 0x2c) < temp_v1) {
      return 0;
    }
  }
  else {
    temp_v0 = FUN_002a89e4(param_1);
    temp_v1 = FUN_0029abc0(param_2);
    if (*(short *)(temp_v0 + 0x2c) < temp_v1) {
      return 0;
    }
  }
  return 1;
}
