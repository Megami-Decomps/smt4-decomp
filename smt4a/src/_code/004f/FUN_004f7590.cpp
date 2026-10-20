#include "romwright_types.h"

extern "C" {

int FUN_001aea28(unsigned int, unsigned int);

typedef int romwright_code(...);
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aea28. */


void FUN_004f7590(int param_1)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x28;
    piVar2 = (int *)(temp_v0 + 400);
    piVar2[1] = -1;
    piVar2[2] = -1;
    piVar2[9] = 0;
    piVar2[7] = 0;
    if ((int *)piVar2[8] != (int *)0x0) {
      (**(romwright_code **)(*(int *)piVar2[8] + 4))((int *)piVar2[8]);
      piVar2[8] = 0;
    }
    if (*piVar2 != 0) {
      FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*piVar2 + 4));
      if ((int *)*piVar2 != (int *)0x0) {
        (**(romwright_code **)(*(int *)*piVar2 + 4))((int *)*piVar2);
        *piVar2 = 0;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x32);
  return;
}

} /* extern "C" */
