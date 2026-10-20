#include "romwright_types.h"

extern "C" {

extern int FUN_0037d494(void);


unsigned char FUN_0040a75c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0037d494();
  return *(unsigned char *)(temp_v0 + 1);
}

} /* extern "C" */
