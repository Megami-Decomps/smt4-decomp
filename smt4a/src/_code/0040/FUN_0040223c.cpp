#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int FUN_003595cc(void);
int FUN_004511d8(int);

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_003595cc. */
/* Supplied declaration required: FUN_004511d8. */


void FUN_0040223c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_003595cc();
    FUN_004511d8(param_1 + 0xc);
    *(unsigned int *)(param_1 + 8) = 0;
  }
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    if (*(int *)(temp_v1 + 0x10) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v1 + 0x10) = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  return;
}

} /* extern "C" */
