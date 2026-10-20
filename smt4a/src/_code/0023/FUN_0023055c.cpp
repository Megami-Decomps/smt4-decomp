#include "romwright_types.h"

extern "C" {

extern int FUN_002c7e3c(void);
extern int FUN_002c7e54(void);


unsigned int FUN_0023055c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002c7e54();
  if (((((temp_v0 == 5) || (temp_v0 = FUN_002c7e54(), temp_v0 == 6)) ||
       (temp_v0 = FUN_002c7e54(), temp_v0 == 7)) ||
      ((temp_v0 = FUN_002c7e54(), temp_v0 == 0xc || (temp_v0 = FUN_002c7e54(), temp_v0 == 0xb)))) ||
     ((temp_v0 = FUN_002c7e3c(), temp_v0 == 8 ||
      ((temp_v0 = FUN_002c7e3c(), temp_v0 == 9 || (temp_v0 = FUN_002c7e3c(), temp_v0 == 3)))))) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
