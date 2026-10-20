#include "romwright_types.h"

extern "C" {

int FUN_002c415c(int *);

typedef int romwright_code(...);
extern unsigned int DAT_00439c60; /* 0x439c60 */

extern int *FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */


void FUN_00309424(void)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)FUN_002c08f0();
  if ((int *)piVar1[1] != (int *)0x0) {
    (**(romwright_code **)(*(int *)piVar1[1] + 4))(piVar1[1]);
  }
  if ((int *)*piVar1 != (int *)0x0) {
    (**(romwright_code **)(*(int *)*piVar1 + 4))(*piVar1);
  }
  FUN_002c415c(piVar1);
  DAT_00439c60 = 0;
  return;
}

} /* extern "C" */
