#include "romwright_types.h"

extern "C" {

int FUN_0010d2a6(unsigned int);

/* Supplied declaration required: FUN_0010d2a6. */
extern int FUN_002f73b8(unsigned int);


void FUN_00303d52(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (*(char *)(param_1 + 4) != '\0') {
    temp_v1 = *(unsigned int *)(param_1 + 8);
    temp_v0 = FUN_002f73b8(temp_v1);
    if (temp_v0 != 0) {
      FUN_0010d2a6(temp_v1);
    }
    *(unsigned char *)(param_1 + 4) = 0;
  }
  return;
}

} /* extern "C" */
