#include "romwright_types.h"

extern "C" {


unsigned char FUN_00206344(int param_1,unsigned int param_2)

{
  return *(unsigned char *)(param_1 + 0x3060) == param_2;
}

} /* extern "C" */
