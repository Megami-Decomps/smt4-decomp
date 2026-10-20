/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018a520` (_code @ 0x18a520, 0x2a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001897bc(int, unsigned short [4], int);
int FUN_001a0f34(int);
int FUN_001a0f60(...);
int FUN_001a0fb4(int, int *);
int FUN_002e3140(void);
int coproc_moveto_Data_Synchronization(int);
int rt_memcpy(int, int *, int);
int software_interrupt(int);

/* stack frame of param_2: 17 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned short sp68; /* 0x68: local_68 */
    unsigned short sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001897bc. */
/* Supplied declaration required: FUN_001a0f34. */
/* Supplied declaration required: FUN_001a0f60. */
/* Supplied declaration required: FUN_001a0fb4. */
/* Supplied declaration required: FUN_002e3140. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: rt_memcpy. */


void FUN_0018a520(int *param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int *temp_v3 [4];
  int *piStack_b0;
  int *temp_v4;
  int *piStack_a8;
  int *temp_v5;
  int *piStack_a0;
  int *piStack_9c;
  int *temp_v6;
  int *piStack_94;
  int *piStack_90;
  int *piStack_8c;
  int *piStack_88;
  int temp_v7;
  int temp_v8;
  unsigned short temp_v9 [2];
  unsigned short temp_v10 [4];
  unsigned short temp_v11 [16];
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  unsigned char temp_v18 [4];
  
  if ((char)param_1[0x4c6] == '\0') {
    if (param_2 == 0) {
      temp_v10[0] = 0;
    }
    else {
      temp_v10[0] = 2;
      rt_memcpy(param_1[0x42a],param_1 + 6,0x1080);
      coproc_moveto_Data_Synchronization(0);
    }
    FUN_001897bc(2,temp_v10,4);
    FUN_001a0f34(0x4000);
    nn_os_CriticalSection_Enter((unsigned int)(param_1 + 2));
    software_interrupt(0x24);
    if (*param_1 < 0) {
      FUN_002e3140();
    }
    software_interrupt(0x19);
    if (*param_1 < 0) {
      FUN_002e3140();
    }
    *(char *)((int)param_1 + 0x1319) = *(char *)((int)param_1 + 0x1319) + '\x01';
    nn_os_CriticalSection_Leave((unsigned int)(param_1 + 2));
    FUN_001a0f60(2,temp_v9,2,temp_v18);
    FUN_001a0f60(2,temp_v11,(temp_v9[0] & 0x7fff) << 1,temp_v18);
    temp_v3[0] = param_1 + 0x426;
    temp_v3[1] = &temp_v16;
    temp_v3[2] = &temp_v12;
    temp_v3[3] = &temp_v14;
    piStack_b0 = param_1 + 0x428;
    temp_v5 = &temp_v7;
    piStack_a0 = param_1 + 0x4c2;
    piStack_9c = param_1 + 0x4c4;
    temp_v4 = param_1 + 0x42a;
    piStack_a8 = param_1 + 0x4c0;
    temp_v6 = param_1 + 0x561;
    piStack_94 = param_1 + 0x563;
    piStack_90 = param_1 + 0x565;
    piStack_8c = param_1 + 0x567;
    piStack_88 = param_1 + 0x569;
    temp_v2 = 0;
    if (temp_v9[0] != 0) {
      do {
        FUN_001a0fb4(temp_v11[temp_v2],temp_v3[temp_v2]);
        FUN_001a0fb4(temp_v11[temp_v2] | 0x10000,temp_v3[temp_v2] + 1);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)(unsigned int)temp_v9[0]);
    }
    param_1[0x4bc] = temp_v7;
    param_1[0x4bd] = temp_v7 + 0xa00;
    param_1[0x4be] = temp_v8;
    param_1[0x4bf] = temp_v8 + 0xa00;
    temp_v2 = 0;
    do {
      param_1[temp_v2 + 0x42c] = temp_v16 + temp_v2 * 0xc0;
      param_1[temp_v2 + 0x45c] = temp_v12 + temp_v2 * 0xc;
      param_1[temp_v2 + 0x48c] = temp_v14 + temp_v2 * 0x20;
      param_1[temp_v2 + 0x444] = temp_v17 + temp_v2 * 0xc0;
      param_1[temp_v2 + 0x474] = temp_v13 + temp_v2 * 0xc;
      temp_v1 = temp_v2 + 1;
      param_1[temp_v2 + 0x4a4] = temp_v15 + temp_v2 * 0x20;
      temp_v2 = temp_v1;
    } while (temp_v1 < 0x18);
    FUN_001a0f34(0x4000);
    *(unsigned char *)((int)param_1 + 0x1319) = 0;
    *(unsigned short *)((int)param_1 + 0x131a) = 4;
    *(unsigned short *)param_1[0x426] = 4;
    *(short *)((int)param_1 + 0x131a) = *(short *)((int)param_1 + 0x131a) + 1;
    software_interrupt(0x18);
    if (param_1[1] < 0) {
      FUN_002e3140();
    }
    temp_v0 = *(unsigned short *)((int)param_1 + 0x131a) & 1;
    *(unsigned short *)((int)param_1 + 0x131e) = temp_v0;
    *(unsigned short *)(param_1 + 0x4c7) = temp_v0;
    *(unsigned char *)(param_1 + 0x4c6) = 1;
  }
  return;
}

} /* extern "C" */
