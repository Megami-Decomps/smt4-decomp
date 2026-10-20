#include "romwright_types.h"

extern "C" {

extern int FUN_002bbb5c(void);


unsigned char FUN_00343af0(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002bbb5c();
  return *(char *)(temp_v0 + 0x10) != '\0';
}

} /* extern "C" */
