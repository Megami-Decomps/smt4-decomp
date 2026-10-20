#include "romwright_types.h"

extern "C" {

extern int FUN_0014af84(void);


int FUN_003dfd44(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0014af84();
  return (int)*(short *)(temp_v0 + 0x2830e);
}

} /* extern "C" */
