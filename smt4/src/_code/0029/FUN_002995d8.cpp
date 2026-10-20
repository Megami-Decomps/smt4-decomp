#include "romwright_types.h"

extern "C" {

int FUN_002b45e8(int);

extern int FUN_002471d8(void);
/* Supplied declaration required: FUN_002b45e8. */


unsigned int FUN_002995d8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_002471d8();
  temp_v2 = FUN_002b45e8(param_1);
  if (temp_v2 == 0) {
    return temp_v2;
  }
  temp_v0 = *(unsigned char *)(temp_v2 + 0x60);
  if ((((temp_v0 & 1) != 0 && (temp_v1 == 4)) ||
       (((temp_v0 & 4) != 0 && (temp_v1 == 5)))) || (((temp_v0 & 2) != 0 && (temp_v1 == 1)))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
