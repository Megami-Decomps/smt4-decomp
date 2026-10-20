/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106a5c` (_code @ 0x106a5c, 0x206 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int refIsNullOrZero(int *);
int FUN_001028b8(unsigned char [64], int, unsigned char *, unsigned int);
int FUN_00103750(int *);
int FUN_001585e4(...);
int FUN_001883b0(unsigned int *, unsigned short [6], unsigned int *);
int FUN_002e3c44(unsigned short *, unsigned char *, int, int *);
int onlineStringDestroy(...);
int onlineStringCopyConstruct(...);
int FUN_002ea100(...);
int FUN_002ed8a0(unsigned int **, int, unsigned int);
int FUN_002ed91c(...);
int FUN_002ed96e(...);
int FUN_002eda4a(...);
int FUN_002eda74(unsigned int, unsigned int *);
int vectorResizeBytes(int *, int, int);

/* stack frame of param_4: 18 slot(s), 72 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp274; /* 0x274: local_274 */
    unsigned int sp278; /* 0x278: local_278 */
    unsigned int sp27C; /* 0x27c: local_27c */
    unsigned int sp280; /* 0x280: local_280 */
    unsigned int sp284; /* 0x284: local_284 */
    unsigned int sp288; /* 0x288: local_288 */
    unsigned int sp28C; /* 0x28c: local_28c */
    unsigned int sp290; /* 0x290: local_290 */
    unsigned int sp294; /* 0x294: local_294 */
    unsigned int sp298; /* 0x298: local_298 */
    unsigned int sp29C; /* 0x29c: local_29c */
    unsigned int sp2A0; /* 0x2a0: local_2a0 */
    unsigned int sp2A4; /* 0x2a4: local_2a4 */
    unsigned int sp2A8; /* 0x2a8: local_2a8 */
} param_4_stack;

extern unsigned char LAB_00106c74; /* 0x106c74 */
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

/* Supplied declaration required: refIsNullOrZero. */
extern int FUN_00100836(unsigned char *, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_001028b8. */
/* Supplied declaration required: FUN_00103750. */
extern int wordRefsDiffer_00132112(unsigned int **, unsigned int **);
/* Supplied declaration required: FUN_001585e4. */
/* Supplied declaration required: FUN_001883b0. */
/* Supplied declaration required: FUN_002e3c44. */
/* Supplied declaration required: onlineStringDestroy. */
/* Supplied declaration required: onlineStringCopyConstruct. */
/* Supplied declaration required: FUN_002ea100. */
/* Supplied declaration required: FUN_002ed8a0. */
/* Supplied declaration required: FUN_002ed91c. */
/* Supplied declaration required: FUN_002ed96e. */
/* Supplied declaration required: FUN_002eda4a. */
extern int vectorDestroyBytes(unsigned char *);
/* Supplied declaration required: FUN_002eda74. */
/* Supplied declaration required: vectorResizeBytes. */
extern int fileHolderTryRead(char *, unsigned int *, int, int);
extern unsigned int nn_fs_detail_FileBase_TryGetSize(unsigned int, long long *);


unsigned int FUN_00106a5c(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 goto(s); 16 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned short *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
  char *temp_v3;
  char *pcVar7;
  unsigned char *puVar8;
  int *piVar9;
  unsigned int temp_v4;
  unsigned short *puVar11;
  unsigned int *temp_v5;
  char temp_v6 [4];
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int *temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  unsigned short temp_v19 [6];
  unsigned char temp_v20 [8];
  unsigned char temp_v21 [12];
  unsigned char temp_v22 [8];
  unsigned int temp_v23 [121];
  unsigned char temp_v24 [64];
  int temp_v25;
  int temp_v26;
  int temp_v27;
  unsigned int temp_v28;
  
  temp_v4 = 0;
  temp_v25 = param_1;
  temp_v26 = param_2;
  temp_v27 = param_3;
  temp_v28 = param_4;
  do {
    if (temp_v28 <= temp_v4) {
      return 1;
    }
    if (*(char *)(temp_v25 + 4) != '\0') {
      temp_v0 = FUN_002ea100(&temp_v17,*(unsigned int *)(temp_v27 + temp_v4 * 4));
      FUN_002ed8a0(&temp_v5,DAT_005949dc + 0x128,temp_v0);
      onlineStringDestroy(&temp_v17);
      temp_v12 = *(unsigned int **)(DAT_005949dc + 0x138);
      temp_v1 = wordRefsDiffer_00132112(&temp_v5,&temp_v12);
      if (temp_v1 == 0) goto LAB_00106ab8;
      FUN_002eda74(temp_v4 * 0xc + temp_v26,temp_v5 + 6);
    }
    else {
LAB_00106ab8:
      temp_v7 = 0;
      temp_v9 = 0;
      temp_v8 = 0;
      temp_v11 = 0;
      temp_v10 = 0;
      temp_v6[0] = 'D';
      temp_v6[1] = -0x7f;
      temp_v6[2] = 'U';
      temp_v6[3] = '\0';
      temp_v14 = temp_v4 * 4;
      temp_v5 = *(unsigned int **)(temp_v27 + temp_v14);
      FUN_001028b8(temp_v24,0x40,&LAB_00106c74,(*(unsigned int *)&s__V_V_V_0058954c.u1[0]));
      temp_v5 = (unsigned int *)&temp_v7;
      temp_v17 = 0;
      temp_v12 = (unsigned int *)0x1;
      puVar8 = temp_v24;
      puVar11 = temp_v19;
      temp_v18 = 0;
      refIsNullOrZero(&temp_v17);
      while ((temp_v1 = FUN_00100836(puVar8,0x105,(unsigned int *)&temp_v17), temp_v1 != 0 &&
             (puVar4 = puVar11, FUN_002e3c44(puVar11,puVar8,temp_v1,&temp_v17),
             puVar4 != (unsigned short *)0x0))) {
        puVar11 = puVar11 + 1;
        puVar8 = puVar8 + temp_v1;
      }
      puVar1 = temp_v12;
      puVar5 = temp_v5;
      *puVar11 = 0;
      temp_v5 = temp_v12;
      temp_v18 = 0;
      temp_v17 = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[2] = 0;
      puVar5[1] = 0;
      FUN_001883b0(puVar5,temp_v19,puVar1);
      pcVar7 = temp_v3;
      if ((int)puVar5 < 0) {
        FUN_001585e4(temp_v6,pcVar7);
        return 0;
      }
      temp_v13 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      temp_v2 = nn_fs_detail_FileBase_TryGetSize((unsigned int)&temp_v7,(long long *)&temp_v15);
      if ((int)temp_v2 < 0) {
        pcVar7 = "Could not get file size of shared content. 32bit nn::Result value is %x";
        FUN_001585e4(temp_v6,pcVar7);
        return 0;
      }
      piVar9 = (int *)(temp_v4 * 0xc + temp_v26);
      vectorResizeBytes(piVar9,temp_v15,0);
      temp_v1 = fileHolderTryRead(temp_v6,(unsigned int *)&temp_v13,*piVar9,piVar9[1] - *piVar9);
      FUN_00103750(&temp_v7);
      if (temp_v1 < 0) {
        pcVar7 = "Could not read shared content. 32bit nn::Result value is %x";
        FUN_001585e4(temp_v6,pcVar7);
        return 0;
      }
      vectorResizeBytes(piVar9,temp_v13,0);
      if (*(char *)(temp_v25 + 4) != '\0') {
        temp_v5 = temp_v23;
        temp_v12 = (unsigned int *)(DAT_005949dc + 0x128);
        temp_v0 = FUN_002ea100(temp_v22,*(unsigned int *)(temp_v27 + temp_v14));
        temp_v1 = onlineStringCopyConstruct(temp_v20,temp_v0);
        FUN_002ed91c(temp_v1 + 8,piVar9);
        temp_v1 = onlineStringCopyConstruct(&temp_v17,temp_v20);
        temp_v1 = temp_v1 + 8;
        FUN_002ed91c(temp_v1);
        FUN_002ed96e(temp_v5,temp_v12,temp_v1 - 8);
        FUN_002eda4a(&temp_v17);
        temp_v1 = vectorDestroyBytes(temp_v21);
        onlineStringDestroy(temp_v1 - 8);
        onlineStringDestroy(temp_v22);
      }
      FUN_001585e4(temp_v6);
    }
    temp_v4 = temp_v4 + 1;
  } while( 1 );
}

} /* extern "C" */
