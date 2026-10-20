#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(int *);
int FUN_0031baf8(int);

extern int FUN_00162ea4(void);
/* Supplied declaration required: FUN_0019a5a0. */
extern int *FUN_00236038(void);
/* Supplied declaration required: FUN_0031baf8. */


unsigned int FUN_003c3ba0(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  piVar1 = (int *)FUN_00236038();
  if (piVar1 == (int *)0x0) {
    temp_v0 = 1;
  }
  else {
    if (*piVar1 == 0) {
      FUN_0019a5a0(piVar1);
      return 1;
    }
    temp_v1 = FUN_00162ea4();
    if (temp_v1 != 0) {
      FUN_0031baf8(piVar1[1]);
    }
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
