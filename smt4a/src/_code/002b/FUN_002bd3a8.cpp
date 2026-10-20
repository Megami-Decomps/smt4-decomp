#include "romwright_types.h"

extern "C" {

int FUN_0046b068(void);

/* Supplied declaration required: FUN_0046b068. */


unsigned int FUN_002bd3a8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *(int *)(param_1 + 4);
  temp_v0 = *(char *)(temp_v1 + 0x19);
  if ((temp_v0 == '\x01' || temp_v0 == '\x03') || temp_v0 == '\x04') {
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = *(int *)(temp_v1 + 0x1c);
    }
    if (temp_v1 != 0 && temp_v2 != 0) {
      FUN_0046b068();
    }
  }
  return 0;
}

} /* extern "C" */
