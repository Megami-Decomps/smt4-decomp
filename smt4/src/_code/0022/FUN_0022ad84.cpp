#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00464fa8; /* 0x464fa8 */


void FUN_0022ad84(unsigned int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_00464fa8 + 0x4));
  if ((*(unsigned int * *)((unsigned char *)&DAT_00464fa8 + 0x4)) != (unsigned int *)0x0) {
    *(*(unsigned int * *)((unsigned char *)&DAT_00464fa8 + 0x4)) = param_1;
    puVar1[1] = param_2;
  }
  return;
}

} /* extern "C" */
