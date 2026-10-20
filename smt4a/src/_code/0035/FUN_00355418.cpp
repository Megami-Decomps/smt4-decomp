#include "romwright_types.h"

extern "C" {

extern int FUN_003564ec(void);


int FUN_00355418(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003564ec();
  return (int)*(short *)(temp_v0 + 0x12);
}

} /* extern "C" */
