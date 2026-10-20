#include "romwright_types.h"

extern "C" {

int FUN_001d1f5c(int);
int FUN_001d239c(int);
int FUN_0045f9fc(int, unsigned int);

/* Supplied declaration required: FUN_001d1f5c. */
/* Supplied declaration required: FUN_001d239c. */
/* Supplied declaration required: FUN_0045f9fc. */


void FUN_00461f10(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_001d1f5c(param_1);
  for (temp_v0 = *(int *)(param_1 + 0x130); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x1ac)) {
    if (*(char *)(temp_v0 + 0x139) != '\0') {
      if ((int)param_2 >= 0) {
        FUN_0045f9fc(temp_v0 + 0x98,param_2 & 0xff);
      }
      FUN_001d239c(temp_v0);
    }
  }
  return;
}

} /* extern "C" */
