/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2a5c` (_code @ 0x2f2a5c, 0x3c4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002f2e28; /* 0x2f2e28 */
extern unsigned char DAT_004724c9; /* 0x4724c9 */

/* Supplied declaration required: FUN_002829f0. */
extern int FUN_002b902c(unsigned int);
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002bffbc(unsigned int);


int FUN_002f2a5c(int *param_1)

{
/* irregular: 8 goto(s); 2 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7 [20];
  
  temp_v2 = *param_1;
  temp_v4 = param_1[1];
  if (param_1[2] != 1) {
    temp_v0 = FUN_002b902c(5);
    if ((temp_v0 != 0) || (temp_v0 = FUN_002b902c(0x10), temp_v0 != 0)) {
      temp_v0 = param_1[3];
      if (temp_v0 == 0x27) {
        temp_v0 = 0x25;
        param_1[3] = temp_v0;
      }
      else if (temp_v0 != 0x28) {
        param_1[3] = temp_v0 - 0xd;
        if (-1 < temp_v0 - 0xd) goto LAB_002f2c94;
        param_1[3] = 0x28;
      }
      else {
LAB_002f2ad8:
        param_1[3] = 0x27;
      }
    }
    else {
      temp_v0 = FUN_002b902c(6);
      if ((temp_v0 != 0) || (temp_v0 = FUN_002b902c(0x1d), temp_v0 != 0)) {
        temp_v0 = param_1[3];
        if (temp_v0 == 0x27) {
          param_1[3] = 0x28;
        }
        else {
          if (temp_v0 != 0x28) {
            param_1[3] = temp_v0 + 0xdU;
            if (temp_v0 + 0xdU >= 0x27) goto LAB_002f2ad8;
            goto LAB_002f2c94;
          }
          temp_v0 = 0xc;
          param_1[3] = temp_v0;
        }
      }
      else {
        temp_v0 = FUN_002b902c(4);
        if ((temp_v0 != 0) || (temp_v0 = FUN_002b902c(0x11), temp_v0 != 0)) {
          temp_v0 = param_1[3];
          if (temp_v0 != 0x27 && temp_v0 != 0x28) {
            temp_v6 = temp_v0 % 0xd == 0;
            if (temp_v6) {
              temp_v0 = temp_v0 + 0xc;
            }
            else {
              temp_v0 = temp_v0 - 1;
            }
            param_1[3] = temp_v0;
            if (temp_v6) goto LAB_002f2c94;
          }
        }
        else {
          temp_v0 = FUN_002b902c(3);
          if ((temp_v0 != 0) || (temp_v0 = FUN_002b902c(0x1e), temp_v0 != 0)) {
            temp_v0 = param_1[3];
            if (temp_v0 != 0x27 && temp_v0 != 0x28) {
              if (temp_v0 % 0xd == 0xc) {
                temp_v0 = temp_v0 - 0xc;
              }
              else {
                temp_v0 = temp_v0 + 1;
              }
              param_1[3] = temp_v0;
              goto LAB_002f2c94;
            }
          }
          else {
            temp_v0 = FUN_002bffbc(0);
            if ((temp_v0 != 0) || (temp_v0 = FUN_002bffbc(0x14), temp_v0 != 0)) {
              temp_v5 = param_1[3];
              if (temp_v5 != 0x28) {
                temp_v1 = temp_v5;
                if (temp_v5 != 0x27) goto joined_r0x002f2c44;
                temp_v5 = 0x2a;
LAB_002f2cac:
                if (param_1[4] < 1) goto LAB_002f2cbc;
                temp_v0 = param_1[4] - 1;
                param_1[4] = temp_v0;
              }
              else if (0 < param_1[4]) {
                param_1[2] = 1;
              }
            }
            else {
              temp_v0 = FUN_002bffbc(1);
              if ((temp_v0 != 0) || (temp_v0 = FUN_002bffbc(0x16), temp_v0 != 0)) {
                param_1[2] = 2;
              }
LAB_002f2c94:
              temp_v5 = 0xffffffff;
              temp_v1 = param_1[3];
joined_r0x002f2c44:
              if (temp_v1 == 0x26) {
                param_1[3] = 0x27;
                temp_v5 = 0xffffffff;
              }
              if ((int)temp_v5 >= 0x2a) goto LAB_002f2cac;
LAB_002f2cbc:
              if ((temp_v5 != 0xffffffff) && (temp_v5 < 0x26)) {
                *(unsigned char *)((int)param_1 + param_1[4] + 0x21) =
                     *(unsigned char *)(temp_v5 + 0x4724f0);
                if (param_1[4] < param_1[5]) {
                  temp_v0 = param_1[4] + 1;
                  param_1[4] = temp_v0;
                }
              }
            }
          }
        }
      }
    }
    *(unsigned char *)((int)param_1 + param_1[4] + 0x21) = 0;
  }
  FUN_002829f0(temp_v2,temp_v4,0x86,0x14);
  FUN_002be7fc(temp_v7,&LAB_002f2e28,(int)param_1 + 0x21,param_1 + 7);
  FUN_002829f0(temp_v2,temp_v4 + 0x18,0x86,0x44);
  if (param_1[6] != 0) {
    return param_1[6];
  }
  temp_v5 = 0;
  temp_v4 = 0;
  temp_v2 = temp_v2 + 4;
  temp_v0 = 0;
  do {
    puVar1 = (unsigned char *)(temp_v5 + 0x4724f0);
    temp_v3 = temp_v2;
    do {
      temp_v0 = temp_v0 + 1;
      temp_v2 = temp_v3 + 10;
      temp_v5 = temp_v5 + 1;
      if (temp_v0 >= 0xd) {
        temp_v4 = temp_v4 + 1;
        temp_v2 = temp_v3 - 0x78;
        if (temp_v4 >= 3) {
          DAT_004724c9 = *puVar1;
          return temp_v3 - 10;
        }
        temp_v0 = 0;
      }
      temp_v3 = temp_v2;
    } while (temp_v5 >= 0x26);
  } while( 1 );
}
