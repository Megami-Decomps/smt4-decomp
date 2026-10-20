#include "romwright_types.h"

extern "C" {

int FUN_00165088(int, int);

/* Supplied declaration required: FUN_00165088. */


unsigned int FUN_0036df34(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 4);
  if (*(char *)(temp_v0 + 0x35) != '\0') {
    FUN_00165088(temp_v0,*(unsigned char *)(temp_v0 + 9));
    *(unsigned char *)(temp_v0 + 8) = 3;
    *(unsigned char *)(temp_v0 + 0x34) = 0;
    *(unsigned char *)(temp_v0 + 0x35) = 0;
  }
  else if (*(char *)(temp_v0 + 8) == '\0') {
    return 1;
  }
  return 0;
}

} /* extern "C" */
