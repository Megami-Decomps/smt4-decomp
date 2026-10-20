#include "romwright_types.h"

extern "C" {

extern int FUN_002881a0(void);
extern int FUN_0029ac94(void);


unsigned int FUN_002884b0(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002881a0();
  if ((((temp_v0 == 5) || (temp_v0 = FUN_002881a0(), temp_v0 == 6)) ||
      (temp_v0 = FUN_002881a0(), temp_v0 == 10)) ||
     (((temp_v0 = FUN_0029ac94(), temp_v0 == 7 || (temp_v0 = FUN_0029ac94(), temp_v0 == 8)) ||
      (temp_v0 = FUN_0029ac94(), temp_v0 == 3)))) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
