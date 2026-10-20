#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_0015a2d8(void);
extern int FUN_0018b65c(void);


unsigned int FUN_0015a3d0(void)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0015a2d8();
  temp_v1 = FUN_0018b65c();
  if ((temp_v1 == 0 || (temp_v0 & 0x20000000) == 0) || ((temp_v0 & 0x10000000) == 0)) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 1;
  }
  return temp_v2;
}

} /* extern "C" */
