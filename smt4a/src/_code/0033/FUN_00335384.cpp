/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00335384` (_code @ 0x335384, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163aa4(...);
int FUN_001846d0(int, int);

/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_001846d0. */


unsigned int FUN_00335384(int param_1)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  
  piVar2 = (int *)(param_1 + 0xd48);
  temp_v0 = *(int *)(param_1 + 0xd48);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) goto LAB_00335454;
      if (temp_v0 != 3) {
        *(int *)(param_1 + 0xd4c) = *(int *)(param_1 + 0xd4c) + 1;
        return temp_v1;
      }
    }
    else {
      if (*(int *)(param_1 + 0xd4c) < 0x11) {
        *(int *)(param_1 + 0xd4c) = *(int *)(param_1 + 0xd4c) + 1;
        return temp_v1;
      }
      *piVar2 = 2;
      *(unsigned int *)(param_1 + 0xd4c) = 0;
LAB_00335454:
      FUN_00163aa4();
      FUN_00163aa4(param_1 + 0x750);
      FUN_00163aa4();
      FUN_00163aa4(param_1 + 0x868);
      if (((*(char *)(param_1 + 0x74e) == '\0') || (*(char *)(param_1 + 0x7da) == '\0')) ||
         (*(char *)(param_1 + 0x866) == '\0')) {
        *(int *)(param_1 + 0xd4c) = *(int *)(param_1 + 0xd4c) + 1;
        return temp_v1;
      }
      FUN_001846d0(param_1 + 0x7dc,9);
      *piVar2 = *(int *)(param_1 + 0xd48) + 1;
    }
    temp_v1 = 1;
  }
  else {
    FUN_00163aa4();
    FUN_00163aa4();
    if ((*(char *)(param_1 + 0x636) != '\0') && (*(char *)(param_1 + 0x6c2) != '\0')) {
      *piVar2 = *(int *)(param_1 + 0xd48) + 1;
      *(unsigned int *)(param_1 + 0xd4c) = 0;
    }
  }
  *(int *)(param_1 + 0xd4c) = *(int *)(param_1 + 0xd4c) + 1;
  return temp_v1;
}

} /* extern "C" */
