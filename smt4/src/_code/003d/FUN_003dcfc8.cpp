#include "romwright_types.h"

extern "C" {

extern int FUN_00246708(void);


unsigned char FUN_003dcfc8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00246708();
  return temp_v0 != 0;
}

} /* extern "C" */
