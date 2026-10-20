#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_002c0c74(unsigned int);
extern unsigned short *FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


unsigned short FUN_00288118(unsigned int param_1)

{
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  
  temp_v1 = FUN_002c0cec(1,2);
  puVar3 = (unsigned short *)FUN_002c0cc4();
  temp_v2 = FUN_002c0c74(temp_v1);
  if (temp_v2 > param_1) {
    temp_v0 = puVar3[param_1 * 2];
  }
  else {
    temp_v0 = *puVar3;
  }
  return temp_v0;
}

} /* extern "C" */
