#include "romwright_types.h"

extern "C" {

extern int FUN_0014aa78(void);
extern int FUN_00236038(void);


unsigned int FUN_00373d0c(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0014aa78();
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
