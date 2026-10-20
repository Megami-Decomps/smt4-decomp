/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039a9d0` (_code @ 0x39a9d0, 0x4f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(int, unsigned char *, unsigned int);
int FUN_001656a0(...);
int memAlloc(int, int, int, unsigned int, int, int);
int asdMemFree(...);
int FUN_001b4ddc(...);
int FUN_00200bcc(unsigned int *);
int FUN_00202178(int);
int FUN_0020e9dc(unsigned int *);
int FUN_0020ea14(void);
int FUN_00222260(...);
int FUN_00243c24(void);
int FUN_00272204(unsigned int, unsigned int [2], int);
int taskRunWithObject(unsigned int, int, int);
int FUN_002b41e4(void);
int FUN_002e342c(int, unsigned int);
int FUN_00350a8c(void);
int FUN_00399768(...);
int FUN_003ba614(...);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(unsigned int, int);
int rt_memcpy(unsigned int, unsigned int, unsigned int);
int rt_memcpy_w(...);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern unsigned char LAB_0039ad7c; /* 0x39ad7c */
extern signed char DAT_0059dbe9; /* 0x59dbe9 */
extern int DAT_0059dbec; /* 0x59dbec */
extern int DAT_0059dbf0; /* 0x59dbf0 */
extern unsigned int DAT_0059dbf4; /* 0x59dbf4 */
extern unsigned int DAT_0059dbf8; /* 0x59dbf8 */
extern unsigned int DAT_0059dbfc; /* 0x59dbfc */
extern int DAT_0059dc00; /* 0x59dc00 */
extern int DAT_0059dc04; /* 0x59dc04 */
extern int DAT_0059dc14; /* 0x59dc14 */
extern int DAT_0059dc18; /* 0x59dc18 */
extern unsigned int DAT_0059dc2c; /* 0x59dc2c */
extern unsigned int DAT_0059dc30; /* 0x59dc30 */
extern unsigned int DAT_0059dc34; /* 0x59dc34 */
extern unsigned int DAT_0059dc38; /* 0x59dc38 */
extern unsigned int DAT_0059dc40; /* 0x59dc40 */
extern unsigned int DAT_0059dc44; /* 0x59dc44 */
extern unsigned int DAT_0059dc48; /* 0x59dc48 */
extern unsigned char DAT_0059e9a8; /* 0x59e9a8 */
extern int DAT_0059e9b4; /* 0x59e9b4 */
extern unsigned int DAT_0059ea18; /* 0x59ea18 */
extern unsigned int DAT_0059ea1c; /* 0x59ea1c */
extern unsigned int DAT_0059ea20; /* 0x59ea20 */
extern unsigned int DAT_0059ea24; /* 0x59ea24 */
extern int DAT_0059ea2c; /* 0x59ea2c */
extern unsigned int DAT_0059ea30; /* 0x59ea30 */
extern unsigned char DAT_00634d20; /* 0x634d20 */
extern unsigned int uRam00634d60; /* 0x634d60 */
extern unsigned int uRam00634d64; /* 0x634d64 */
extern unsigned int uRam00634d68; /* 0x634d68 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001656a0. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_001b4ddc. */
/* Supplied declaration required: FUN_00200bcc. */
/* Supplied declaration required: FUN_00202178. */
/* Supplied declaration required: FUN_0020e9dc. */
/* Supplied declaration required: FUN_0020ea14. */
/* Supplied declaration required: FUN_00222260. */
/* Supplied declaration required: FUN_00243c24. */
/* Supplied declaration required: FUN_00272204. */
/* Supplied declaration required: taskRunWithObject. */
extern unsigned int FUN_002b41c4(void);
/* Supplied declaration required: FUN_002b41e4. */
/* Supplied declaration required: FUN_002e342c. */
extern int FUN_00323c54(unsigned int, unsigned int);
extern unsigned int nodeChainCount(unsigned int);
/* Supplied declaration required: FUN_00350a8c. */
/* Supplied declaration required: FUN_00399768. */
/* Supplied declaration required: FUN_003ba614. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_0039a9d0(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 22 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  int temp_v6;
  unsigned int temp_v7 [2];
  unsigned int temp_v8;
  int iStack_2c;
  unsigned int uStack_28;
  
  temp_v0 = 0x10000;
  temp_v8 = param_1;
  iStack_2c = param_2;
  uStack_28 = param_3;
  memAlloc(0x10000,0x100,0,param_3 * 0x2c,0x10,1);
  temp_v4 = 0;
  temp_v3 = 0;
  temp_v6 = temp_v0 + param_3 * 0x18;
  if (param_3 != 0) {
    do {
      puVar2 = *(unsigned int **)(param_2 + temp_v3 * 0x1c);
      temp_v5 = temp_v6;
      if (puVar2 != (unsigned int *)0x0) {
        FUN_00100388(temp_v6,&LAB_0039ad7c,*puVar2);
        piVar3 = (int *)(temp_v0 + temp_v4 * 0x18);
        temp_v5 = temp_v6 + 0x14;
        *piVar3 = temp_v6;
        temp_v6 = VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned char *)(piVar3 + 1) = 0;
        piVar3[2] = 0;
        piVar3[4] = 0;
        piVar3[3] = 0;
        temp_v4 = temp_v4 + 1;
        piVar3[5] = temp_v6;
      }
      temp_v3 = temp_v3 + 1;
      temp_v6 = temp_v5;
    } while (temp_v3 < param_3);
  }
  DAT_0059ea1c = *(unsigned int *)(DAT_0059dc14 + 4);
  DAT_0059ea20 = *(unsigned int *)(DAT_0059dc14 + 8);
  if (temp_v4 <= DAT_0059ea24) {
    DAT_0059ea24 = temp_v4 - 1;
  }
  DAT_0059ea18 = temp_v8;
  temp_v3 = DAT_0059ea24;
  DAT_0059ea2c = temp_v0;
  DAT_0059ea30 = temp_v4;
  if (DAT_0059dbe9 == '\0') {
    FUN_00200bcc(&DAT_0059ea18);
  }
  FUN_0020e9dc(&DAT_0059ea18);
  temp_v6 = FUN_001656a0(0);
  if (temp_v6 == 0) {
    FUN_00202178(0);
    temp_v6 = FUN_001656a0();
    if (temp_v6 != 0) goto LAB_0039ab4c;
LAB_0039ad94:
    temp_v6 = FUN_001656a0(1);
    if (temp_v6 == 0) {
      FUN_00202178(1);
      temp_v6 = FUN_001656a0();
      if (temp_v6 == 0) {
        temp_v1 = 0x200001;
      }
      else {
        temp_v1 = 0;
      }
    }
    else {
      temp_v1 = 0;
    }
  }
  else {
LAB_0039ab4c:
    if (temp_v4 == 0) goto LAB_0039ad94;
    temp_v6 = VectorFloatToUnsigned(*(unsigned int *)(temp_v0 + DAT_0059ea24 * 0x18 + 0x14),3);
    piVar3 = (int *)(param_2 + temp_v6 * 0x1c);
    FUN_001b4ddc(&DAT_00634d20);
    temp_v6 = *piVar3;
    if (piVar3[2] != 0) {
      temp_v1 = FUN_00222260();
      temp_v2 = FUN_002b41c4();
      rt_memcpy(*(unsigned int *)(temp_v6 + 0xc),temp_v2,*(unsigned int *)(temp_v6 + 0x10));
    }
    else {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v6 + 4);
      FUN_0020ea14();
      if (*(int *)(temp_v6 + 0xc) != 0) {
        FUN_002b41e4();
      }
      if (*(int *)(temp_v6 + 0x1c) != 0) {
        taskRunWithObject(temp_v1,*(int *)(temp_v6 + 0x1c),*(unsigned short *)(temp_v6 + 0x18));
      }
      else {
        temp_v7[0] = 0;
        FUN_00272204(temp_v1,temp_v7,4);
      }
    }
    DAT_0059dc2c = 0;
    DAT_0059dc30 = 0;
    DAT_0059dc34 = 1;
    DAT_0059dc38 = 0;
    DAT_0059dc40 = 0;
    DAT_0059dc44 = 0;
    DAT_0059dc48 = 0;
    temp_v6 = FUN_00323c54(DAT_0059dbf4,temp_v1);
    DAT_0059dc04 = temp_v6;
    FUN_002e342c(temp_v6 + 0x9c,*(unsigned int *)*piVar3);
    *(int *)(temp_v6 + 0x40) = piVar3[3];
    *(int *)(temp_v6 + 0x44) = piVar3[4];
    *(int *)(temp_v6 + 0x48) = piVar3[5];
    *(unsigned char *)(temp_v6 + 0x88) = 8;
    *(unsigned char *)(temp_v6 + 0x89) = 0;
    *(unsigned char *)(temp_v6 + 0x8a) = 0;
    rt_memcpy_w(&DAT_00634d20,temp_v6,0x80);
    DAT_0059dbfc = *(unsigned int *)(temp_v6 + 0x90);
    if (*(int *)(*piVar3 + 0xc) != 0) {
      FUN_002b41e4();
    }
    temp_v2 = DAT_0059dbfc;
    FUN_00243c24();
    FUN_00350a8c();
    DAT_0059dc18 = piVar3[1];
    DAT_0059dbf8 = temp_v2;
    temp_v1 = nodeChainCount(DAT_0059dbf4);
    if (temp_v1 >= 0x16) {
      DAT_0059dbec = temp_v1 - 0x15;
      DAT_0059e9b4 = 0x14;
    }
    else {
      DAT_0059e9b4 = temp_v1 - 1;
      DAT_0059dbec = 0;
    }
    temp_v1 = 0x800000;
    *(unsigned char **)(piVar3[1] + 0x34) = &DAT_0059e9a8;
    DAT_0059dc2c = 0;
    DAT_0059dc30 = 0;
    DAT_0059dc34 = 1;
    DAT_0059dc38 = 0;
    DAT_0059dc40 = 0;
    DAT_0059dc44 = 0;
    DAT_0059dc48 = 0;
  }
  if ((temp_v1 & 1) != 0) {
    if (temp_v4 != 0) {
      temp_v6 = VectorFloatToUnsigned(*(unsigned int *)(temp_v0 + DAT_0059ea24 * 0x18 + 0x14),3);
      if (DAT_0059dc00 != 0) {
        if (DAT_0059ea24 == temp_v3) {
          asdMemFree(temp_v0);
          return temp_v1;
        }
        FUN_00399768(DAT_0059dc00,3);
        DAT_0059dc00 = 0;
      }
      param_2 = param_2 + temp_v6 * 0x1c;
      if (*(int *)(param_2 + 8) != 0) {
        if (DAT_0059dbf0 != 0) {
          FUN_003ba614(DAT_0059dbf0,3);
          DAT_0059dbf0 = 0;
        }
        FUN_001b4ddc(&DAT_00634d20);
        uRam00634d60 = *(unsigned int *)(param_2 + 0xc);
        uRam00634d64 = *(unsigned int *)(param_2 + 0x10);
        uRam00634d68 = *(unsigned int *)(param_2 + 0x14);
        temp_v5 = FUN_00222260(*(unsigned int *)(param_2 + 8));
        temp_v6 = temp_v5;
        FUN_00243c24();
        DAT_0059dc00 = temp_v6;
        FUN_00399768(temp_v5,3);
      }
    }
  }
  else if (DAT_0059dc00 != 0) {
    FUN_00399768(DAT_0059dc00,3);
    DAT_0059dc00 = 0;
  }
  asdMemFree(temp_v0);
  return temp_v1;
}

} /* extern "C" */
