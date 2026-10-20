#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_001abac8(void);


unsigned int FUN_003deeb4(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_001abac8();
  return (*pbVar1 & 0x20) >> 5;
}

} /* extern "C" */
