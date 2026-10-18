/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106a5c` (_code @ 0x106a5c, 0x206 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

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

/* Unsupported intrinsic, declaration required: while (INT_ADD). */
/* Supplied declaration required: FUN_00100824. */
extern int FUN_00100836(unsigned char *, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_001028b8. */
/* Supplied declaration required: FUN_00103750. */
extern int FUN_00132112(unsigned int **, unsigned int **);
/* Supplied declaration required: FUN_001585e4. */
/* Supplied declaration required: FUN_001883b0. */
/* Supplied declaration required: FUN_002e3c44. */
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9520. */
/* Supplied declaration required: FUN_002ea100. */
/* Supplied declaration required: FUN_002ed8a0. */
/* Supplied declaration required: FUN_002ed91c. */
/* Supplied declaration required: FUN_002ed96e. */
/* Supplied declaration required: FUN_002eda4a. */
extern int FUN_002eda5a(unsigned char *);
/* Supplied declaration required: FUN_002eda74. */
/* Supplied declaration required: FUN_002edb54. */
extern int FUN_00429f6c(char *, unsigned int *, int, int);
/* Supplied declaration required: nn_fs_detail_FileBase_TryGetSize. */


unsigned int FUN_00106a5c(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 goto(s); 18 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned short *puVar4;
  unsigned int *puVar5;
  char *temp_v2;
  char *pcVar6;
  unsigned char *puVar7;
  int *piVar8;
  unsigned int temp_v3;
  unsigned short *puVar10;
  unsigned int *temp_v4;
  char temp_v5 [4];
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int *temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  unsigned int temp_v17;
  unsigned short temp_v18 [6];
  unsigned char temp_v19 [8];
  unsigned char temp_v20 [12];
  unsigned char temp_v21 [8];
  unsigned int temp_v22 [121];
  unsigned char temp_v23 [64];
  int temp_v24;
  int temp_v25;
  int temp_v26;
  unsigned int temp_v27;
  
  temp_v3 = 0;
  temp_v24 = param_1;
  temp_v25 = param_2;
  temp_v26 = param_3;
  temp_v27 = param_4;
  do {
    if (temp_v27 <= temp_v3) {
      return 1;
    }
    if (*(char *)(temp_v24 + 4) != '\0') {
      temp_v0 = FUN_002ea100(&temp_v16,*(unsigned int *)(temp_v26 + temp_v3 * 4));
      FUN_002ed8a0(&temp_v4,DAT_005949dc + 0x128,temp_v0);
      FUN_002e9318(&temp_v16);
      temp_v11 = *(unsigned int **)(DAT_005949dc + 0x138);
      temp_v1 = FUN_00132112(&temp_v4,&temp_v11);
      if (temp_v1 == 0) goto LAB_00106ab8;
      FUN_002eda74(temp_v3 * 0xc + temp_v25,temp_v4 + 6);
    }
    else {
LAB_00106ab8:
      temp_v6 = 0;
      temp_v8 = 0;
      temp_v7 = 0;
      temp_v10 = 0;
      temp_v9 = 0;
      temp_v5[0] = 'D';
      temp_v5[1] = -0x7f;
      temp_v5[2] = 'U';
      temp_v5[3] = '\0';
      temp_v13 = temp_v3 * 4;
      temp_v4 = *(unsigned int **)(temp_v26 + temp_v13);
      FUN_001028b8(temp_v23,0x40,&LAB_00106c74,(*(unsigned int *)&s__V_V_V_0058954c.u1[0]));
      temp_v4 = (unsigned int *)&temp_v6;
      temp_v16 = 0;
      temp_v11 = (unsigned int *)0x1;
      puVar7 = temp_v23;
      puVar10 = temp_v18;
      temp_v17 = 0;
      FUN_00100824(&temp_v16);
      while ((temp_v1 = FUN_00100836(puVar7,0x105,(unsigned int *)&temp_v16), temp_v1 != 0 &&
             (puVar4 = puVar10, FUN_002e3c44(puVar10,puVar7,temp_v1,&temp_v16),
             puVar4 != (unsigned short *)0x0))) {
        puVar10 = puVar10 + 1;
        puVar7 = puVar7 + temp_v1;
      }
      puVar1 = temp_v11;
      puVar5 = temp_v4;
      *puVar10 = 0;
      temp_v4 = temp_v11;
      temp_v17 = 0;
      temp_v16 = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[2] = 0;
      puVar5[1] = 0;
      FUN_001883b0(puVar5,temp_v18,puVar1);
      pcVar6 = temp_v2;
      if ((int)puVar5 < 0) {
        FUN_001585e4(temp_v5,pcVar6);
        return 0;
      }
      temp_v12 = 0;
      temp_v14 = 0;
      temp_v15 = 0;
      puVar5 = (unsigned int *)&temp_v6;
      nn_fs_detail_FileBase_TryGetSize(puVar5,&temp_v14);
      if ((int)puVar5 < 0) {
        pcVar6 = "Could not get file size of shared content. 32bit nn::Result value is %x";
        FUN_001585e4(temp_v5,pcVar6);
        return 0;
      }
      piVar8 = (int *)(temp_v3 * 0xc + temp_v25);
      FUN_002edb54(piVar8,temp_v14,0);
      temp_v1 = FUN_00429f6c(temp_v5,(unsigned int *)&temp_v12,*piVar8,piVar8[1] - *piVar8);
      FUN_00103750(&temp_v6);
      if (temp_v1 < 0) {
        pcVar6 = "Could not read shared content. 32bit nn::Result value is %x";
        FUN_001585e4(temp_v5,pcVar6);
        return 0;
      }
      FUN_002edb54(piVar8,temp_v12,0);
      if (*(char *)(temp_v24 + 4) != '\0') {
        temp_v4 = temp_v22;
        temp_v11 = (unsigned int *)(DAT_005949dc + 0x128);
        temp_v0 = FUN_002ea100(temp_v21,*(unsigned int *)(temp_v26 + temp_v13));
        temp_v1 = FUN_002e9520(temp_v19,temp_v0);
        FUN_002ed91c(temp_v1 + 8,piVar8);
        temp_v1 = FUN_002e9520(&temp_v16,temp_v19);
        temp_v1 = temp_v1 + 8;
        FUN_002ed91c(temp_v1);
        FUN_002ed96e(temp_v4,temp_v11,temp_v1 - 8);
        FUN_002eda4a(&temp_v16);
        temp_v1 = FUN_002eda5a(temp_v20);
        FUN_002e9318(temp_v1 - 8);
        FUN_002e9318(temp_v21);
      }
      FUN_001585e4(temp_v5);
    }
    temp_v3 = temp_v3 + 1;
  } while( 1 );
}
