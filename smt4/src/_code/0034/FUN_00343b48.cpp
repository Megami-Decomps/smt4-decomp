#include "romwright_types.h"

extern "C" {

extern int FUN_002bbb5c(void);


void FUN_00343b48(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002bbb5c();
  *(unsigned char *)(temp_v0 + 0x10) = 1;
  return;
}

} /* extern "C" */
