/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00421130` (_code @ 0x421130, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aea28. */
/* Supplied declaration required: FUN_0040619c. */
/* Supplied declaration required: FUN_00406204. */


void FUN_00421130(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  do {
    temp_v2 = param_1 + temp_v1 * 4;
    puVar4 = *(unsigned int **)(temp_v2 + 0xc);
    if (puVar4 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar4)(puVar4);
      (**(romwright_code **)(*(int *)puVar4[1] + 0xc))((int *)puVar4[1],puVar4);
      *(unsigned int *)(temp_v2 + 0xc) = 0;
    }
    puVar4 = *(unsigned int **)(temp_v2 + 0x18);
    if (puVar4 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar4)(puVar4);
      (**(romwright_code **)(*(int *)puVar4[1] + 0xc))((int *)puVar4[1],puVar4);
      *(unsigned int *)(temp_v2 + 0x18) = 0;
    }
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(temp_v2 + 0xc) = 0;
  } while (temp_v1 < 3);
  temp_v1 = 0;
  temp_v2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x10);
  if (0 < temp_v2) {
    do {
      temp_v0 = *(int *)(*(int *)(param_1 + 8) + 8);
      FUN_0040619c(temp_v0,temp_v1);
      if (temp_v0 != 0) {
        FUN_001aea28(DAT_0056fcc0,temp_v0);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  FUN_00406204(*(unsigned int *)(*(int *)(param_1 + 8) + 8));
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 8) + 4))();
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}
