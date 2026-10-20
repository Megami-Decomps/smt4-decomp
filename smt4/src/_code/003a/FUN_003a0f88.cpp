/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a0f88` (_code @ 0x3a0f88, 0x25c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00230aec(...);
int FUN_00230cc0(int, int, int, int, int);
int FUN_00231bcc(...);
int FUN_002be624(...);
int FUN_002bf4f0(...);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern unsigned char LAB_003a11ec; /* 0x3a11ec */
extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_00230aec. */
/* Supplied declaration required: FUN_00230cc0. */
/* Supplied declaration required: FUN_00231bcc. */
extern int FUN_00240d5c(int);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf4f0. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_003a0f88(int param_1)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12 [36];
  
  temp_v5 = *(int *)(param_1 + 0x37c);
  temp_v2 = *(int *)(param_1 + 0x860);
  temp_v10 = temp_v5 + 6;
  temp_v8 = 2;
  if (temp_v2 == 7 || temp_v2 == 8) {
    temp_v8 = 1;
  }
  temp_v2 = FUN_00240d5c(param_1 + temp_v2 * 0x74 + 0x880);
  temp_v2 = FUN_002bf4f0(param_1 + 0x394,temp_v2 + temp_v8 + 0x4f);
  temp_v0 = *(short *)(temp_v2 + 8);
  temp_v1 = *(short *)(temp_v2 + 10);
  temp_v2 = FUN_002bf4f0(param_1 + 0x394,200);
  temp_v8 = (int)*(short *)(temp_v2 + 8) + (int)temp_v0;
  temp_v2 = (int)temp_v1 + (int)*(short *)(temp_v2 + 10);
  if (*(int *)(param_1 + 0x860) != 8) {
    FUN_00230cc0(param_1 + 0x394,8,temp_v8,temp_v2,temp_v10);
  }
  else {
    FUN_00230cc0(param_1 + 0x394,9,temp_v8,temp_v2,temp_v10);
  }
  FUN_00231bcc(param_1 + 0x394,0xc2,temp_v8,temp_v2,temp_v10,1);
  FUN_00231bcc(param_1 + 0x394,0xc3,temp_v8,temp_v2,temp_v10,1);
  temp_v4 = g_titleScene;
  temp_v3 = packNibblesAndByte(6,1,0);
  piVar10 = (int *)(temp_v4 + 0x12ac);
  temp_v6 = *piVar10;
  temp_v7 = piVar10[temp_v6 + 2];
  *piVar10 = temp_v6 + 1;
  piVar10[temp_v6 + 3] = temp_v3;
  if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v7 != temp_v3) {
    (**(romwright_code **)(temp_v4 + 0x12c8))();
    *(unsigned char *)(temp_v4 + 0x12c4) = 0;
  }
  if (*(char *)(param_1 + 0x878) != '\0') {
    FUN_00231bcc(param_1 + 0x394,0xc4,temp_v8,temp_v2,temp_v5 + 7,1);
  }
  if (*(char *)(param_1 + 0x879) != '\0') {
    FUN_00231bcc(param_1 + 0x394,0xc5,temp_v8,temp_v2,temp_v5 + 7,1);
  }
  temp_v5 = g_titleScene;
  piVar10 = (int *)(g_titleScene + 0x12ac);
  temp_v4 = *piVar10;
  temp_v3 = piVar10[temp_v4 + 2];
  *piVar10 = temp_v4 - 1;
  if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v3 != piVar10[temp_v4 + 1]) {
    (**(romwright_code **)(temp_v5 + 0x12c8))(piVar10[temp_v4 + 1]);
    *(unsigned char *)(temp_v5 + 0x12c4) = 0;
  }
  temp_v11 = *(unsigned int *)(param_1 + 0x868);
  temp_v5 = FUN_002bf4f0(param_1 + 0x394,199);
  temp_v9 = 0xffffffff;
  temp_v0 = *(short *)(temp_v5 + 8);
  temp_v1 = *(short *)(temp_v5 + 10);
  if (*(int *)(param_1 + 0x868) == *(int *)(param_1 + 0x86c)) {
    temp_v9 = 0xf49800ff;
  }
  FUN_002be624(temp_v12,&LAB_003a11ec,temp_v11);
  FUN_00230aec(param_1 + 0x394,0,temp_v8 + temp_v0,temp_v2 + temp_v1,0,7,temp_v9,temp_v10,temp_v12);
  return;
}

} /* extern "C" */
