#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_00240cd4(void);


unsigned int FUN_002886b0(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_00240cd4();
  return (*pbVar1 & 0x40) >> 6;
}

} /* extern "C" */
