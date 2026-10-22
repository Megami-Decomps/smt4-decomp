/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001068e4` (_code @ 0x1068e4, 0x162 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00106a5c(...);
int FUN_0016cd18(unsigned int, int, int, int, int);
int asdOperatorDeleteArray(...);
int _ZN9Obj55aff4D1Ev(...);
int FUN_002ea100(...);
int FUN_002ed8a0(unsigned int [2], int, unsigned int);
int FUN_002ed91c(int, int);
int FUN_002ed96e(int *, int, int);
int FUN_002eda4a(unsigned char [20]);
int vectorDestroyBytes(unsigned char [12]);
int FUN_002eda74(int, int);
int FUN_002eda80(int *, int, int *, int **);

/* stack frame of param_4: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_4_stack;

#ifndef ROMWRIGHT_STORAGE_s__V_V_V_0058954c_13_1_DEFINED
#define ROMWRIGHT_STORAGE_s__V_V_V_0058954c_13_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__V_V_V_0058954c_13_1 {
    char whole[13];
    unsigned char u1[13];
    signed char s1[13];
};
typedef char romwright_storage_s__V_V_V_0058954c_13_1_size_check[(sizeof(union romwright_storage_s__V_V_V_0058954c_13_1) == 13) ? 1 : -1];
typedef char romwright_storage_s__V_V_V_0058954c_13_1_u1_width_check[(sizeof(((union romwright_storage_s__V_V_V_0058954c_13_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__V_V_V_0058954c_13_1_s1_width_check[(sizeof(((union romwright_storage_s__V_V_V_0058954c_13_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__V_V_V_0058954c_13_1 s__V_V_V_0058954c; /* 0x58954c */
extern int DAT_005949dc; /* 0x5949dc */

/* Supplied declaration required: FUN_00106a5c. */
/* Supplied declaration required: FUN_0016cd18. */
extern int FUN_0016ceb8(unsigned int, unsigned int *, unsigned int, unsigned int, unsigned int);
extern int FUN_001a0380(unsigned int);
extern unsigned int rt_malloc(void);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
extern int _ZN9Obj55aff4C1ERKS_(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002ea100. */
/* Supplied declaration required: FUN_002ed8a0. */
extern int wordRefsEqual_002ed902(unsigned int *, int *);
extern int vectorInitEmpty2(unsigned char *);
/* Supplied declaration required: FUN_002ed91c. */
/* Supplied declaration required: FUN_002ed96e. */
/* Supplied declaration required: FUN_002eda4a. */
/* Supplied declaration required: vectorDestroyBytes. */
/* Supplied declaration required: FUN_002eda74. */
/* Supplied declaration required: FUN_002eda80. */


int FUN_001068e4(int param_1,int param_2,int param_3,int *param_4)

{
/* irregular: 1 goto(s); 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  unsigned char *puVar5;
  int *temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8 [2];
  unsigned char temp_v9 [20];
  unsigned char temp_v10 [12];
  unsigned char temp_v11 [12];
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int *piStack_18;
  
  temp_v12 = param_1;
  temp_v13 = param_2;
  temp_v14 = param_3;
  piStack_18 = param_4;
  if (*(char *)(param_1 + 4) != '\0') {
    for (piVar4 = (int *)0x0; piVar4 < param_4; piVar4 = (int *)((int)piVar4 + 1)) {
      temp_v4 = *(int *)(DAT_005949dc + 0x138);
      temp_v0 = FUN_002ea100(&temp_v6,*(unsigned int *)(temp_v14 + (int)piVar4 * 4));
      FUN_002ed8a0(temp_v8,DAT_005949dc + 0x128,temp_v0);
      temp_v1 = wordRefsEqual_002ed902(temp_v8,&temp_v4);
      _ZN9Obj55aff4D1Ev(&temp_v6);
      if (temp_v1 != 0) goto LAB_001069c6;
    }
    for (piVar4 = (int *)0x0; piVar4 < param_4; piVar4 = (int *)((int)piVar4 + 1)) {
      temp_v1 = DAT_005949dc + 0x128;
      temp_v0 = FUN_002ea100(temp_v11,*(unsigned int *)(temp_v14 + (int)piVar4 * 4));
      temp_v3 = &temp_v7;
      puVar5 = temp_v9;
      temp_v4 = temp_v1;
      temp_v6 = vectorInitEmpty2(temp_v10);
      temp_v1 = _ZN9Obj55aff4C1ERKS_(puVar5,temp_v0);
      temp_v1 = temp_v1 + 8;
      FUN_002ed91c(temp_v1,temp_v6);
      FUN_002ed96e(temp_v3,temp_v4,temp_v1 - 8);
      temp_v1 = temp_v7;
      FUN_002eda4a(temp_v9);
      vectorDestroyBytes(temp_v10);
      FUN_002eda74((int)piVar4 * 0xc + temp_v13,temp_v1 + 0x18);
      _ZN9Obj55aff4D1Ev(temp_v11);
    }
    temp_v1 = 1;
  }
  else {
    temp_v3 = *(int **)(DAT_005949dc + 0x138);
    temp_v6 = temp_v3[2];
    FUN_002eda80(&temp_v7,DAT_005949dc + 0x128,&temp_v6,&temp_v3);
LAB_001069c6:
    temp_v4 = 1;
    temp_v3 = param_4;
    temp_v2 = FUN_0016ceb8(0,(unsigned int *)&temp_v5,0x10602,0x4009b,0);
    temp_v5 = rt_malloc();
    temp_v7 = 0;
    temp_v4 = 1;
    temp_v1 = (*(unsigned int *)&s__V_V_V_0058954c.u1[0]);
    temp_v3 = param_4;
    temp_v6 = temp_v2;
    temp_v8[0] = temp_v5;
    FUN_0016cd18((*(unsigned int *)&s__V_V_V_0058954c.u1[0]),0,0x10602,0x4009b,0);
    if (temp_v1 >= 0) {
      temp_v1 = temp_v12;
      FUN_00106a5c(temp_v12,temp_v13,temp_v14,param_4);
      temp_v2 = FUN_001a0380((*(unsigned int *)&s__V_V_V_0058954c.u1[0]));
      if (-1 < temp_v2) {
        asdOperatorDeleteArray(temp_v8[0]);
        return temp_v1;
      }
      asdOperatorDeleteArray(temp_v8[0]);
    }
    else {
      asdOperatorDeleteArray(temp_v8[0]);
    }
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
