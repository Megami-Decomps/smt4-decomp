#include "romwright_types.h"

extern "C" {

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(unsigned int);


unsigned int FUN_0034e624(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0014aa78();
  temp_v1 = FUN_00236038(0);
  *(unsigned int *)(temp_v0 + 0x4ce8) = temp_v1;
  return 1;
}

} /* extern "C" */
