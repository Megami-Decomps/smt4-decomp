#include "romwright_types.h"

extern "C" {


int VX2DecoderGetV(int *param_1,int param_2)

{
  return param_1[6] * *(int *)(*param_1 + 8) + param_2 + ((unsigned int)param_1[6] >> 1);
}

} /* extern "C" */
