/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030db5c` (_code @ 0x30db5c, 0x182 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: aeabi_uidivmod. */


unsigned int FUN_0030db5c(unsigned int param_1,unsigned char *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned char *pbVar1;
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned char temp_v22;
  
  temp_v21 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_3 == 1) {
    temp_v21 = *param_2 + temp_v21;
    if (temp_v21 >= 0xfff1) {
      temp_v21 = temp_v21 - 0xfff1;
    }
    param_1 = param_1 + temp_v21;
    if (param_1 >= 0xfff1) {
      param_1 = param_1 - 0xfff1;
    }
    return (param_1 << 0x10) | temp_v21;
  }
  if (param_2 == (unsigned char *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    while (temp_v22 = param_3 != 0, param_3 = param_3 - 1, temp_v22) {
      temp_v0 = *param_2;
      param_2 = param_2 + 1;
      temp_v21 = temp_v0 + temp_v21;
      param_1 = param_1 + temp_v21;
    }
    if (temp_v21 >= 0xfff1) {
      temp_v21 = temp_v21 - 0xfff1;
    }
    aeabi_uidivmod(param_1);
    param_1 = temp_v16;
  }
  else {
    while (param_3 >= 0x15b0) {
      temp_v1 = 0x15b;
      param_3 = param_3 - 0x15b0;
      do {
        temp_v2 = (unsigned int)param_2[1] + *param_2 + temp_v21;
        temp_v3 = (unsigned int)param_2[2] + temp_v2;
        temp_v4 = (unsigned int)param_2[3] + temp_v3;
        temp_v5 = (unsigned int)param_2[4] + temp_v4;
        temp_v6 = (unsigned int)param_2[5] + temp_v5;
        temp_v7 = (unsigned int)param_2[6] + temp_v6;
        temp_v8 = (unsigned int)param_2[7] + temp_v7;
        temp_v9 = (unsigned int)param_2[8] + temp_v8;
        temp_v10 = (unsigned int)param_2[9] + temp_v9;
        temp_v11 = (unsigned int)param_2[10] + temp_v10;
        temp_v12 = (unsigned int)param_2[0xb] + temp_v11;
        temp_v13 = (unsigned int)param_2[0xc] + temp_v12;
        temp_v14 = (unsigned int)param_2[0xd] + temp_v13;
        pbVar1 = param_2 + 0xf;
        temp_v15 = (unsigned int)param_2[0xe] + temp_v14;
        temp_v2 = param_1 + *param_2 + temp_v21 + temp_v2 + temp_v3 + temp_v4 + temp_v5 + temp_v6 + temp_v7 + temp_v8
                + temp_v9 + temp_v10 + temp_v11 + temp_v12 + temp_v13 + temp_v14 + temp_v15;
        temp_v21 = (unsigned int)*pbVar1 + temp_v15;
        param_1 = temp_v2 + temp_v21;
        param_2 = param_2 + 0x10;
        temp_v1 = temp_v1 - 1;
      } while (temp_v1 != 0);
      aeabi_uidivmod(temp_v21,0xfff1,(unsigned int)*pbVar1,temp_v2,param_4);
      aeabi_uidivmod(param_1,0xfff1);
      temp_v21 = temp_v17;
      param_1 = temp_v18;
    }
    if (param_3 != 0) {
      for (; param_3 >= 0x10; param_3 = param_3 - 0x10) {
        temp_v1 = *param_2 + temp_v21;
        temp_v2 = (unsigned int)param_2[1] + temp_v1;
        temp_v3 = (unsigned int)param_2[2] + temp_v2;
        temp_v4 = (unsigned int)param_2[3] + temp_v3;
        temp_v5 = (unsigned int)param_2[4] + temp_v4;
        temp_v6 = (unsigned int)param_2[5] + temp_v5;
        temp_v7 = (unsigned int)param_2[6] + temp_v6;
        temp_v8 = (unsigned int)param_2[7] + temp_v7;
        temp_v9 = (unsigned int)param_2[8] + temp_v8;
        temp_v10 = (unsigned int)param_2[9] + temp_v9;
        temp_v11 = (unsigned int)param_2[10] + temp_v10;
        temp_v12 = (unsigned int)param_2[0xb] + temp_v11;
        temp_v13 = (unsigned int)param_2[0xc] + temp_v12;
        temp_v14 = (unsigned int)param_2[0xd] + temp_v13;
        temp_v15 = (unsigned int)param_2[0xe] + temp_v14;
        temp_v21 = (unsigned int)param_2[0xf] + temp_v15;
        param_1 = param_1 + temp_v1 + temp_v2 + temp_v3 + temp_v4 + temp_v5 + temp_v6 + temp_v7 + temp_v8 + temp_v9
                  + temp_v10 + temp_v11 + temp_v12 + temp_v13 + temp_v14 + temp_v15 + temp_v21;
        param_2 = param_2 + 0x10;
      }
      while (temp_v22 = param_3 != 0, param_3 = param_3 - 1, temp_v22) {
        temp_v0 = *param_2;
        param_2 = param_2 + 1;
        temp_v21 = temp_v0 + temp_v21;
        param_1 = param_1 + temp_v21;
      }
      aeabi_uidivmod(temp_v21,0xfff1);
      aeabi_uidivmod(param_1,0xfff1);
      temp_v21 = temp_v19;
      param_1 = temp_v20;
    }
  }
  return (param_1 << 0x10) | temp_v21;
}
