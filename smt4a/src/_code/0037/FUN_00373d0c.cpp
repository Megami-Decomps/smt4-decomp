#include "romwright_types.h"

extern "C" {

extern int btlGetMainState(void);
extern int scrGetArg(void);


unsigned int FUN_00373d0c(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  if (temp_v0 == 0) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 0xffffffff;
  }
  *(unsigned int *)(temp_v1 + 0x4ce0) = temp_v2;
  return 1;
}

} /* extern "C" */
