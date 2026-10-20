#include "romwright_types.h"

extern "C" {

int FUN_00175c68(int);
int FUN_001d1f5c(void);
int FUN_001d2384(int);
int FUN_001d239c(int);

/* Supplied declaration required: FUN_00175c68. */
/* Supplied declaration required: FUN_001d1f5c. */
/* Supplied declaration required: FUN_001d2384. */
/* Supplied declaration required: FUN_001d239c. */


void FUN_00462374(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (param_2 == 0) {
    *(unsigned char *)(param_1 + 0x7a) = 0;
  }
  else if (param_2 == 1) {
    *(unsigned char *)(param_1 + 0x7a) = 1;
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 3) {
        return;
      }
      for (temp_v0 = *(int *)(param_1 + 0x130); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x1ac)) {
        FUN_001d2384(temp_v0);
        FUN_00175c68(temp_v0);
      }
    }
    else {
      FUN_001d1f5c();
      for (temp_v0 = *(int *)(param_1 + 0x130); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x1ac)) {
        if (*(char *)(temp_v0 + 0x139) != '\0') {
          FUN_001d239c(temp_v0);
        }
      }
      for (temp_v0 = *(int *)(param_1 + 0x130); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x1ac)) {
        FUN_001d2384(temp_v0);
      }
    }
    *(unsigned int *)(param_1 + 0x130) = 0;
    *(unsigned char *)(param_1 + 0x7a) = 1;
  }
  return;
}

} /* extern "C" */
