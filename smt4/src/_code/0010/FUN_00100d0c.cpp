#include "romwright_types.h"

extern "C" {


void FUN_00100d0c(unsigned short param_1,unsigned int *param_2)

{
  unsigned short *puVar1;
  
  unsigned short *puVar2 = (unsigned short *)param_2[1];
  puVar1 = (unsigned short *)*param_2;
  if (puVar1 < puVar2) {
    *param_2 = (unsigned int)(puVar1 + 1);
    *puVar1 = param_1;
  }
  return;
}

} /* extern "C" */
