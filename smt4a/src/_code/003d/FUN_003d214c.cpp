/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d214c` (_code @ 0x3d214c, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fb4; /* 0x588fb4 */

extern int FUN_00143b58(int, unsigned char, unsigned int);
extern int FUN_001448a8(int, unsigned char, unsigned int);
extern int FUN_00162ea4(void);
extern int FUN_00180008(unsigned int);


/* WARNING: Removing unreachable block (ram,0x00201eb4) */

int FUN_003d214c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = -1;
  temp_v0 = FUN_00180008(1);
  if ((temp_v0 == 0) && (temp_v0 = FUN_00162ea4(), temp_v0 == 0)) {
    if (param_1 + 0xfeffff84U < 0x191) {
      temp_v1 = FUN_001448a8(param_1,DAT_00588fb4,0);
      temp_v1 = temp_v1 + 100000;
    }
    else if (param_1 + 0xfefffdf3U < 0x106) {
      temp_v1 = FUN_00143b58(param_1,DAT_00588fb4,0);
    }
  }
  return temp_v1;
}

} /* extern "C" */
