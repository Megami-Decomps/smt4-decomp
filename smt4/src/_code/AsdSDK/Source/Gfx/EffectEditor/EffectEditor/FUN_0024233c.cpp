/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024233c` (_code @ 0x24233c, 0x4b8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192268(void);
int FUN_0019db18(...);
int taskRunWithObject(unsigned int, int, int);
int effPartsSetData(void);
int effEditorNodeChainApply(unsigned int *);
int FUN_0024dd80(int);
int FUN_0024dd90(unsigned int *);
int effBlockCreateFromBlock(void);
int FUN_00250200(void);
int effBlockSetBlobB(unsigned int, unsigned int [2], int);
int FUN_002629a8(...);
int FUN_002629f0(...);
int FUN_002a3d58(...);
int FUN_002be624(int, unsigned char *, unsigned int);
int libc_strcpy(int, unsigned int);
int padIsButtonPressed(...);
int memAlloc(int, int, int, unsigned int, int, int);
int asdMemFree(...);
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

extern unsigned char LAB_00200001; /* 0x200001 */
extern unsigned char LAB_002426ac; /* 0x2426ac */
extern signed char DAT_0044ea89; /* 0x44ea89 */
extern int DAT_0044ea8c; /* 0x44ea8c */
extern int DAT_0044ea90; /* 0x44ea90 */
extern unsigned int DAT_0044ea94; /* 0x44ea94 */
extern unsigned int DAT_0044ea98; /* 0x44ea98 */
extern unsigned int DAT_0044ea9c; /* 0x44ea9c */
extern int DAT_0044eaa0; /* 0x44eaa0 */
extern int DAT_0044eaa4; /* 0x44eaa4 */
extern int DAT_0044eab4; /* 0x44eab4 */
extern int DAT_0044eab8; /* 0x44eab8 */
extern unsigned int DAT_0044eacc; /* 0x44eacc */
extern unsigned int DAT_0044ead0; /* 0x44ead0 */
extern unsigned int DAT_0044ead4; /* 0x44ead4 */
extern unsigned int DAT_0044ead8; /* 0x44ead8 */
extern unsigned int DAT_0044eae0; /* 0x44eae0 */
extern unsigned int DAT_0044eae4; /* 0x44eae4 */
extern unsigned int DAT_0044eae8; /* 0x44eae8 */
extern unsigned char DAT_0044f858; /* 0x44f858 */
extern int DAT_0044f864; /* 0x44f864 */
extern unsigned int DAT_0044f8c8; /* 0x44f8c8 */
extern unsigned int DAT_0044f8cc; /* 0x44f8cc */
extern unsigned int DAT_0044f8d0; /* 0x44f8d0 */
extern unsigned int DAT_0044f8d4; /* 0x44f8d4 */
extern int DAT_0044f8dc; /* 0x44f8dc */
extern unsigned int DAT_0044f8e0; /* 0x44f8e0 */
extern unsigned char DAT_004d8ca0; /* 0x4d8ca0 */
extern unsigned int uRam004d8ce0; /* 0x4d8ce0 */
extern unsigned int uRam004d8ce4; /* 0x4d8ce4 */
extern unsigned int uRam004d8ce8; /* 0x4d8ce8 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00192268. */
/* Supplied declaration required: FUN_0019db18. */
/* Supplied declaration required: taskRunWithObject. */
extern unsigned int effEditorNodeListCount(unsigned int);
/* Supplied declaration required: effPartsSetData. */
extern unsigned int FUN_0024c3f8(void);
/* Supplied declaration required: effEditorNodeChainApply. */
/* Supplied declaration required: FUN_0024dd80. */
/* Supplied declaration required: FUN_0024dd90. */
/* Supplied declaration required: effBlockCreateFromBlock. */
/* Supplied declaration required: FUN_00250200. */
/* Supplied declaration required: effBlockSetBlobB. */
/* Supplied declaration required: FUN_002629a8. */
/* Supplied declaration required: FUN_002629f0. */
/* Supplied declaration required: FUN_002a3d58. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: padIsButtonPressed. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: asdMemFree. */
extern int FUN_002c7a54(unsigned int, unsigned int);
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned char * FUN_0024233c(unsigned int param_1,int param_2,unsigned int param_3)

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
  unsigned char *puVar9;
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
        FUN_002be624(temp_v6,&LAB_002426ac,*puVar2);
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
  DAT_0044f8cc = *(unsigned int *)(DAT_0044eab4 + 4);
  DAT_0044f8d0 = *(unsigned int *)(DAT_0044eab4 + 8);
  if (temp_v4 <= DAT_0044f8d4) {
    DAT_0044f8d4 = temp_v4 - 1;
  }
  DAT_0044f8c8 = temp_v8;
  temp_v3 = DAT_0044f8d4;
  DAT_0044f8dc = temp_v0;
  DAT_0044f8e0 = temp_v4;
  if (DAT_0044ea89 == '\0') {
    FUN_0024dd90(&DAT_0044f8c8);
  }
  effEditorNodeChainApply(&DAT_0044f8c8);
  temp_v6 = padIsButtonPressed(0);
  if (temp_v6 == 0) {
    FUN_0024dd80(0);
    temp_v6 = padIsButtonPressed();
    if (temp_v6 != 0) goto LAB_002424b8;
LAB_002426c4:
    temp_v6 = padIsButtonPressed(1);
    if (temp_v6 == 0) {
      FUN_0024dd80(1);
      temp_v6 = padIsButtonPressed();
      if (temp_v6 == 0) {
        puVar9 = &LAB_00200001;
      }
      else {
        puVar9 = (unsigned char *)0x0;
      }
    }
    else {
      puVar9 = (unsigned char *)0x0;
    }
  }
  else {
LAB_002424b8:
    if (temp_v4 == 0) goto LAB_002426c4;
    temp_v6 = VectorFloatToUnsigned(*(unsigned int *)(temp_v0 + DAT_0044f8d4 * 0x18 + 0x14),3);
    piVar3 = (int *)(param_2 + temp_v6 * 0x1c);
    FUN_002a3d58(&DAT_004d8ca0);
    temp_v6 = *piVar3;
    if (piVar3[2] != 0) {
      temp_v1 = FUN_0019db18();
      temp_v2 = FUN_0024c3f8();
      rt_memcpy(*(unsigned int *)(temp_v6 + 0xc),temp_v2,*(unsigned int *)(temp_v6 + 0x10));
    }
    else {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v6 + 4);
      FUN_00192268();
      if (*(int *)(temp_v6 + 0xc) != 0) {
        effPartsSetData();
      }
      if (*(int *)(temp_v6 + 0x1c) != 0) {
        taskRunWithObject(temp_v1,*(int *)(temp_v6 + 0x1c),*(unsigned short *)(temp_v6 + 0x18));
      }
      else {
        temp_v7[0] = 0;
        effBlockSetBlobB(temp_v1,temp_v7,4);
      }
    }
    DAT_0044eacc = 0;
    DAT_0044ead0 = 0;
    DAT_0044ead4 = 1;
    DAT_0044ead8 = 0;
    DAT_0044eae0 = 0;
    DAT_0044eae4 = 0;
    DAT_0044eae8 = 0;
    temp_v6 = FUN_002c7a54(DAT_0044ea94,temp_v1);
    DAT_0044eaa4 = temp_v6;
    libc_strcpy(temp_v6 + 0x9c,*(unsigned int *)*piVar3);
    *(int *)(temp_v6 + 0x40) = piVar3[3];
    *(int *)(temp_v6 + 0x44) = piVar3[4];
    *(int *)(temp_v6 + 0x48) = piVar3[5];
    *(unsigned char *)(temp_v6 + 0x88) = 8;
    *(unsigned char *)(temp_v6 + 0x89) = 0;
    *(unsigned char *)(temp_v6 + 0x8a) = 0;
    rt_memcpy_w(&DAT_004d8ca0,temp_v6,0x80);
    DAT_0044ea9c = *(unsigned int *)(temp_v6 + 0x90);
    if (*(int *)(*piVar3 + 0xc) != 0) {
      effPartsSetData();
    }
    temp_v2 = DAT_0044ea9c;
    effBlockCreateFromBlock();
    FUN_00250200();
    DAT_0044eab8 = piVar3[1];
    DAT_0044ea98 = temp_v2;
    temp_v1 = effEditorNodeListCount(DAT_0044ea94);
    if (temp_v1 >= 0x16) {
      DAT_0044ea8c = temp_v1 - 0x15;
      DAT_0044f864 = 0x14;
    }
    else {
      DAT_0044f864 = temp_v1 - 1;
      DAT_0044ea8c = 0;
    }
    puVar9 = (unsigned char *)0x800000;
    *(unsigned char **)(piVar3[1] + 0x34) = &DAT_0044f858;
    DAT_0044eacc = 0;
    DAT_0044ead0 = 0;
    DAT_0044ead4 = 1;
    DAT_0044ead8 = 0;
    DAT_0044eae0 = 0;
    DAT_0044eae4 = 0;
    DAT_0044eae8 = 0;
  }
  if (((unsigned int)puVar9 & 1) != 0) {
    if (temp_v4 != 0) {
      temp_v6 = VectorFloatToUnsigned(*(unsigned int *)(temp_v0 + DAT_0044f8d4 * 0x18 + 0x14),3);
      if (DAT_0044eaa0 != 0) {
        if (DAT_0044f8d4 == temp_v3) {
          asdMemFree(temp_v0);
          return puVar9;
        }
        FUN_002629a8(DAT_0044eaa0,3);
        DAT_0044eaa0 = 0;
      }
      param_2 = param_2 + temp_v6 * 0x1c;
      if (*(int *)(param_2 + 8) != 0) {
        if (DAT_0044ea90 != 0) {
          FUN_002629f0(DAT_0044ea90,3);
          DAT_0044ea90 = 0;
        }
        FUN_002a3d58(&DAT_004d8ca0);
        uRam004d8ce0 = *(unsigned int *)(param_2 + 0xc);
        uRam004d8ce4 = *(unsigned int *)(param_2 + 0x10);
        uRam004d8ce8 = *(unsigned int *)(param_2 + 0x14);
        temp_v5 = FUN_0019db18(*(unsigned int *)(param_2 + 8));
        temp_v6 = temp_v5;
        effBlockCreateFromBlock();
        DAT_0044eaa0 = temp_v6;
        FUN_002629a8(temp_v5,3);
      }
    }
  }
  else if (DAT_0044eaa0 != 0) {
    FUN_002629a8(DAT_0044eaa0,3);
    DAT_0044eaa0 = 0;
  }
  asdMemFree(temp_v0);
  return puVar9;
}

} /* extern "C" */
