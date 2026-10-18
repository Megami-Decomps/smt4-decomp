/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c21d8` (_code @ 0x1c21d8, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001cbdb0(); /* 0x1cbdb0 */

/* Supplied declaration required: FUN_001a1838. */
/* Supplied declaration required: FUN_001c2278. */
/* Supplied declaration required: FUN_001c7714. */
/* Supplied declaration required: nw_snd_internal_MoveValue_float_int_SetTarget. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


unsigned int FUN_001c21d8(int param_1,int param_2,int param_3)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = param_1 + param_2 * 0x10;
  if (*(int *)(temp_v0 + 0x20) < *(int *)(temp_v0 + 0x1c)) {
    FUN_001c2278(param_1,param_2);
  }
  nw_snd_internal_MoveValue_float_int_SetTarget(temp_v0 + 0x14,0);
  FUN_001c7714();
  param_1 = param_1 + param_2 * 0xc;
  piVar1 = (int *)(param_1 + 0x54);
  if (*piVar1 == 0) {
    FUN_001a1838((int)(char)param_2,FUN_001cbdb0,param_2);
  }
  nw_ut_internal_LinkListImpl_insert(piVar1,param_1 + 0x58,param_3 + 4);
  return 1;
}
