/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_InitializeVariables` (_code @ 0x13acbc, 0x2c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013a1f4(int, unsigned short [2], int);
int FUN_00146814(int);
int FUN_00146840(...);
int FUN_00146894(int, int *);
int FUN_002c40f8(unsigned char *, int *, int, int, unsigned int, unsigned int);
int FUN_002c526c(...);
int coproc_moveto_Data_Synchronization(int);
int rt_memcpy(int, int *, int);
int software_interrupt(int);

/* stack frame of param_2: 19 slot(s), 72 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned short spA0; /* 0xa0: local_a0 */
    unsigned short spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spD0; /* 0xd0: local_d0 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0013a1f4. */
/* Supplied declaration required: FUN_00146814. */
/* Supplied declaration required: FUN_00146840. */
/* Supplied declaration required: FUN_00146894. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: rt_memcpy. */


void nn_snd_CTR_Dspsnd_InitializeVariables(int *param_1,unsigned char param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned short temp_v9 [4];
  unsigned short temp_v10 [2];
  int *temp_v11 [4];
  int *piStack_8c;
  int *temp_v12;
  int *piStack_84;
  int *temp_v13;
  int *piStack_7c;
  int *piStack_78;
  int *temp_v14;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  unsigned short temp_v15 [16];
  int temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned char temp_v19 [4];
  unsigned char temp_v20 [8];
  
  if ((char)param_1[0x4c6] == '\0') {
    if (!param_2) {
      temp_v10[0] = 0;
    }
    else {
      temp_v10[0] = 2;
      rt_memcpy(param_1[0x42a],param_1 + 6,0x1080);
      coproc_moveto_Data_Synchronization(0);
    }
    FUN_0013a1f4(2,temp_v10,4);
    FUN_00146814(0x4000);
    nn_os_CriticalSection_Enter((unsigned int)(param_1 + 2));
    temp_v18 = *param_1;
    puVar2 = temp_v20;
    FUN_002c40f8(puVar2,&temp_v18,1,0,0xffffffff,0xffffffff);
    if ((int)puVar2 < 0) {
      FUN_002c526c(puVar2);
    }
    software_interrupt(0x19);
    if (*param_1 < 0) {
      FUN_002c526c();
    }
    *(char *)((int)param_1 + 0x1319) = *(char *)((int)param_1 + 0x1319) + '\x01';
    nn_os_CriticalSection_Leave((unsigned int)(param_1 + 2));
    FUN_00146840(2,temp_v9,2,temp_v19);
    FUN_00146840(2,temp_v15,(temp_v9[0] & 0x7fff) << 1,temp_v19);
    temp_v11[0] = param_1 + 0x426;
    temp_v11[1] = &temp_v16;
    temp_v11[2] = &temp_v5;
    temp_v11[3] = &temp_v7;
    piStack_8c = param_1 + 0x428;
    temp_v13 = &temp_v3;
    piStack_7c = param_1 + 0x4c2;
    piStack_78 = param_1 + 0x4c4;
    temp_v12 = param_1 + 0x42a;
    piStack_84 = param_1 + 0x4c0;
    temp_v14 = param_1 + 0x561;
    piStack_70 = param_1 + 0x563;
    piStack_6c = param_1 + 0x565;
    piStack_68 = param_1 + 0x567;
    piStack_64 = param_1 + 0x569;
    temp_v2 = 0;
    if (temp_v9[0] != 0) {
      do {
        FUN_00146894(temp_v15[temp_v2],temp_v11[temp_v2]);
        FUN_00146894(temp_v15[temp_v2] | 0x10000,temp_v11[temp_v2] + 1);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)(unsigned int)temp_v9[0]);
    }
    param_1[0x4bc] = temp_v3;
    param_1[0x4bd] = temp_v3 + 0xa00;
    param_1[0x4be] = temp_v4;
    param_1[0x4bf] = temp_v4 + 0xa00;
    temp_v2 = 0;
    do {
      param_1[temp_v2 + 0x42c] = temp_v16 + temp_v2 * 0xc0;
      param_1[temp_v2 + 0x45c] = temp_v5 + temp_v2 * 0xc;
      param_1[temp_v2 + 0x48c] = temp_v7 + temp_v2 * 0x20;
      param_1[temp_v2 + 0x444] = temp_v17 + temp_v2 * 0xc0;
      param_1[temp_v2 + 0x474] = temp_v6 + temp_v2 * 0xc;
      temp_v1 = temp_v2 + 1;
      param_1[temp_v2 + 0x4a4] = temp_v8 + temp_v2 * 0x20;
      temp_v2 = temp_v1;
    } while (temp_v1 < 0x18);
    FUN_00146814(0x4000);
    *(unsigned char *)((int)param_1 + 0x1319) = 0;
    *(unsigned short *)((int)param_1 + 0x131a) = 4;
    *(unsigned short *)param_1[0x426] = 4;
    *(short *)((int)param_1 + 0x131a) = *(short *)((int)param_1 + 0x131a) + 1;
    software_interrupt(0x18);
    if (param_1[1] < 0) {
      FUN_002c526c();
    }
    temp_v0 = *(unsigned short *)((int)param_1 + 0x131a) & 1;
    *(unsigned short *)((int)param_1 + 0x131e) = temp_v0;
    *(unsigned short *)(param_1 + 0x4c7) = temp_v0;
    *(unsigned char *)(param_1 + 0x4c6) = 1;
  }
  return;
}

} /* extern "C" */
