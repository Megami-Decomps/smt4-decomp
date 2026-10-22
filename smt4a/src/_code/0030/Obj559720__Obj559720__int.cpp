#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559728; /* 0x559728 */

extern unsigned int *_ZN9Obj55b314C1Ei(unsigned int, unsigned int);


void _ZN9Obj559720C1Ei(unsigned int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)_ZN9Obj55b314C1Ei(param_1,0);
  puVar1[4] = param_2;
  *puVar1 = (unsigned int)&DAT_00559728;
  return;
}

} /* extern "C" */
