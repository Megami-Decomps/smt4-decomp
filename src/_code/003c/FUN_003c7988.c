/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c7988` (_code @ 0x3c7988, 0xfc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004342c8; /* 0x4342c8 */
extern unsigned int DAT_00435d18; /* 0x435d18 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_0022a498. */
/* Supplied declaration required: FUN_00242a80. */
/* Supplied declaration required: FUN_00256ad8. */
/* Supplied declaration required: FUN_00256b04. */
extern int FUN_00256b80(int, int, unsigned int);
/* Supplied declaration required: FUN_00293074. */


unsigned int FUN_003c7988(unsigned int *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)(param_2 + 0x44a0);
  if (((*puVar2 & 0x100000) != 0) && ((param_1[1] & 1) == 0)) {
    if ((-1 < *(int *)(DAT_004342c8 + 0x760)) &&
       (temp_v0 = FUN_00256b80(DAT_004342c8,param_2,1), temp_v0 != 0)) {
      FUN_00256b04(0);
    }
    FUN_00256ad8(1,0);
    param_1[1] = param_1[1] | 1;
  }
  temp_v0 = FUN_0019dfbc(param_1[5]);
  if (temp_v0 == 2) {
    if (((*puVar2 & 0x100000) != 0) && (FUN_00293074(0), (*puVar2 & 0x20000000) != 0)) {
      FUN_00242a80(DAT_00439ca8,0);
      *puVar2 = *puVar2 & 0xdfffffff;
    }
    *param_1 = 0;
    *puVar2 = *puVar2 & 0xffefffff;
    FUN_0022a498(DAT_00435d18);
  }
  if ((int)param_1[10] < 0xffff) {
    param_1[10] = param_1[10] + 1;
  }
  return 0;
}
