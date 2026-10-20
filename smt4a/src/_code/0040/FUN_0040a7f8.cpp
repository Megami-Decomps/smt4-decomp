#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_0037d494(void);


unsigned int FUN_0040a7f8(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_0037d494();
  return (*pbVar1 & 2) >> 1;
}

} /* extern "C" */
