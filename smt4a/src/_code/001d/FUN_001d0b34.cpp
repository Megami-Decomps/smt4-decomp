#include "romwright_types.h"

extern "C" {

int FUN_001d1f5c(void);
int FUN_001d2384(int);
int FUN_001d239c(int);

/* Supplied declaration required: FUN_001d1f5c. */
/* Supplied declaration required: FUN_001d2384. */
/* Supplied declaration required: FUN_001d239c. */


void FUN_001d0b34(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_001d1f5c();
  for (temp_v0 = *(int *)(param_1 + 0x130); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x1ac)) {
    if (*(char *)(temp_v0 + 0x139) != '\0') {
      FUN_001d239c(temp_v0);
    }
  }
  for (temp_v0 = *(int *)(param_1 + 0x130); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x1ac)) {
    FUN_001d2384(temp_v0);
  }
  *(unsigned int *)(param_1 + 0x130) = 0;
  *(unsigned char *)(param_1 + 5) = 0;
  return;
}

} /* extern "C" */
