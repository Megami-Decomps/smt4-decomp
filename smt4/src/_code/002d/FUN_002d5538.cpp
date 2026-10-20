#include "romwright_types.h"

extern "C" {

int FUN_003ba63c(void);

/* Supplied declaration required: FUN_003ba63c. */


unsigned int FUN_002d5538(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *(int *)(param_1 + 4);
  temp_v0 = *(char *)(temp_v1 + 5);
  if ((temp_v0 == '\x01' || temp_v0 == '\x02') || temp_v0 == '\x03') {
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = *(int *)(temp_v1 + 8);
    }
    if (temp_v1 != 0 && temp_v2 != 0) {
      FUN_003ba63c();
    }
  }
  return 0;
}

} /* extern "C" */
