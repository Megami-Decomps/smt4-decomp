#include "romwright_types.h"

extern "C" {

extern int FUN_002bbb5c(void);


unsigned short QcActive_GetField24(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002bbb5c();
  return *(unsigned short *)(temp_v0 + 0x18);
}

} /* extern "C" */
