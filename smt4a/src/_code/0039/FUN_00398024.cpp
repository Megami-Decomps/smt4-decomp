#include "romwright_types.h"

extern "C" {

extern int FUN_004186a4(void);
extern int FUN_004186e0(void);


int FUN_00398024(void)

{
  int temp_v0;
  
  temp_v0 = FUN_004186a4();
  if ((temp_v0 == 0) || (temp_v0 = FUN_004186e0(), temp_v0 <= 0)) {
    temp_v0 = -1;
  }
  return temp_v0;
}

} /* extern "C" */
