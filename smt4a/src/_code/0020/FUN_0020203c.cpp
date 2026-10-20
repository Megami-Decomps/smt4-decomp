#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3f94; /* 0x5b3f94 */


void FUN_0020203c(unsigned int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_005b3f94 + 0x4));
  if ((*(unsigned int * *)((unsigned char *)&DAT_005b3f94 + 0x4)) != (unsigned int *)0x0) {
    *(*(unsigned int * *)((unsigned char *)&DAT_005b3f94 + 0x4)) = param_1;
    puVar1[1] = param_2;
  }
  return;
}

} /* extern "C" */
