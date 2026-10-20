#include "romwright_types.h"

extern "C" {

extern int FUN_002e7328(int, unsigned int);
extern int FUN_002e76b6(unsigned int);


unsigned int FUN_002e7594(int param_1,unsigned short *param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002e7328(param_1,2);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e76b6(*(unsigned int *)(param_1 + 8));
    int off = *(int *)(param_1 + 0xc);
    unsigned short *p = (unsigned short *)(temp_v0 + off);
    *param_2 = *p;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
    return 1;
  }
  *param_2 = 0;
  return 0;
}

} /* extern "C" */
