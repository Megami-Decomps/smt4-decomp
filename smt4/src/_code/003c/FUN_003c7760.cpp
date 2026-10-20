/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c7760` (_code @ 0x3c7760, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022a304(unsigned int);
int FUN_00242914(unsigned int, int);
int FUN_00256898(int, int);
int FUN_002568c4(int);
int FUN_00292dd0(int);

extern int g_btlMain; /* 0x4342c8 */
extern unsigned int DAT_00435d18; /* 0x435d18 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_0022a304. */
/* Supplied declaration required: FUN_00242914. */
/* Supplied declaration required: FUN_00256898. */
/* Supplied declaration required: FUN_002568c4. */
extern int FUN_00256940(int, int, unsigned int);
/* Supplied declaration required: FUN_00292dd0. */


unsigned int FUN_003c7760(unsigned int *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)(param_2 + 0x44a0);
  if (((*puVar2 & 0x100000) != 0) && ((param_1[1] & 1) == 0)) {
    if ((-1 < *(int *)(g_btlMain + 0x760)) &&
       (temp_v0 = FUN_00256940(g_btlMain,param_2,1), temp_v0 != 0)) {
      FUN_002568c4(0);
    }
    FUN_00256898(1,0);
    param_1[1] = param_1[1] | 1;
  }
  temp_v0 = FUN_0019e0c0(param_1[5]);
  if (temp_v0 == 2) {
    if (((*puVar2 & 0x100000) != 0) && (FUN_00292dd0(0), (*puVar2 & 0x20000000) != 0)) {
      FUN_00242914(DAT_00439ca8,0);
      *puVar2 = *puVar2 & 0xdfffffff;
    }
    *param_1 = 0;
    *puVar2 = *puVar2 & 0xffefffff;
    FUN_0022a304(DAT_00435d18);
  }
  if ((int)param_1[10] < 0xffff) {
    param_1[10] = param_1[10] + 1;
  }
  return 0;
}

} /* extern "C" */
