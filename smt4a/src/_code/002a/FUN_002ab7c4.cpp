#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);


unsigned int FUN_002ab7c4(unsigned int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00187180(0x24,0);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  if (param_1 >= temp_v2) {
    temp_v2 = 0xffffffff;
  }
  else {
    temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + param_1 * 0x94);
  }
  return temp_v2;
}

} /* extern "C" */
