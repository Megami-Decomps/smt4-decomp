#include "romwright_types.h"

extern "C" {

int FUN_0047c5a8(void);

/* Supplied declaration required: FUN_0047c5a8. */


unsigned int FUN_002dec0c(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *param_1;
  temp_v0 = *(char *)(temp_v1 + 0x1a);
  if ((temp_v0 == '\x01' || temp_v0 == '\x02') || temp_v0 == '\x03') {
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = *(int *)(temp_v1 + 0x1c);
    }
    if (temp_v1 != 0 && temp_v2 != 0) {
      FUN_0047c5a8();
    }
  }
  return 0;
}

} /* extern "C" */
