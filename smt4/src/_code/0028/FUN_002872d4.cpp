#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0049f91c; /* 0x49f91c */


unsigned int FUN_002872d4(void)

{
  unsigned int temp_v0;
  
  if ((*(signed char *)(&DAT_0049f91c + 0x2f8) == '\0') || (*(int *)(&DAT_0049f91c + 0x2fc) < 200)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
