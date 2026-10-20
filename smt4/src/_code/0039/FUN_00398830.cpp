#include "romwright_types.h"

extern "C" {

extern int FUN_002b8ee0(int, unsigned int);
extern unsigned int FUN_002beda4(int);


void FUN_00398830(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002b8ee0(param_1 + 0x708,0);
  if (temp_v0 != 0) {
    *(unsigned char *)(param_1 + 1) = 2;
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  temp_v1 = FUN_002beda4(param_1 + 0x708);
  *(unsigned int *)(param_1 + 0xa4) = temp_v1;
  return;
}

} /* extern "C" */
