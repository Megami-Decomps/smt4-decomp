#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_002840e0(void);


unsigned int FUN_003ff190(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_002840e0();
  return (*pbVar1 & 2) >> 1;
}

} /* extern "C" */
