#include "romwright_types.h"

extern "C" {

extern int FUN_002e7328(int, unsigned int);
extern int FUN_002e76b6(unsigned int);


unsigned int FUN_002e75c2(int param_1,unsigned int *param_2)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002e7328(param_1,4);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e76b6(*(unsigned int *)(param_1 + 8));
      int off = *(int *)(param_1 + 0xc);
    puVar2 = (unsigned int *)(temp_v0 + off);
    *param_2 = (*puVar2 & 0xffffff) | ((unsigned int)*(unsigned char *)((int)puVar2 + 3) << 0x18);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    return 1;
  }
  *param_2 = 0;
  return 0;
}

} /* extern "C" */
