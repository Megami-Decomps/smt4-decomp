/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003edaf0` (_code @ 0x3edaf0, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00570280; /* 0x570280 */

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern int FUN_00192748(unsigned int);
extern int *FUN_00192798(void);
/* Supplied declaration required: FUN_00470714. */


void FUN_003edaf0(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = DAT_00570280;
  FUN_00470714();
  if (temp_v1 != 0) {
    return;
  }
  temp_v0 = FUN_00187180(0x48,0);
  piVar2 = (int *)FUN_00192798();
  temp_v1 = FUN_00192748(temp_v0);
  temp_v2 = 0;
  if (temp_v2 < temp_v1) {
    do {
      if (*piVar2 == param_2) {
        return;
      }
      temp_v2 = temp_v2 + 1;
      piVar2 = piVar2 + 3;
    } while (temp_v2 < temp_v1);
  }
  return;
}
