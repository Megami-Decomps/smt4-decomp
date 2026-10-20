/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026beb4` (_code @ 0x26beb4, 0x354 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(...);
int FUN_002505c0(unsigned int, unsigned int, int, int, int, int, int);
int VectorSignedToFloat(...);

/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_5_stack;

extern int g_btlActionReflect; /* 0x434290 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0022699c. */
/* Supplied declaration required: FUN_002505c0. */
extern int FUN_00293230(int);
extern int btlGetMainState(void);


unsigned int
FUN_0026beb4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  
  temp_v5 = 0;
  temp_v4 = 0;
  temp_v1 = btlGetMainState();
  temp_v2 = (unsigned int)((*(unsigned int *)(temp_v1 + 0x44a0) & 0x400) != 0);
  temp_v1 = btlGetMainState();
  temp_v6 = (int)*(short *)(temp_v1 + 0x4968);
  temp_v7 = (int)*(short *)(temp_v1 + 0x496a);
  temp_v0 = temp_v7 <= temp_v6;
  switch(param_3) {
  case 0:
  case 4:
  case 9:
  case 0xc:
  case 0xd:
    if (!temp_v0) {
      temp_v4 = -1;
    }
    else {
      temp_v5 = -1;
      temp_v4 = -1;
    }
    break;
  case 1:
  case 0xb:
    goto joined_r0x0026bfb8;
  case 2:
  case 3:
    temp_v0 = temp_v6 != 0;
joined_r0x0026bfb8:
    if (temp_v0) {
      temp_v5 = -1;
      break;
    }
    temp_v4 = -1;
    break;
  case 5:
  case 6:
    if (!temp_v0) {
      temp_v7 = temp_v7 - temp_v2;
      temp_v3 = temp_v7 - 2;
      if (temp_v3 < temp_v6) {
        temp_v7 = temp_v7 - temp_v6;
      }
      temp_v4 = -2 - temp_v2;
      if (temp_v3 < temp_v6) {
        temp_v5 = temp_v7 - 2;
      }
    }
    else {
      temp_v4 = -2 - temp_v2;
      temp_v5 = temp_v4;
    }
    temp_v7 = FUN_00293230(temp_v1);
    if (temp_v7 != 0) break;
    temp_v2 = *(unsigned int *)(temp_v1 + 0x44a0);
    if ((temp_v2 & 0x1000) == 0) {
      FUN_002505c0(param_1,param_2,0x1000175,0,0,0,0);
    }
    break;
  case 7:
  case 8:
  case 0xe:
  case 0xf:
    temp_v4 = -10;
    temp_v5 = -10;
    temp_v7 = FUN_00293230(temp_v1);
    if (temp_v7 != 0) break;
    temp_v2 = *(unsigned int *)(temp_v1 + 0x44a0);
    temp_v5 = temp_v4;
    goto joined_r0x0026c0e8;
  case 0x10:
    temp_v4 = 1;
    break;
  case 0x11:
    temp_v4 = 2;
    break;
  case 0x12:
    temp_v4 = 3;
    break;
  case 0x13:
    temp_v4 = 4;
    break;
  case 0x14:
    if (!temp_v0) {
      temp_v4 = -1;
    }
    else {
      temp_v5 = -1;
      temp_v4 = -1;
    }
    break;
  case 0x15:
    if (temp_v0) {
      temp_v5 = -2;
    }
    else if (temp_v7 - 2 < temp_v6) {
      temp_v5 = (temp_v7 - temp_v6) - 2;
    }
    temp_v4 = -2;
    temp_v7 = FUN_00293230(temp_v1);
    if (temp_v7 != 0) break;
    temp_v2 = *(unsigned int *)(temp_v1 + 0x44a0);
joined_r0x0026c0e8:
    if ((temp_v2 & 0x1000) != 0) break;
    FUN_002505c0(param_1,param_2,0x1000175,0,0,0,0);
    break;
  case 0x16:
    if (temp_v0) {
      temp_v5 = -3;
    }
    else if (temp_v7 - 3 < temp_v6) {
      temp_v5 = (temp_v7 - temp_v6) - 3;
    }
    temp_v4 = -3;
    temp_v7 = FUN_00293230(temp_v1);
    if (temp_v7 != 0) break;
    temp_v2 = *(unsigned int *)(temp_v1 + 0x44a0);
    if ((temp_v2 & 0x1000) == 0) {
      FUN_002505c0(param_1,param_2,0x1000175,0,0,0,0);
    }
    break;
  case 0x17:
    if (temp_v0) {
      temp_v5 = -4;
    }
    else if (temp_v7 - 4 < temp_v6) {
      temp_v5 = (temp_v7 - temp_v6) - 4;
    }
    temp_v4 = -4;
    temp_v7 = FUN_00293230(temp_v1);
    if (temp_v7 != 0) break;
    temp_v2 = *(unsigned int *)(temp_v1 + 0x44a0);
    if ((temp_v2 & 0x1000) == 0) {
      FUN_002505c0(param_1,param_2,0x1000175,0,0,0,0);
    }
  }
  if (*(short *)(temp_v1 + 0x4968) + temp_v5 >= 10) {
    temp_v5 = 9 - *(short *)(temp_v1 + 0x4968);
  }
  if (*(short *)(temp_v1 + 0x496a) + temp_v4 >= 10) {
    temp_v4 = 9 - *(short *)(temp_v1 + 0x496a);
  }
  temp_v8 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = g_btlActionReflect;
  FUN_0022699c(g_btlActionReflect,(int)(short)param_1,0,param_2);
  *(unsigned char *)(temp_v4 + 4) = 0x1e;
  *(short *)(temp_v4 + 0x24) = (short)(int)temp_v8;
  *(short *)(temp_v4 + 0x26) = (short)(int)temp_v9;
  *(unsigned int *)(temp_v4 + 0x28) = param_5;
  return 1;
}

} /* extern "C" */
