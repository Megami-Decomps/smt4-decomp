#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_002fd444(void);


unsigned int FUN_002fd454(void)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_002fd444();
  return (temp_v0 & 3) >> 1;
}

} /* extern "C" */
