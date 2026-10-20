#include "romwright_types.h"

extern "C" {

extern int FUN_0025c05c(void);
extern unsigned char DAT_00447620[];


unsigned char FUN_001e2954(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0025c05c();
  return DAT_00447620[temp_v0];
}

} /* extern "C" */
