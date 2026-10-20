/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bbb74` (_code @ 0x4bbb74, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00470340(int, unsigned int);

extern int DAT_00570280; /* 0x570280 */

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
/* Supplied declaration required: FUN_00470340. */


int FUN_004bbb74(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00187180(3,0);
  temp_v1 = FUN_00192798();
  if ((-1 < (int)param_1) && (temp_v2 = FUN_00192748(temp_v0), param_1 < temp_v2)) {
    temp_v3 = DAT_00570280;
    FUN_00470340(DAT_00570280,param_1);
    if (temp_v3 == 0) {
      temp_v3 = temp_v1 + param_1 * 0x60;
    }
    return temp_v3;
  }
  return temp_v1;
}

} /* extern "C" */
