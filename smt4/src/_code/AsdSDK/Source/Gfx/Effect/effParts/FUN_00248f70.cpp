/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00248f70` (_code @ 0x248f70, 0x230 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a353c(unsigned int *, unsigned int);
int FUN_002a36fc(unsigned int *);
int FUN_002a3958(unsigned int *, int *);
int FUN_002a3ab0(unsigned int *, int *);
int FUN_002a3d58(...);
int FUN_002c32a0(int, int, int, int, int, int);
int FUN_002c4938(...);
int rt_memcpy_w(int, int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

/* Supplied declaration required: FUN_002a353c. */
/* Supplied declaration required: FUN_002a36fc. */
/* Supplied declaration required: FUN_002a3958. */
/* Supplied declaration required: FUN_002a3ab0. */
/* Supplied declaration required: FUN_002a3d58. */
/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int * FUN_00248f70(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  puVar2 = (unsigned int *)0x10000;
  FUN_002c32a0(0x10000,0x100,0,0x90,0x10,1);
  FUN_002c4938();
  puVar2[0x20] = 0;
  puVar2[0x21] = 0;
  FUN_002a3d58(puVar2);
  temp_v2 = param_1[1];
  temp_v3 = param_1[2];
  temp_v4 = param_1[3];
  *puVar2 = *param_1;
  puVar2[1] = temp_v2;
  puVar2[2] = temp_v3;
  puVar2[3] = temp_v4;
  temp_v2 = param_1[5];
  temp_v3 = param_1[6];
  temp_v4 = param_1[7];
  puVar2[4] = param_1[4];
  puVar2[5] = temp_v2;
  puVar2[6] = temp_v3;
  puVar2[7] = temp_v4;
  puVar2[0x1d] = param_1[0x1d];
  puVar2[0x1a] = param_1[0x1a];
  for (temp_v5 = param_1[0x23]; temp_v5 != 0; temp_v5 = *(int *)(temp_v5 + 0xac)) {
    temp_v1 = 0x10000;
    FUN_002c32a0(0x10000,0x100,0,0xc0,0x10,1);
    FUN_002c4938();
    FUN_002c4938(temp_v1,0x90);
    *(unsigned int *)(temp_v1 + 0x84) = 1;
    *(unsigned char *)(temp_v1 + 0x88) = 8;
    *(unsigned char *)(temp_v1 + 0x89) = 0;
    *(unsigned char *)(temp_v1 + 0x8a) = 0;
    FUN_002a3d58(temp_v1);
    temp_v6 = *(int *)(temp_v5 + 0x90);
    temp_v0 = *(unsigned short *)(temp_v6 + 4);
    puVar4 = (unsigned int *)0x10000;
    FUN_002c32a0(0x10000,0x100,0,0x2c,0x10,1);
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    *puVar4 = 0xdc;
    puVar4[10] = 0;
    *(unsigned short *)(puVar4 + 1) = temp_v0;
    *(unsigned short *)(puVar4 + 3) = *(unsigned short *)(temp_v6 + 0xc);
    *(unsigned short *)(puVar4 + 7) = *(unsigned short *)(temp_v6 + 0x1c);
    temp_v2 = (**(romwright_code **)((unsigned int)temp_v0 * 0x44 + 0x464124))(*(unsigned int *)(temp_v6 + 8));
    puVar4[2] = temp_v2;
    *(unsigned int **)(temp_v1 + 0x90) = puVar4;
    rt_memcpy_w(temp_v1,temp_v5,0x90);
    *(unsigned int *)(temp_v1 + 0xac) = 0;
    if (puVar2[0x22] != 0) {
      *(int *)(puVar2[0x22] + 0xac) = temp_v1;
      *(unsigned int *)(temp_v1 + 0xb0) = puVar2[0x22];
    }
    else {
      puVar2[0x23] = temp_v1;
      *(unsigned int *)(temp_v1 + 0xb0) = 0;
    }
    puVar2[0x22] = temp_v1;
    puVar2[0x20] = puVar2[0x20] + 1;
  }
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0x3f800000;
  FUN_002a3ab0(puVar2,&temp_v7);
  FUN_002a3958(puVar2,&temp_v7);
  FUN_002a36fc(puVar2);
  FUN_002a353c(puVar2,0xffffffff);
  return puVar2;
}

} /* extern "C" */
