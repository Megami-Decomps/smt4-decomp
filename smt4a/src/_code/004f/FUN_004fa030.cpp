/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fa030` (_code @ 0x4fa030, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int libc_strcmp(int, unsigned int);

extern unsigned char g_btlEffect; /* 0x5737f0 */

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: libc_strcmp. */
extern int btlScriptUnitHasFlags(void);


int FUN_004fa030(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  btlGetMainState();
  temp_v0 = btlScriptUnitHasFlags();
  if ((temp_v0 == 0) && (piVar3 = (int *)(param_1 + 0x1f58), *piVar3 != 0)) {
    temp_v0 = 0;
    do {
      temp_v1 = *piVar3 + temp_v0 * 0x16;
      if ((temp_v1 != 0) && (libc_strcmp(temp_v1,(*(unsigned int *)((unsigned char *)&g_btlEffect + 0x14))), temp_v1 == 0)) {
        temp_v0 = *piVar3 + temp_v0 * 0x16;
        if (temp_v0 != 0) {
          return (int)*(short *)(temp_v0 + 0x10);
        }
        return -1;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
  }
  return -1;
}

} /* extern "C" */
