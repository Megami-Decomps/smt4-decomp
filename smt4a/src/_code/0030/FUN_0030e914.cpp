#include "romwright_types.h"

extern "C" {


unsigned char FUN_0030e914(int param_1,unsigned short param_2,int param_3)

{
  return (*(unsigned short *)(*(int *)(param_1 + 0x14) + param_3 * 2) & param_2) != 0;
}

} /* extern "C" */
