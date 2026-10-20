/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00344cd0` (_code @ 0x344cd0, 0x3c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001835b4(...);
int FUN_002a4844(unsigned int);
int FUN_002a4860(...);
int FUN_002c2c4c(...);
int FUN_002c2c68(...);
int FUN_00348eb4(...);
int FUN_00348ed0(...);
int FUN_0035ae58(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_16: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_16_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_002a4844. */
/* Supplied declaration required: FUN_002a4860. */
/* Supplied declaration required: FUN_002c2c4c. */
/* Supplied declaration required: FUN_002c2c68. */
/* Supplied declaration required: FUN_00348eb4. */
/* Supplied declaration required: FUN_00348ed0. */
/* Supplied declaration required: FUN_0035ae58. */


void FUN_00344cd0(unsigned int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 unsigned int param_6,unsigned int param_7,int param_8,int param_9,
                 unsigned int param_10,unsigned int param_11,unsigned int param_12,int param_13,
                 unsigned int param_14,int param_15,int param_16)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar12;
  unsigned int in_fpscr;
  float temp_v10;
  float temp_v11;
  
  temp_v0 = param_15;
  temp_v1 = param_12;
  temp_v6 = param_10;
  temp_v8 = 0;
  if (-1 < param_13) {
    temp_v8 = FUN_00284140((int)(short)param_13);
  }
  temp_v2 = FUN_00284140((int)(short)param_14);
  temp_v3 = FUN_00284140((int)(short)temp_v1);
  FUN_001835b4(2,param_4,param_5,param_2,param_3,temp_v0);
  puVar1 = (unsigned int *)&param_8;
  if (temp_v8 != 0) {
    puVar1 = (unsigned int *)&param_9;
  }
  if (temp_v2 != 0) {
    temp_v6 = param_11;
  }
  FUN_001835b4(2,param_4,*puVar1,param_2,param_3,temp_v0);
  FUN_001835b4(2,param_4,temp_v6,param_2,param_3,temp_v0);
  temp_v2 = 0;
  temp_v8 = FUN_001834a4(param_4,param_6);
  if (param_16 != 0) {
    temp_v4 = FUN_002c2c4c();
    temp_v5 = FUN_00348eb4(param_1);
    if (temp_v5 >= temp_v4) {
      temp_v9 = (int)**(short **)(temp_v8 + 0xc);
    }
    else {
      temp_v6 = FUN_002c2c4c(param_1);
      temp_v11 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (float)VectorSignedToFloat((int)**(short **)(temp_v8 + 0xc),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = temp_v10 / temp_v11;
      temp_v6 = FUN_00348eb4(param_1);
      temp_v11 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (int)(temp_v11 * temp_v10);
      if (temp_v9 < 1) {
        temp_v9 = 1;
      }
      temp_v6 = FUN_002a4844(param_1);
      temp_v11 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = (int)(temp_v11 * temp_v10);
      temp_v4 = FUN_002a4844(param_1);
      temp_v5 = FUN_00348eb4(param_1);
      temp_v7 = FUN_002c2c4c(param_1);
      if ((temp_v4 + temp_v5 == temp_v7) && (temp_v2 + temp_v9 < (int)**(short **)(temp_v8 + 0xc))) {
        temp_v2 = **(short **)(temp_v8 + 0xc) - temp_v9;
      }
    }
    temp_v4 = g_renderCtx;
    piVar12 = (int *)(g_renderCtx + 0x1318);
    temp_v5 = piVar12[*piVar12 + 2];
    piVar12[*piVar12 + 2] = 3;
    if (*(char *)(temp_v4 + 0x1330) != '\0' || temp_v5 != 3) {
      (**(romwright_code **)(temp_v4 + 0x1334))();
      *(unsigned char *)(temp_v4 + 0x1330) = 0;
    }
    temp_v2 = (int)*(short *)(temp_v8 + 8) + param_2 + temp_v2;
    temp_v5 = *(short *)(temp_v8 + 10) + param_3;
    temp_v4 = (int)*(short *)(*(int *)(temp_v8 + 0xc) + 2);
  }
  else {
    temp_v4 = FUN_002c2c68(param_1);
    temp_v5 = FUN_00348ed0(param_1);
    if (temp_v5 >= temp_v4) {
      temp_v4 = (int)*(short *)(*(int *)(temp_v8 + 0xc) + 2);
    }
    else {
      temp_v6 = FUN_002c2c68(param_1);
      temp_v11 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v8 + 0xc) + 2),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = temp_v10 / temp_v11;
      temp_v6 = FUN_00348ed0(param_1);
      temp_v11 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = (int)(temp_v11 * temp_v10);
      if (temp_v4 < 1) {
        temp_v4 = 1;
      }
      temp_v6 = FUN_002a4860(param_1);
      temp_v11 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = (int)(temp_v11 * temp_v10);
      temp_v5 = FUN_002a4860(param_1);
      temp_v9 = FUN_00348ed0(param_1);
      temp_v7 = FUN_002c2c68(param_1);
      if ((temp_v5 + temp_v9 == temp_v7) &&
         (temp_v5 = (int)*(short *)(*(int *)(temp_v8 + 0xc) + 2), temp_v2 + temp_v4 < temp_v5)) {
        temp_v2 = temp_v5 - temp_v4;
      }
    }
    temp_v5 = g_renderCtx;
    piVar12 = (int *)(g_renderCtx + 0x1318);
    temp_v9 = piVar12[*piVar12 + 2];
    piVar12[*piVar12 + 2] = 3;
    if (*(char *)(temp_v5 + 0x1330) != '\0' || temp_v9 != 3) {
      (**(romwright_code **)(temp_v5 + 0x1334))();
      *(unsigned char *)(temp_v5 + 0x1330) = 0;
    }
    temp_v5 = param_3 + temp_v2 + (int)*(short *)(temp_v8 + 10);
    temp_v2 = *(short *)(temp_v8 + 8) + param_2;
    temp_v9 = (int)**(short **)(temp_v8 + 0xc);
  }
  FUN_0035ae58(temp_v2,temp_v5,temp_v9,temp_v4,1);
  if (temp_v3 != 0) {
    param_6 = param_7;
  }
  FUN_001835b4(2,param_4,param_6,param_2,param_3,temp_v0 + 5);
  temp_v0 = g_renderCtx;
  piVar12 = (int *)(g_renderCtx + 0x1318);
  temp_v8 = piVar12[*piVar12 + 2];
  piVar12[*piVar12 + 2] = 0;
  if (*(char *)(temp_v0 + 0x1330) != '\0' || temp_v8 != 0) {
    (**(romwright_code **)(temp_v0 + 0x1334))();
    *(unsigned char *)(temp_v0 + 0x1330) = 0;
  }
  return;
}

} /* extern "C" */
