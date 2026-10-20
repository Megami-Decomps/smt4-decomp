#include "romwright_types.h"

extern "C" {

int FUN_002d23f0(unsigned int);

/* Supplied declaration required: FUN_002d23f0. */


void FUN_00365b7c(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  char *p;
  
  temp_v1 = 0;
  temp_v2 = *param_1;
  do {
    p = (char *)(temp_v2 + temp_v1 * 0x194) + 0x1dc;
    if ((*p != '\0') && (*(int *)(p + 4) == 3)) {
      FUN_002d23f0(*(unsigned int *)(p + 0x24));
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x80);
  return;
}

} /* extern "C" */
