#include "romwright_types.h"

extern "C" {

extern int FUN_002e7328(int, unsigned int);
extern int FUN_002e76b6(unsigned int);


unsigned int FUN_002e752e(int param_1,unsigned char *param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002e7328(param_1,1);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e76b6(*(unsigned int *)(param_1 + 8));
    int off = *(int *)(param_1 + 0xc);
    unsigned char *p = (unsigned char *)(temp_v0 + off);
    *param_2 = *p;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}

} /* extern "C" */
