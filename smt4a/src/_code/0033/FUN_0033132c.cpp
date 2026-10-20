#include "romwright_types.h"

extern "C" {

int FUN_003e4d68(unsigned int);

extern int FUN_00187168(void);
/* Supplied declaration required: FUN_003e4d68. */


int FUN_0033132c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v1 = 0;
  do {
    FUN_003e4d68(temp_v1 & 0xffff);
    temp_v0 = FUN_00187168();
    if (temp_v0 != 0) {
      temp_v2 = temp_v2 + 1;
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 0xc);
  return temp_v2;
}

} /* extern "C" */
