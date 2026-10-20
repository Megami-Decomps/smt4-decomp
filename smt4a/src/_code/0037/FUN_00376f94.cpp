#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


unsigned char FUN_00376f94(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  return *(unsigned char *)(temp_v0 + 3);
}

} /* extern "C" */
