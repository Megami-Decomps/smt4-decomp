#include "romwright_types.h"

extern "C" {

extern int FUN_002c2950(void);


unsigned char FUN_00285574(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  return *(unsigned char *)(temp_v0 + 3);
}

} /* extern "C" */
