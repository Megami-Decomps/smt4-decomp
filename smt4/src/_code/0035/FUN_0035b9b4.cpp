#include "romwright_types.h"

extern "C" {


unsigned int FUN_0035b9b4(int param_1,int *param_2)

{
  *(unsigned char *)(*param_2 + 8) = 0;
  *(unsigned short *)(*param_2 + 10) =
       *(unsigned short *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 2);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return 0;
}

} /* extern "C" */
