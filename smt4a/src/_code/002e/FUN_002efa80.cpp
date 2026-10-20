#include "romwright_types.h"

extern "C" {


unsigned char FUN_002efa80(unsigned int *param_1)

{
  return (*(unsigned int *)*param_1 & param_1[1]) != 0;
}

} /* extern "C" */
