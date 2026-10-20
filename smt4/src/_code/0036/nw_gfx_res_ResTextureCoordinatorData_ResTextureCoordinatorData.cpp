#include "romwright_types.h"

extern "C" {

int nn_math_ARMv6_MTX34CopyAsm(unsigned int *, unsigned int *);

/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


unsigned int *
nw_gfx_res_ResTextureCoordinatorData_ResTextureCoordinatorData
          (unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  temp_v0 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = temp_v0;
  param_1[6] = param_2[6];
  temp_v0 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = temp_v0;
  *(unsigned char *)(param_1 + 9) = *(unsigned char *)(param_2 + 9);
  *(unsigned char *)((int)param_1 + 0x25) = *(unsigned char *)((int)param_2 + 0x25);
  *(unsigned short *)((int)param_1 + 0x26) = *(unsigned short *)((int)param_2 + 0x26);
  nn_math_ARMv6_MTX34CopyAsm(param_1 + 10,param_2 + 10);
  return param_1;
}

} /* extern "C" */
