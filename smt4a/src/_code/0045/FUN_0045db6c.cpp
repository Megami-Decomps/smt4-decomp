/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045db6c` (_code @ 0x45db6c, 0x628 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015fe40(...);
int FUN_001756d0(int, int);
int soundPlayerPlayItem(unsigned int, unsigned int, int, int);
int FUN_0045f410(int, int);
int FUN_0045f724(int);
int FUN_0045fd14(int, unsigned int, unsigned char *);
int FUN_0045fee8(int, int *);
int FUN_0045ff50(int, int, unsigned char *);
int VectorSignedToFloat(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_8: 32 slot(s), 116 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned char sp72; /* 0x72: local_72 */
    unsigned char sp73; /* 0x73: local_73 */
    unsigned char sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned char spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_8_stack;

extern unsigned char DAT_00548f38; /* 0x548f38 */

#ifndef ROMWRIGHT_PIECE_1_2_DEFINED
#define ROMWRIGHT_PIECE_1_2_DEFINED
#define romwright_piece_1_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 16) | (unsigned short)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_3_DEFINED
#define ROMWRIGHT_PIECE_1_3_DEFINED
#define romwright_piece_1_3(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 24) | ((unsigned int)(lower) & 0xffffffULL)))
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0015fe40. */
/* Supplied declaration required: FUN_001756d0. */
/* Supplied declaration required: soundPlayerPlayItem. */
/* Supplied declaration required: FUN_0045f410. */
/* Supplied declaration required: FUN_0045f724. */
/* Supplied declaration required: FUN_0045fd14. */
/* Supplied declaration required: FUN_0045fee8. */
/* Supplied declaration required: FUN_0045ff50. */
extern unsigned long long FUN_00460dd8(int, unsigned int, unsigned int);
extern unsigned int vcallSlot5(unsigned int, unsigned int);


unsigned int
FUN_0045db6c(int param_1,int param_2,unsigned int *param_3,unsigned short *param_4,char *param_5,
            int param_6,int param_7,unsigned int *param_8)

{
/* irregular: 5 goto(s); irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  unsigned int *puVar5;
  char *pcVar6;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char *puVar7;
  unsigned int temp_v5;
  unsigned char *puVar9;
  unsigned short *puVar10;
  int *piVar11;
  unsigned int *puVar12;
  int temp_v6;
  unsigned short *puVar14;
  unsigned char *puVar15;
  unsigned int temp_v7;
  unsigned int *puVar17;
  int temp_v8;
  unsigned char *puVar19;
  int temp_v9;
  unsigned int in_fpscr;
  unsigned long long temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int uStack_b4;
  unsigned char temp_v14;
  unsigned char uStack_af;
  unsigned char uStack_ae;
  unsigned char uStack_ad;
  int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned char temp_v21;
  unsigned char temp_v22;
  unsigned char temp_v23;
  unsigned char *temp_v24;
  unsigned char *temp_v25;
  unsigned short *temp_v26;
  unsigned char *temp_v27;
  unsigned char *temp_v28;
  unsigned char *temp_v29;
  unsigned short *temp_v30;
  unsigned char *temp_v31;
  unsigned char *temp_v32;
  unsigned char *temp_v33;
  unsigned short *temp_v34;
  unsigned char *temp_v35;
  unsigned char *temp_v36;
  unsigned char *temp_v37;
  unsigned short *temp_v38;
  int temp_v39;
  int temp_v40;
  unsigned int *temp_v41;
  unsigned short *temp_v42;
  
  if (*(char *)((int)param_4 + 0x3f) == '\x01') {
    temp_v1 = 0;
  }
  else {
    if (*(char *)((int)param_4 + 0x3f) != '\x02') {
      return 0xff;
    }
    temp_v1 = 1;
  }
  temp_v24 = (unsigned char *)((int)param_4 + 5);
  temp_v25 = (unsigned char *)((int)&uStack_b4 + 1);
  temp_v36 = (unsigned char *)((int)&temp_v15 + 2);
  temp_v26 = param_4 + 3;
  temp_v27 = (unsigned char *)((int)&uStack_b4 + 2);
  temp_v35 = (unsigned char *)((int)&temp_v15 + 1);
  puVar19 = &uStack_ad;
  temp_v28 = (unsigned char *)((int)param_4 + 7);
  temp_v29 = (unsigned char *)((int)&uStack_b4 + 3);
  puVar12 = (unsigned int *)&temp_v15;
  temp_v9 = 4;
  temp_v30 = param_4 + 4;
  temp_v31 = &temp_v14;
  temp_v32 = (unsigned char *)((int)param_4 + 9);
  temp_v33 = &uStack_af;
  temp_v37 = (unsigned char *)((int)param_4 + 0xf);
  temp_v34 = param_4 + 5;
  temp_v38 = param_4 + 8;
  puVar7 = &uStack_ae;
  puVar3 = param_4 + 2;
  puVar5 = (unsigned int *)&uStack_b4;
  puVar9 = (unsigned char *)((int)param_4 + 0xb);
  puVar10 = param_4 + 6;
  puVar14 = param_4 + 7;
  puVar15 = (unsigned char *)((int)&temp_v15 + 3);
  puVar17 = &temp_v16;
  temp_v39 = param_1;
  temp_v40 = param_2;
  temp_v41 = param_3;
  temp_v42 = param_4;
  do {
    param_4 = (unsigned short *)((int)param_4 + 0xd);
    temp_v9 = temp_v9 - 1;
    *(unsigned char *)puVar5 = *(unsigned char *)puVar3;
    puVar3 = (unsigned short *)((int)puVar3 + 0xd);
    puVar5 = (unsigned int *)((int)puVar5 + 0xd);
    *temp_v25 = *temp_v24;
    *temp_v27 = *(unsigned char *)temp_v26;
    *temp_v29 = *temp_v28;
    *temp_v31 = *(unsigned char *)temp_v30;
    *temp_v33 = *temp_v32;
    temp_v24 = temp_v24 + 0xd;
    *puVar7 = *(unsigned char *)temp_v34;
    puVar7 = puVar7 + 0xd;
    temp_v25 = temp_v25 + 0xd;
    temp_v26 = (unsigned short *)((int)temp_v26 + 0xd);
    *puVar19 = *puVar9;
    temp_v27 = temp_v27 + 0xd;
    temp_v28 = temp_v28 + 0xd;
    *(unsigned char *)puVar12 = *(unsigned char *)puVar10;
    temp_v29 = temp_v29 + 0xd;
    *temp_v35 = *(unsigned char *)param_4;
    temp_v30 = (unsigned short *)((int)temp_v30 + 0xd);
    temp_v31 = temp_v31 + 0xd;
    temp_v32 = temp_v32 + 0xd;
    temp_v33 = temp_v33 + 0xd;
    *temp_v36 = *(unsigned char *)puVar14;
    temp_v34 = (unsigned short *)((int)temp_v34 + 0xd);
    puVar9 = puVar9 + 0xd;
    puVar19 = puVar19 + 0xd;
    *puVar15 = *temp_v37;
    puVar10 = (unsigned short *)((int)puVar10 + 0xd);
    puVar12 = (unsigned int *)((int)puVar12 + 0xd);
    temp_v0 = *(unsigned char *)temp_v38;
    puVar14 = (unsigned short *)((int)puVar14 + 0xd);
    temp_v35 = temp_v35 + 0xd;
    temp_v36 = temp_v36 + 0xd;
    temp_v37 = temp_v37 + 0xd;
    temp_v38 = (unsigned short *)((int)temp_v38 + 0xd);
    *(unsigned char *)puVar17 = temp_v0;
    puVar15 = puVar15 + 0xd;
    puVar17 = (unsigned int *)((int)puVar17 + 0xd);
  } while (temp_v9 != 0);
  temp_v11 = temp_v39 + 0xd8;
  temp_v5 = (unsigned int)(unsigned short)temp_v42[1];
  temp_v18 = 0;
  temp_v13 = (unsigned int)(unsigned int)romwright_piece_1_2(temp_v1,*temp_v42);
  temp_v19 = 0xffffffff;
  if ((param_5 != (char *)0x0) &&
     (temp_v13 = (unsigned int)romwright_piece_1_3(*param_5,romwright_piece_1_2(temp_v1,*temp_v42)), *param_5 != '\0')) {
    temp_v18 = *(unsigned int *)(param_5 + 4);
    temp_v19 = *(unsigned int *)(param_5 + 8);
  }
  temp_v20 = *(unsigned int *)(temp_v42 + 0x1c);
  temp_v21 = *(unsigned char *)(temp_v42 + 0x1e);
  temp_v22 = *(unsigned char *)((int)temp_v42 + 0x3d);
  temp_v23 = *(unsigned char *)(temp_v42 + 0x1f);
  temp_v12 = temp_v5;
  FUN_0045fee8(temp_v40,&temp_v11);
  temp_v9 = temp_v40;
  if (param_6 == 0) {
    temp_v14 = 1;
  }
  else if ((param_6 != 1) && (param_6 == 2)) {
    temp_v14 = 0;
  }
  else {
    temp_v14 = 0;
    param_7 = 0;
  }
  temp_v16 = 0;
  temp_v15 = param_7;
  temp_v17 = 0;
  if (param_8 != (unsigned int *)0x0) {
    temp_v16 = param_8[3];
    temp_v17 = param_8[4];
  }
  temp_v6 = temp_v40 + 0x308c;
  piVar11 = *(int **)(temp_v39 + 0x114);
  if (piVar11 != (int *)0x0) {
    temp_v7 = *(unsigned int *)(temp_v40 + 0x3290);
    temp_v8 = *(int *)(temp_v40 + 0x3294);
    temp_v2 = *(unsigned int *)(temp_v39 + 4);
    FUN_0015fe40(temp_v2,*(unsigned int *)(temp_v40 + 0xb0));
    temp_v5 = 0;
    if ((char)piVar11[1] == '\0') goto LAB_0045df8c;
    temp_v13 = (unsigned int)"bxstm";
    temp_v5 = 0x200;
    temp_v11 = temp_v8;
    temp_v12 = temp_v2;
    temp_v10 = (**(romwright_code **)(*piVar11 + 0x14))(piVar11,temp_v6,0x200,temp_v7);
    if ((int)temp_v10 == 0) goto LAB_0045df8c;
  }
  else {
LAB_0045df8c:
    pcVar6 = (char *)0x0;
    if (((param_8 != (unsigned int *)0x0) && (pcVar6 = (char *)*param_8, pcVar6 == (char *)0x0)) &&
       (pcVar6 = (char *)0x0, param_8[1] != 0)) {
      if (temp_v6 == 0) {
        return 10;
      }
      temp_v10 = FUN_00460dd8(temp_v6,param_8[1],param_8[2]);
    }
    else {
      temp_v11 = *(int *)(temp_v9 + 0x3290);
      if (temp_v11 != 0) {
        temp_v5 = *(unsigned int *)(temp_v9 + 0x3294);
      }
      temp_v13 = (unsigned int)pcVar6;
      if (!(temp_v11 == 0 || temp_v5 == 0)) {
        uStack_b4 = 0;
        temp_v7 = *(unsigned int *)(temp_v39 + 4);
        temp_v12 = temp_v5;
        soundPlayerPlayItem(temp_v7,*temp_v41,temp_v6,0x200);
        temp_v10 = romwright_piece_4_4(temp_v3,temp_v7);
      }
      else {
        temp_v11 = 0;
        temp_v12 = 0;
        uStack_b4 = 0;
        temp_v7 = *(unsigned int *)(temp_v39 + 4);
        soundPlayerPlayItem(temp_v7,*temp_v41,temp_v6,0x200);
        temp_v10 = romwright_piece_4_4(temp_v4,temp_v7);
      }
    }
    if ((int)temp_v10 == 0) {
      return 10;
    }
  }
  temp_v5 = (unsigned int)((unsigned long long)temp_v10 >> 0x20);
  if (param_8 != (unsigned int *)0x0) {
    temp_v5 = param_8[5];
  }
  if (param_8 == (unsigned int *)0x0 || temp_v5 == 0) {
    if (*(int *)(temp_v42 + 0x20) == -1) goto LAB_0045e138;
    if (*(int *)(temp_v39 + 0x114) != 0) {
      temp_v9 = *(int *)(temp_v39 + 4);
      FUN_0015fe40(temp_v9,*(unsigned int *)(temp_v40 + 0xb0));
      if ((temp_v9 != 0) && (piVar11 = *(int **)(temp_v39 + 0x114), (char)piVar11[1] != '\0')) {
        temp_v11 = 0;
        temp_v5 = (**(romwright_code **)(*piVar11 + 0x18))(piVar11,temp_v9,&DAT_00548f38,"bxstp");
        if (temp_v5 != 0) goto LAB_0045e120;
      }
    }
    temp_v5 = vcallSlot5(*(unsigned int *)(temp_v39 + 0x110),*(unsigned int *)(temp_v42 + 0x20));
    if (temp_v5 == 0) goto LAB_0045e138;
  }
LAB_0045e120:
  if (param_7 == 0) {
    FUN_0045fd14(temp_v40,temp_v5,&temp_v14);
  }
LAB_0045e138:
  FUN_0045ff50(temp_v40,(int)temp_v10,&temp_v14);
  temp_v9 = temp_v40;
  VectorSignedToFloat(temp_v41[4],(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0045f724(temp_v40);
  FUN_001756d0(temp_v9,*(unsigned char *)(temp_v41 + 5));
  FUN_0045f410(temp_v9,*(unsigned char *)((int)temp_v41 + 0x15));
  return 0;
}

} /* extern "C" */
