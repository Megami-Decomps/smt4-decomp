#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(...);

extern int DAT_0059dbb8; /* 0x59dbb8 */

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_002e132c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int *puVar4;
  
  puVar4 = (unsigned int *)(DAT_0059dbb8 + param_1 * 0x18);
  if (puVar4[1] != 0) {
    temp_v0 = *(int *)(puVar4[1] + 4);
    while (temp_v0 != 0) {
      temp_v1 = *(int *)(temp_v0 + 0x10);
      FUN_0019a5a0(*(unsigned int *)(temp_v0 + 0xc));
      FUN_0019a5a0(temp_v0);
      temp_v0 = temp_v1;
    }
    FUN_0019a5a0(*(unsigned int *)puVar4[1]);
    FUN_0019a5a0(puVar4[1]);
    puVar4[1] = 0;
  }
  piVar2 = (int *)*puVar4;
  if (*piVar2 != 0) {
    FUN_0019a5a0();
    *piVar2 = 0;
  }
  if (piVar2[2] != 0) {
    FUN_0019a5a0();
    piVar2[2] = 0;
  }
  FUN_0019a5a0(piVar2);
  *puVar4 = 0;
  return;
}

} /* extern "C" */
