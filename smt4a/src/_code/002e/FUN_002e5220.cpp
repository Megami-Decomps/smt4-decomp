#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned short *FUN_00192798(void);


unsigned short FUN_002e5220(unsigned int param_1)

{
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  
  temp_v1 = FUN_00187180(1,2);
  puVar3 = (unsigned short *)FUN_00192798();
  temp_v2 = FUN_00192748(temp_v1);
  if (temp_v2 > param_1) {
    temp_v0 = puVar3[param_1 * 2];
  }
  else {
    temp_v0 = *puVar3;
  }
  return temp_v0;
}

} /* extern "C" */
