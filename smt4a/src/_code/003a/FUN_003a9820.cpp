/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9820` (_code @ 0x3a9820, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015f490(unsigned int, int, int, int);
int FUN_00184310(void);

extern unsigned int DAT_00570da8; /* 0x570da8 */
extern unsigned int DAT_00570dac; /* 0x570dac */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_0015f490. */
/* Supplied declaration required: FUN_00184310. */


unsigned int FUN_003a9820(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = btlGetMainState();
  if ((((*(unsigned int *)(temp_v0 + 0x45a4) & DAT_00570dac) == 0 &&
        (DAT_00570da8 & *(unsigned int *)(temp_v0 + 0x45a0)) == 0) &&
      (temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x11e), temp_v2 != 0)) &&
     (temp_v1 = temp_v2, FUN_00184310(), temp_v1 != 0)) {
    FUN_0015f490(temp_v2,3,1,0);
  }
  return 1;
}

} /* extern "C" */
