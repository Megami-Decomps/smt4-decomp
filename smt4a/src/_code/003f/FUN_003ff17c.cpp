#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_002840e0(void);


unsigned char FUN_003ff17c(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_002840e0();
  return *pbVar1 & 1;
}

} /* extern "C" */
