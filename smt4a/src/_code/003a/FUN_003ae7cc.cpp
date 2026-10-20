/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae7cc` (_code @ 0x3ae7cc, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobGetWork(void);
int FUN_00411458(int);

extern int DAT_00573c50; /* 0x573c50 */

extern int btlGetMainState(unsigned int *);
/* Supplied declaration required: jobGetWork. */
/* Supplied declaration required: FUN_00411458. */


unsigned int FUN_003ae7cc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  jobGetWork();
  temp_v0 = DAT_00573c50;
  if ((DAT_00573c50 != 0) && (temp_v1 = btlGetMainState((unsigned int *)&DAT_00573c50), temp_v1 != 0)) {
    FUN_00411458(temp_v0);
  }
  return 0;
}

} /* extern "C" */
