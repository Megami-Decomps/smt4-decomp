/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b7694` (_code @ 0x4b7694, 0x2c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern short DAT_005f1794; /* 0x5f1794 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0033a988. */
/* Supplied declaration required: FUN_00407360. */
/* Supplied declaration required: FUN_00407424. */
/* Supplied declaration required: FUN_0040792c. */
/* Supplied declaration required: FUN_00407eb0. */
/* Supplied declaration required: FUN_004b8ba0. */
/* Supplied declaration required: FUN_004b9ff4. */
extern int FUN_004ba660(int);
extern int FUN_004ba790(int);
extern int FUN_004babd8(int);
extern unsigned short FUN_004cfe4c(int);
/* Supplied declaration required: FUN_004d0434. */
/* Supplied declaration required: FUN_004d044c. */
extern int FUN_004d0524(void);
extern int FUN_004d0554(void);


void FUN_004b7694(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  
  temp_v2 = FUN_004ba790(param_1 + 0x9c);
  temp_v3 = FUN_004babd8(param_1 + 0x9c);
  if ((*(char *)(param_1 + 0x1214) != '\0') &&
     (*(short *)(param_1 + 0x3c) == 4 || *(short *)(param_1 + 0x3c) == 3)) {
    if ((!(*(short *)(temp_v2 + 0x28) == 0 || *(short *)(temp_v2 + 0x28) == 6)) ||
       (*(char *)(*(int *)(param_1 + 0x1218) + 0x14) != '\0')) {
      FUN_00407424(*(unsigned int *)(param_1 + 0x1218),0);
      temp_v4 = *(unsigned int *)(param_1 + 0x1218);
      temp_v7 = 1;
    }
    else {
      FUN_00407424(*(unsigned int *)(param_1 + 0x1218),1);
      temp_v4 = *(unsigned int *)(param_1 + 0x1218);
      temp_v7 = 0;
    }
    FUN_00407360(temp_v4,temp_v7);
  }
  temp_v5 = FUN_004ba790(param_1 + 0x9c);
  if ((temp_v5 != temp_v2) || ((*(unsigned int *)(param_1 + 0x20) & 0x40000000) != 0)) {
    temp_v5 = FUN_004ba790(param_1 + 0x9c);
    temp_v0 = *(short *)(temp_v5 + 0x22);
    temp_v5 = FUN_004ba790(param_1 + 0x9c);
    temp_v5 = (int)*(short *)(temp_v5 + 0x24);
    temp_v9 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0x1000;
    temp_v10 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = 10;
    *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(param_1 + 0x58);
    *(unsigned int *)(param_1 + 100) = *(unsigned int *)(param_1 + 0x5c);
    *(float *)(param_1 + 0x68) = temp_v9 - 200.0f;
    *(float *)(param_1 + 0x6c) = temp_v10 - 120.0f;
    FUN_004b9ff4(param_1,param_1 + 0x60);
    FUN_004b9ff4(param_1,param_1 + 0x68);
    *(unsigned int *)(param_1 + 0x78) = *(unsigned int *)(param_1 + 0x70);
    temp_v11 = VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)(param_1 + 0x74);
    *(unsigned int *)(param_1 + 0x80) = temp_v7;
    *(unsigned int *)(param_1 + 0x84) = temp_v11;
    *(unsigned int *)(param_1 + 0x8c) = temp_v4;
    *(unsigned int *)(param_1 + 0x88) = 0;
    temp_v1 = FUN_004cfe4c(param_1 + 0x9c);
    *(unsigned short *)(param_1 + 0x4c) = temp_v1;
    if (*(char *)(param_1 + 0x1214) != '\0') {
      temp_v5 = FUN_004ba660(param_1 + 0x9c);
      temp_v8 = (int)*(short *)(temp_v5 + 0x28);
      if (((*(short *)(param_1 + 0x3c) != 4 && *(short *)(param_1 + 0x3c) != 3) ||
          (temp_v8 != 0 && temp_v8 != 6)) ||
         (*(short *)(temp_v2 + 0x28) != 0 && *(short *)(temp_v2 + 0x28) != 6)) {
        FUN_00407eb0(*(unsigned int *)(param_1 + 0x1218),temp_v8,0);
      }
      if (-1 < *(char *)(temp_v5 + 0x2b)) {
        FUN_0040792c();
      }
    }
  }
  temp_v6 = *(unsigned int *)(param_1 + 0x20);
  if (temp_v3 != 0) {
    if ((temp_v6 & 0x40000000) == 0) {
      FUN_004d044c();
    }
  }
  else if ((temp_v6 & 0x40000000) == 0) {
    if (DAT_005f1794 != 0) {
      *(unsigned int *)(param_1 + 0x28) = 8;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    if (((temp_v6 & 0x80) != 0) ||
       ((temp_v2 = FUN_0018719c(0x404), temp_v2 != 0 && (temp_v2 = FUN_004d0524(), temp_v2 != 0)))) {
      *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffff7f;
      FUN_0033a988();
      *(unsigned int *)(param_1 + 0x28) = 7;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    temp_v2 = FUN_004d0554();
    if (temp_v2 == 0) {
      return;
    }
    if (*(short *)(*(int *)(param_1 + 0x1118) + 0x86) != 0) {
      return;
    }
    FUN_004b8ba0(param_1);
    FUN_004d0434();
    return;
  }
  *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xbfffffff) | 0x2000;
  *(unsigned char *)(param_1 + 0xa8a) = 1;
  return;
}
