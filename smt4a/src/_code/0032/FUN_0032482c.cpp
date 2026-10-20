#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f15fc; /* 0x5f15fc */


unsigned int FUN_0032482c(void)

{
  unsigned int temp_v0;
  
  if ((*(signed char *)((unsigned char *)&DAT_005f15fc + 0x574) == '\0') || (*(int *)((unsigned char *)&DAT_005f15fc + 0x578) < 200)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
