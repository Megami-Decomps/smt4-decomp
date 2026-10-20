#include "romwright_types.h"

extern "C" {


unsigned char FUN_002b8d90(int param_1,unsigned int param_2)

{
  return (*(unsigned int *)(param_1 + 0x34) & param_2) != 0;
}

} /* extern "C" */
