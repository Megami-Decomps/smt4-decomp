/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015799c` (_code @ 0x15799c, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0015c548(); /* 0x15c548 */

/* Supplied declaration required: FUN_002a3178. */
/* Supplied declaration required: FUN_002b4cbc. */
/* Supplied declaration required: FUN_002b4cd4. */
/* Supplied declaration required: nw_snd_internal_MoveValue_float_int_SetTarget. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


unsigned int FUN_0015799c(int param_1,int param_2,int param_3)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = param_1 + param_2 * 0x10;
  if (*(int *)(temp_v0 + 0x30) < *(int *)(temp_v0 + 0x2c)) {
    FUN_002b4cd4(param_1,param_2);
  }
  nw_snd_internal_MoveValue_float_int_SetTarget(temp_v0 + 0x24,0);
  FUN_002a3178();
  param_1 = param_1 + param_2 * 0xc;
  piVar1 = (int *)(param_1 + 100);
  if (*piVar1 == 0) {
    FUN_002b4cbc((int)(char)param_2,FUN_0015c548,param_2);
  }
  nw_ut_internal_LinkListImpl_insert(piVar1,param_1 + 0x68,param_3 + 4);
  return 1;
}
