#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_002840c4(void);


unsigned int FUN_003fd708(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_002840c4();
  return (*pbVar1 & 2) >> 1;
}

} /* extern "C" */
