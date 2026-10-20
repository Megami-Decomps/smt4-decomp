#include "romwright_types.h"

extern "C" {

int FUN_00221c70(int);
int asdMemFree(int *);

/* Supplied declaration required: FUN_00221c70. */
extern int *scrGetArg(void);
extern int FUN_002c1d5c(void);
/* Supplied declaration required: asdMemFree. */


unsigned int FUN_00323e1c(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  piVar1 = (int *)scrGetArg();
  if (piVar1 == (int *)0x0) {
    temp_v0 = 1;
  }
  else {
    if (*piVar1 == 0) {
      asdMemFree(piVar1);
      return 1;
    }
    temp_v1 = FUN_002c1d5c();
    if (temp_v1 != 0) {
      FUN_00221c70(piVar1[1]);
    }
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
