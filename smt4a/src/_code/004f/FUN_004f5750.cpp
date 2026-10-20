/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f5750` (_code @ 0x4f5750, 0x254 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00260030(int);
int FUN_0031ba34(int, int, int, int);
int FUN_00320b44(unsigned int [9], int, unsigned int);
int FUN_0047ed10(unsigned int, int, int);
int FUN_004fad68(int, int, unsigned int, int);

/* stack frame of param_9: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp58; /* 0x58: local_58 */
} param_9_stack;

/* Supplied declaration required: FUN_00260030. */
extern int FUN_0031b934(int);
/* Supplied declaration required: FUN_0031ba34. */
/* Supplied declaration required: FUN_00320b44. */
/* Supplied declaration required: FUN_0047ed10. */
/* Supplied declaration required: FUN_004fad68. */


void FUN_004f5750(int param_1,int param_2,unsigned int param_3,int param_4,unsigned int param_5,
                 int param_6,unsigned int param_7,int param_8,int param_9)

{
/* irregular: 2 goto(s); 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2 [9];
  int iStack_34;
  int iStack_30;
  unsigned int temp_v3;
  int iStack_28;
  
  if (param_2 != 0xff) {
    temp_v2[0] = 0;
    iStack_34 = param_1;
    iStack_30 = param_2;
    temp_v3 = param_3;
    iStack_28 = param_4;
    if ((param_6 != 6) && (-1 < param_4)) {
      FUN_00320b44(temp_v2,param_4,param_5);
    }
    FUN_004fad68(param_1,param_6,temp_v3,param_4);
    temp_v0 = 0;
    do {
      temp_v1 = param_1 + temp_v0 * 4;
      if (*(int *)(temp_v1 + 200) == 0) {
        temp_v0 = param_1 + temp_v0 * 4 + 200;
        goto LAB_004f5804;
      }
      if (*(int *)(temp_v1 + 0xcc) == 0) {
        temp_v0 = param_1 + temp_v0 * 4 + 0xcc;
        goto LAB_004f5804;
      }
      temp_v0 = temp_v0 + 2;
    } while (temp_v0 < 0x32);
    temp_v0 = 0;
LAB_004f5804:
    if (param_8 != 0) {
      FUN_0047ed10(param_7,0,param_6);
    }
    if (((param_6 == 2 || param_6 == 5) || (param_6 == 7 || param_6 == 8)) ||
       ((param_6 == 9 || param_6 == 0xc) || param_6 == 0xf)) {
      FUN_0031ba34(param_2,temp_v0,1,3);
      temp_v0 = 0;
      do {
        temp_v1 = *(int *)(param_1 + temp_v0 * 4);
        if (temp_v1 == param_2) {
          return;
        }
        if (temp_v1 == 0) {
          *(int *)(param_1 + temp_v0 * 4) = param_2;
          return;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x32);
    }
    else {
      if (((*(unsigned int *)(param_1 + 0x339c) & 4) == 0) && (temp_v1 = FUN_0031b934(param_2), temp_v1 != 0)) {
        FUN_00260030(param_2);
        *(unsigned int *)(param_1 + 0x339c) = *(unsigned int *)(param_1 + 0x339c) | 4;
      }
      FUN_0031ba34(param_2,temp_v0,0,param_9 != 0);
      temp_v0 = 0;
      do {
        temp_v1 = *(int *)(param_1 + temp_v0 * 4);
        if (temp_v1 == param_2) {
          return;
        }
        if (temp_v1 == 0) {
          *(int *)(param_1 + temp_v0 * 4) = param_2;
          return;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x32);
    }
  }
  return;
}

} /* extern "C" */
