#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_002840c4(void);


unsigned char FUN_003fd6c8(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_002840c4();
  return *pbVar1 & 1;
}

} /* extern "C" */
