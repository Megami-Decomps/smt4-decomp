#include "romwright_types.h"

extern "C" {

extern int DAT_0057f290; /* 0x57f290 */


unsigned int FUN_002f3b90(void)

{
  unsigned int temp_v0;
  
  if ((*(int *)(DAT_0057f290 + 0x400) == 2) && (*(char *)(DAT_0057f290 + 0x9090) == '\0')) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
