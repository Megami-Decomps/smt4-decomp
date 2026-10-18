/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004eb42c` (_code @ 0x4eb42c, 0x310 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00164af0(unsigned int);
/* Supplied declaration required: FUN_00169ddc. */
/* Supplied declaration required: FUN_002e6354. */
extern int FUN_0033413c(void);


unsigned int FUN_004eb42c(int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  
  temp_v7 = 0;
  temp_v0 = 0;
  do {
    temp_v2 = temp_v0;
    if (*(unsigned int *)(param_2 + 0x5ac) == (unsigned int)*(unsigned char *)(param_2 + temp_v0 + 0xbd)) break;
    temp_v0 = temp_v0 + 1;
    temp_v2 = 0xffffffff;
  } while ((int)temp_v0 < 0x6d);
  FUN_002e6354(param_2 + 0x38,0x6d);
  temp_v1 = FUN_00164af0(3);
  temp_v6 = param_2 + 0x38;
  if (((temp_v1 != 0) || (temp_v1 = FUN_00164af0(0xc), temp_v1 != 0)) ||
     (temp_v1 = FUN_0033413c(), temp_v1 >= 1)) {
    temp_v1 = FUN_00164af0(3);
    if ((temp_v1 != 0) || (temp_v1 = FUN_00164af0(0xc), temp_v1 != 0)) {
      FUN_00169ddc(0x100020d);
    }
    temp_v3 = 1;
    temp_v1 = 1;
    *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + 0x50) =
         *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + 0x50) & 0xfffffff7;
    do {
      temp_v4 = temp_v3 + 1;
      temp_v5 = temp_v3 * 0x1d0 + 0x50;
      temp_v3 = temp_v3 + 2;
      temp_v4 = temp_v4 * 0x1d0 + 0x50;
      temp_v1 = temp_v1 + 2;
      *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v5) =
           *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v5) & 0xfffffff7;
      *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4) =
           *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4) & 0xfffffff7;
    } while (temp_v1 < 0x6d);
    do {
      temp_v2 = temp_v2 + 1;
      if ((int)temp_v2 >= 0x6d) {
        temp_v0 = 0;
        while (*(char *)(param_2 + temp_v0 + 0xbd) == '\0') {
          temp_v0 = temp_v0 + 1;
          if ((int)temp_v0 >= 0x6d) {
            return 0;
          }
        }
        *(unsigned char *)((unsigned int)*(unsigned char *)(temp_v0 + param_2 + 0xbd) + temp_v6) = 1;
        *(unsigned int *)(param_2 + 0x5ac) = (unsigned int)*(unsigned char *)(temp_v0 + param_2 + 0xbd);
        return 0;
      }
    } while (*(char *)(param_2 + temp_v2 + 0xbd) == '\0');
    temp_v7 = 1;
    *(unsigned char *)((unsigned int)*(unsigned char *)(temp_v2 + param_2 + 0xbd) + temp_v6) = 1;
    *(unsigned int *)(param_2 + 0x5ac) = (unsigned int)*(unsigned char *)(temp_v2 + param_2 + 0xbd);
  }
  else {
    temp_v1 = FUN_00164af0(4);
    if (((temp_v1 == 0) && (temp_v1 = FUN_00164af0(0xd), temp_v1 == 0)) &&
       (temp_v1 = FUN_0033413c(), -1 < temp_v1)) {
      *(unsigned char *)(*(int *)(param_2 + 0x5ac) + temp_v6) = 1;
    }
    else {
      temp_v1 = FUN_00164af0(4);
      if ((temp_v1 != 0) || (temp_v1 = FUN_00164af0(0xd), temp_v1 != 0)) {
        FUN_00169ddc(0x100020d);
      }
      temp_v3 = 1;
      temp_v1 = 1;
      *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + 0x50) =
           *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + 0x50) & 0xfffffff7;
      do {
        temp_v4 = temp_v3 + 1;
        temp_v5 = temp_v3 * 0x1d0 + 0x50;
        temp_v3 = temp_v3 + 2;
        temp_v4 = temp_v4 * 0x1d0 + 0x50;
        temp_v1 = temp_v1 + 2;
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v5) =
             *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v5) & 0xfffffff7;
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4) =
             *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v4) & 0xfffffff7;
      } while (temp_v1 < 0x6d);
      temp_v2 = temp_v2 - 1;
      if (-1 < (int)temp_v2) {
        do {
          if (*(char *)(param_2 + temp_v2 + 0xbd) != '\0') {
            temp_v7 = 1;
            *(unsigned char *)((unsigned int)*(unsigned char *)(temp_v2 + param_2 + 0xbd) + temp_v6) = 1;
            *(unsigned int *)(param_2 + 0x5ac) = (unsigned int)*(unsigned char *)(temp_v2 + param_2 + 0xbd);
            return temp_v7;
          }
          temp_v2 = temp_v2 - 1;
        } while (temp_v2 < 0x80000000);
      }
      temp_v0 = 0x6c;
      do {
        if (*(char *)(param_2 + temp_v0 + 0xbd) != '\0') {
          *(unsigned char *)((unsigned int)*(unsigned char *)(temp_v0 + param_2 + 0xbd) + temp_v6) = 1;
          *(unsigned int *)(param_2 + 0x5ac) = (unsigned int)*(unsigned char *)(temp_v0 + param_2 + 0xbd);
          return 0;
        }
        temp_v0 = temp_v0 - 1;
      } while (temp_v0 < 0x80000000);
    }
  }
  return temp_v7;
}
