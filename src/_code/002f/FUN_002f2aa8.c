/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2aa8` (_code @ 0x2f2aa8, 0x3c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002f2e74; /* 0x2f2e74 */
extern unsigned char DAT_004724c9; /* 0x4724c9 */

/* Supplied declaration required: FUN_00282780. */
extern int FUN_002b8cec(unsigned int);
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002bfde4(unsigned int);


int FUN_002f2aa8(int *param_1)

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
    temp_v0 = FUN_002b8cec(5);
    if ((temp_v0 != 0) || (temp_v0 = FUN_002b8cec(0x10), temp_v0 != 0)) {
      temp_v0 = param_1[3];
      if (temp_v0 == 0x27) {
        temp_v0 = 0x25;
        param_1[3] = temp_v0;
      }
      else if (temp_v0 != 0x28) {
        param_1[3] = temp_v0 - 0xd;
        if (-1 < temp_v0 - 0xd) goto LAB_002f2ce0;
        param_1[3] = 0x28;
      }
      else {
LAB_002f2b24:
        param_1[3] = 0x27;
      }
    }
    else {
      temp_v0 = FUN_002b8cec(6);
      if ((temp_v0 != 0) || (temp_v0 = FUN_002b8cec(0x1d), temp_v0 != 0)) {
        temp_v0 = param_1[3];
        if (temp_v0 == 0x27) {
          param_1[3] = 0x28;
        }
        else {
          if (temp_v0 != 0x28) {
            param_1[3] = temp_v0 + 0xdU;
            if (temp_v0 + 0xdU >= 0x27) goto LAB_002f2b24;
            goto LAB_002f2ce0;
          }
          temp_v0 = 0xc;
          param_1[3] = temp_v0;
        }
      }
      else {
        temp_v0 = FUN_002b8cec(4);
        if ((temp_v0 != 0) || (temp_v0 = FUN_002b8cec(0x11), temp_v0 != 0)) {
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
            if (temp_v6) goto LAB_002f2ce0;
          }
        }
        else {
          temp_v0 = FUN_002b8cec(3);
          if ((temp_v0 != 0) || (temp_v0 = FUN_002b8cec(0x1e), temp_v0 != 0)) {
            temp_v0 = param_1[3];
            if (temp_v0 != 0x27 && temp_v0 != 0x28) {
              if (temp_v0 % 0xd == 0xc) {
                temp_v0 = temp_v0 - 0xc;
              }
              else {
                temp_v0 = temp_v0 + 1;
              }
              param_1[3] = temp_v0;
              goto LAB_002f2ce0;
            }
          }
          else {
            temp_v0 = FUN_002bfde4(0);
            if ((temp_v0 != 0) || (temp_v0 = FUN_002bfde4(0x14), temp_v0 != 0)) {
              temp_v5 = param_1[3];
              if (temp_v5 != 0x28) {
                temp_v1 = temp_v5;
                if (temp_v5 != 0x27) goto joined_r0x002f2c90;
                temp_v5 = 0x2a;
LAB_002f2cf8:
                if (param_1[4] < 1) goto LAB_002f2d08;
                temp_v0 = param_1[4] - 1;
                param_1[4] = temp_v0;
              }
              else if (0 < param_1[4]) {
                param_1[2] = 1;
              }
            }
            else {
              temp_v0 = FUN_002bfde4(1);
              if ((temp_v0 != 0) || (temp_v0 = FUN_002bfde4(0x16), temp_v0 != 0)) {
                param_1[2] = 2;
              }
LAB_002f2ce0:
              temp_v5 = 0xffffffff;
              temp_v1 = param_1[3];
joined_r0x002f2c90:
              if (temp_v1 == 0x26) {
                param_1[3] = 0x27;
                temp_v5 = 0xffffffff;
              }
              if ((int)temp_v5 >= 0x2a) goto LAB_002f2cf8;
LAB_002f2d08:
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
  FUN_00282780(temp_v2,temp_v4,0x86,0x14);
  FUN_002be624(temp_v7,&LAB_002f2e74,(int)param_1 + 0x21,param_1 + 7);
  FUN_00282780(temp_v2,temp_v4 + 0x18,0x86,0x44);
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
