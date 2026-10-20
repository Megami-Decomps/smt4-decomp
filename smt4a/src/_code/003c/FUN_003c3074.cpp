/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3074` (_code @ 0x3c3074, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);
int FUN_0046c35c(int, int, int);

extern int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00187180. */
extern int FUN_00192748(void);
/* Supplied declaration required: FUN_0046c35c. */


int FUN_003c3074(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_00187180(0x29,1);
  temp_v0 = FUN_00192748();
  temp_v1 = DAT_00570280;
  FUN_0046c35c(DAT_00570280,0x23,1);
  return temp_v1 + temp_v0;
}

} /* extern "C" */
