/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d1e2c` (_code @ 0x3d1e2c, 0x310 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0029ae44(void);
extern int FUN_002b8cec(unsigned int);
/* Supplied declaration required: FUN_002b8e84. */
/* Supplied declaration required: FUN_002c4938. */


unsigned int FUN_003d1e2c(int *param_1,int param_2)

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
    if (*(unsigned int *)(param_2 + 0x5a4) == (unsigned int)*(unsigned char *)(param_2 + temp_v0 + 0xbd)) break;
    temp_v0 = temp_v0 + 1;
    temp_v2 = 0xffffffff;
  } while ((int)temp_v0 < 0x6d);
  FUN_002c4938(param_2 + 0x38,0x6d);
  temp_v1 = FUN_002b8cec(3);
  temp_v6 = param_2 + 0x38;
  if (((temp_v1 != 0) || (temp_v1 = FUN_002b8cec(0xc), temp_v1 != 0)) ||
     (temp_v1 = FUN_0029ae44(), temp_v1 >= 1)) {
    temp_v1 = FUN_002b8cec(3);
    if ((temp_v1 != 0) || (temp_v1 = FUN_002b8cec(0xc), temp_v1 != 0)) {
      FUN_002b8e84(0x100016c);
    }
    temp_v3 = 1;
    temp_v1 = 1;
    *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + 0x50) =
         *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + 0x50) & 0xfffffff7;
    do {
      temp_v4 = temp_v3 + 1;
      temp_v5 = temp_v3 * 0x114 + 0x50;
      temp_v3 = temp_v3 + 2;
      temp_v4 = temp_v4 * 0x114 + 0x50;
      temp_v1 = temp_v1 + 2;
      *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v5) =
           *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v5) & 0xfffffff7;
      *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v4) =
           *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v4) & 0xfffffff7;
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
        *(unsigned int *)(param_2 + 0x5a4) = (unsigned int)*(unsigned char *)(temp_v0 + param_2 + 0xbd);
        return 0;
      }
    } while (*(char *)(param_2 + temp_v2 + 0xbd) == '\0');
    temp_v7 = 1;
    *(unsigned char *)((unsigned int)*(unsigned char *)(temp_v2 + param_2 + 0xbd) + temp_v6) = 1;
    *(unsigned int *)(param_2 + 0x5a4) = (unsigned int)*(unsigned char *)(temp_v2 + param_2 + 0xbd);
  }
  else {
    temp_v1 = FUN_002b8cec(4);
    if (((temp_v1 == 0) && (temp_v1 = FUN_002b8cec(0xd), temp_v1 == 0)) &&
       (temp_v1 = FUN_0029ae44(), -1 < temp_v1)) {
      *(unsigned char *)(*(int *)(param_2 + 0x5a4) + temp_v6) = 1;
    }
    else {
      temp_v1 = FUN_002b8cec(4);
      if ((temp_v1 != 0) || (temp_v1 = FUN_002b8cec(0xd), temp_v1 != 0)) {
        FUN_002b8e84(0x100016c);
      }
      temp_v3 = 1;
      temp_v1 = 1;
      *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + 0x50) =
           *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + 0x50) & 0xfffffff7;
      do {
        temp_v4 = temp_v3 + 1;
        temp_v5 = temp_v3 * 0x114 + 0x50;
        temp_v3 = temp_v3 + 2;
        temp_v4 = temp_v4 * 0x114 + 0x50;
        temp_v1 = temp_v1 + 2;
        *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v5) =
             *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v5) & 0xfffffff7;
        *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v4) =
             *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v4) & 0xfffffff7;
      } while (temp_v1 < 0x6d);
      temp_v2 = temp_v2 - 1;
      if (-1 < (int)temp_v2) {
        do {
          if (*(char *)(param_2 + temp_v2 + 0xbd) != '\0') {
            temp_v7 = 1;
            *(unsigned char *)((unsigned int)*(unsigned char *)(temp_v2 + param_2 + 0xbd) + temp_v6) = 1;
            *(unsigned int *)(param_2 + 0x5a4) = (unsigned int)*(unsigned char *)(temp_v2 + param_2 + 0xbd);
            return temp_v7;
          }
          temp_v2 = temp_v2 - 1;
        } while (temp_v2 < 0x80000000);
      }
      temp_v0 = 0x6c;
      do {
        if (*(char *)(param_2 + temp_v0 + 0xbd) != '\0') {
          *(unsigned char *)((unsigned int)*(unsigned char *)(temp_v0 + param_2 + 0xbd) + temp_v6) = 1;
          *(unsigned int *)(param_2 + 0x5a4) = (unsigned int)*(unsigned char *)(temp_v0 + param_2 + 0xbd);
          return 0;
        }
        temp_v0 = temp_v0 - 1;
      } while (temp_v0 < 0x80000000);
    }
  }
  return temp_v7;
}
