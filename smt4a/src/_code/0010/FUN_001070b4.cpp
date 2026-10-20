#include "romwright_types.h"

extern "C" {

extern int FUN_002eeb5c(unsigned int, unsigned int, unsigned int);
extern unsigned int *FUN_002eeb90(unsigned int, unsigned int);


unsigned char FUN_001070b4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002eeb90(*(unsigned int *)(param_1 + 0x44),param_4);
  temp_v0 = FUN_002eeb5c(*puVar1,param_2,param_3);
  return temp_v0 != 0;
}

} /* extern "C" */
