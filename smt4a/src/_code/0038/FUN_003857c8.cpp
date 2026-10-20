#include "romwright_types.h"

extern "C" {

extern short *FUN_003564ec(void);


int FUN_003857c8(void)

{
  short *psVar1;
  
  psVar1 = (short *)FUN_003564ec();
  return (int)*psVar1;
}

} /* extern "C" */
