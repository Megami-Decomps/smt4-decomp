#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005594dc; /* 0x5594dc */

extern int FUN_001055ac(unsigned int *);
extern int FUN_002f4fd8(int);


int FUN_00111790(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_005594dc;
  temp_v0 = FUN_001055ac(param_1 + 0x16);
  temp_v0 = FUN_002f4fd8(temp_v0 - 0x50);
  return temp_v0 - 8;
}

} /* extern "C" */
