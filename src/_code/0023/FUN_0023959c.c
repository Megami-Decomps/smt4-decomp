/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023959c` (_code @ 0x23959c, 0x400 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 7 slot(s), 26 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned short spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_5_stack;

extern signed char DAT_004656d3; /* 0x4656d3 */
extern signed char DAT_004656d4; /* 0x4656d4 */
extern unsigned int DAT_004e62a8; /* 0x4e62a8 */
extern unsigned int DAT_004e62b4; /* 0x4e62b4 */

extern int FUN_002399bc(int, unsigned int);
/* Supplied declaration required: FUN_002399ec. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
/* Supplied declaration required: FUN_002c5df8. */


unsigned int FUN_0023959c(int *param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *temp_v7;
  unsigned short temp_v8 [8];
  int temp_v9;
  int *piStack_34;
  int iStack_30;
  int temp_v10;
  unsigned int uStack_28;
  
  piStack_34 = param_1;
  iStack_30 = param_2;
  temp_v10 = param_3;
  uStack_28 = param_4;
  FUN_002c38a4(&DAT_004e62a8);
  temp_v1 = param_1[1];
  if (temp_v1 == 0) {
    temp_v2 = 0xc8810bea;
  }
  else {
    temp_v6 = 0;
    temp_v5 = 0;
    if (param_5 != 0) {
      (**(romwright_code **)(*param_1 + 8))(param_1,temp_v1,4,2,&temp_v5);
    }
    else {
      (**(romwright_code **)(*param_1 + 8))(param_1,temp_v1,3,2,&temp_v5);
    }
    if (temp_v5 != 0) {
      temp_v1 = -0x379ef40d;
      temp_v7 = (unsigned int *)(param_1 + 0x156);
      if (param_5 != 0) {
        if ((param_5 == 1) && (DAT_004656d4 != '\0')) {
          *(unsigned int *)(param_2 + 0x14) = 0;
          FUN_002c38a4(&DAT_004e62b4);
          if (DAT_004656d4 != '\0') {
            FUN_002399ec(param_1[0x156]);
            DAT_004656d4 = '\0';
          }
          FUN_002c3820(&DAT_004e62b4);
        }
        temp_v0 = temp_v5;
        FUN_002c38a4(&DAT_004e62b4);
        if (DAT_004656d4 != '\0') {
          FUN_002399ec(param_1[0x156]);
          DAT_004656d4 = '\0';
        }
        temp_v0 = FUN_002399bc(temp_v0,4);
        param_1[0x156] = temp_v0;
        if (temp_v0 != 0) {
          DAT_004656d4 = '\x01';
          temp_v1 = 0;
          FUN_002c3820(&DAT_004e62b4);
        }
        else {
          DAT_004656d4 = '\0';
          FUN_002c3820(&DAT_004e62b4);
        }
        if (temp_v1 < 0) {
          *(unsigned int *)(param_2 + 0x14) = 0;
          FUN_002c3820(&DAT_004e62a8);
          return 0xc8610bf3;
        }
        temp_v1 = (**(romwright_code **)(*param_1 + 0x34))
                          (param_1,param_1[0x156],temp_v5,&temp_v6,param_1[1],4,0x12);
        temp_v4 = *temp_v7;
      }
      else {
        if (DAT_004656d3 != '\0') {
          *(unsigned int *)(param_2 + 0x14) = 0;
          FUN_002c38a4(&DAT_004e62b4);
          if (DAT_004656d3 != '\0') {
            FUN_002399ec(param_1[0xea]);
            DAT_004656d3 = '\0';
          }
          FUN_002c3820(&DAT_004e62b4);
        }
        temp_v0 = temp_v5;
        FUN_002c38a4(&DAT_004e62b4);
        if (DAT_004656d3 != '\0') {
          FUN_002399ec(param_1[0xea]);
          DAT_004656d3 = '\0';
        }
        temp_v0 = FUN_002399bc(temp_v0,4);
        param_1[0xea] = temp_v0;
        if (temp_v0 != 0) {
          DAT_004656d3 = '\x01';
          temp_v1 = 0;
          FUN_002c3820(&DAT_004e62b4);
        }
        else {
          DAT_004656d3 = '\0';
          FUN_002c3820(&DAT_004e62b4);
        }
        if (temp_v1 < 0) {
          *(unsigned int *)(param_2 + 0x14) = 0;
          FUN_002c3820(&DAT_004e62a8);
          return 0xc8610bf3;
        }
        temp_v1 = (**(romwright_code **)(*param_1 + 0x34))
                          (param_1,param_1[0xea],temp_v5,&temp_v6,param_1[1],3,0x12);
        temp_v4 = param_1[0xea];
      }
      if ((temp_v1 >= 0) && (temp_v6 != 0)) {
        if (((temp_v6 < 0x20) ||
            (FUN_002c5df8(param_2,temp_v4,0x20), *(unsigned int *)(param_2 + 4) != temp_v6)) ||
           (temp_v1 = *(int *)(param_2 + 0x14), temp_v6 < temp_v1 * 0x70 + 0x20U)) {
          FUN_002c3820(&DAT_004e62a8);
          return 0xc8e1086a;
        }
        temp_v0 = temp_v4 + 0x20;
        if (temp_v1 != 0) {
          temp_v4 = 0x6060;
        }
        temp_v3 = 0;
        if (temp_v1 != 0) {
          do {
            FUN_002c5df8(temp_v8,temp_v0,0x70);
            if ((temp_v8[0] != temp_v4) || (temp_v9 != param_1[1])) {
              FUN_002c3820(&DAT_004e62a8);
              return 0xc8e1086a;
            }
            *(int *)(temp_v10 + temp_v3 * 4) = temp_v0;
            temp_v3 = temp_v3 + 1;
            temp_v0 = temp_v0 + 0x70;
          } while (temp_v3 < *(unsigned int *)(param_2 + 0x14));
        }
        if (temp_v5 != 0) {
          temp_v2 = 0;
          FUN_002c3820(&DAT_004e62a8);
          return temp_v2;
        }
      }
      else {
        *(unsigned int *)(param_2 + 0x14) = 0;
        if (param_5 != 0) {
          FUN_002c38a4(&DAT_004e62b4);
          if (DAT_004656d4 != '\0') {
            FUN_002399ec(param_1[0x156]);
            DAT_004656d4 = '\0';
          }
        }
        else {
          FUN_002c38a4(&DAT_004e62b4);
          if (DAT_004656d3 != '\0') {
            FUN_002399ec(param_1[0xea]);
            DAT_004656d3 = '\0';
          }
        }
        FUN_002c3820(&DAT_004e62b4);
      }
    }
    temp_v2 = 0xc8810bef;
  }
  FUN_002c3820(&DAT_004e62a8);
  return temp_v2;
}
