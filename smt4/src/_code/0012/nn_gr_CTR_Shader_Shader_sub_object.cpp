#include "romwright_types.h"

extern "C" {

int FUN_002c4938(unsigned int *, int);

/* Supplied declaration required: FUN_002c4938. */


unsigned int * nn_gr_CTR_Shader_Shader_sub_object(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  param_1[1] = 0xffffffff;
  *(unsigned char *)(param_1 + 0xa6) = 3;
  *param_1 = 0;
  *(unsigned char *)(param_1 + 2) = 0;
  param_1[0x24] = 0;
  param_1[0xa5] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xd9] = 0;
  FUN_002c4938(param_1 + 0x4a1a,0x80);
  return param_1;
}

} /* extern "C" */
