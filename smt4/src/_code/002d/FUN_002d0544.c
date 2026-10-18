/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d0544` (_code @ 0x2d0544, 0x198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b9024. */


int FUN_002d0544(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = (param_1[1] & 0x1ffff) >> 2;
  FUN_002b9024();
  temp_v1 = (param_2[1] & 0x1ffff) >> 2;
  FUN_002b9024();
  temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 2) - (unsigned int)*(unsigned char *)(temp_v1 + 2);
  if ((temp_v2 == 0) && (temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 3) - (unsigned int)*(unsigned char *)(temp_v0 + 3), temp_v2 == 0))
  {
    temp_v2 = ((param_1[1] & 0x1ffff) >> 2) - ((param_2[1] & 0x1ffff) >> 2);
  }
  temp_v0 = *param_1 & 0x7fff;
  FUN_002b9024();
  temp_v1 = *param_2 & 0x7fff;
  FUN_002b9024();
  if (((temp_v2 == 0) && (temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 2) - (unsigned int)*(unsigned char *)(temp_v1 + 2), temp_v2 == 0)
      ) && (temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 3) - (unsigned int)*(unsigned char *)(temp_v0 + 3), temp_v2 == 0)) {
    temp_v2 = (*param_1 & 0x7fff) - (*param_2 & 0x7fff);
    if (temp_v2 == 0) {
      temp_v2 = (*param_1 >> 0x1e) - (*param_2 >> 0x1e);
    }
  }
  temp_v0 = (*param_1 & 0x3fffffff) >> 0xf;
  FUN_002b9024();
  temp_v1 = (*param_2 & 0x3fffffff) >> 0xf;
  FUN_002b9024();
  if (((temp_v2 == 0) && (temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 2) - (unsigned int)*(unsigned char *)(temp_v1 + 2), temp_v2 == 0)
      ) && ((temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 3) - (unsigned int)*(unsigned char *)(temp_v0 + 3), temp_v2 == 0 &&
            (temp_v2 = ((*param_1 & 0x3fffffff) >> 0xf) - ((*param_2 & 0x3fffffff) >> 0xf), temp_v2 == 0
            )))) {
    temp_v2 = (param_1[1] & 3) - (param_2[1] & 3);
  }
  return temp_v2;
}
