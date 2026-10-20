#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_002840c4(void);


void FUN_003fd6b0(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_002840c4();
  *pbVar1 = *pbVar1 | 3;
  return;
}

} /* extern "C" */
