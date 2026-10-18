/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b1d0` (_code @ 0x18b1d0, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0018b620(void);
extern int FUN_001a2480(void);
/* Supplied declaration required: FUN_001a28a8. */
extern int FUN_001a2a4c(void);
extern int FUN_001a2a5c(void);
/* Supplied declaration required: nn_gxlow_CTR_Gpu_AcquireRight. */


int FUN_0018b1d0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_001a2480();
  if (temp_v0 == 0) {
    temp_v0 = 0x202bf8;
  }
  else {
    temp_v0 = FUN_001a2a5c();
    nn_gxlow_CTR_Gpu_AcquireRight(temp_v0,0xffff8001,0);
    if ((-1 < temp_v0) && (temp_v1 = FUN_0018b620(), temp_v1 != 0)) {
      temp_v1 = FUN_001a2a4c();
      FUN_001a28a8(temp_v1 + 0x30,0);
    }
  }
  return temp_v0;
}
