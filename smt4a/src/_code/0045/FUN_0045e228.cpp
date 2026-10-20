/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045e228` (_code @ 0x45e228, 0x55c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015fe40(int, unsigned int);
int FUN_001cb8e4(int **, int);
int FUN_002f5020(...);
int FUN_004606d8(int, int *, int *);
int FUN_00460824(int, unsigned int, int, int);
int FUN_0046089c(...);
int FUN_00461888(unsigned char *, unsigned char *, int, unsigned int);
int FUN_004658c0(int *, unsigned int, unsigned int, int *);

typedef int romwright_code(...);
/* stack frame of param_7: 39 slot(s), 129 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned char sp4D; /* 0x4d: local_4d */
    unsigned char sp4E; /* 0x4e: local_4e */
    unsigned char sp4F; /* 0x4f: local_4f */
    unsigned char sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned char sp79; /* 0x79: local_79 */
    unsigned char sp7A; /* 0x7a: local_7a */
    unsigned char sp7B; /* 0x7b: local_7b */
    unsigned char sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
} param_7_stack;

extern unsigned char LAB_001b1aa8; /* 0x1b1aa8 */
extern unsigned char DAT_00548f40; /* 0x548f40 */

/* Supplied declaration required: FUN_0015fe40. */
extern int FUN_001946d4(unsigned int, int, unsigned int *);
/* Supplied declaration required: FUN_001cb8e4. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_004606d8. */
/* Supplied declaration required: FUN_00460824. */
/* Supplied declaration required: FUN_0046089c. */
/* Supplied declaration required: FUN_00461888. */
/* Supplied declaration required: FUN_004658c0. */
extern unsigned int FUN_00466b9c(int, unsigned int, unsigned int *);
extern int FUN_00507d20(unsigned int, unsigned int);
extern int FUN_00508854(int **, int, unsigned int *);


unsigned int
FUN_0045e228(int param_1,int param_2,unsigned int *param_3,unsigned int *param_4,int param_5,
            unsigned int param_6,int *param_7)

{
/* irregular: 9 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  unsigned char *puVar6;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar8;
  unsigned int temp_v6;
  int temp_v7;
  int *temp_v8;
  int temp_v9;
  unsigned int uStack_c8;
  unsigned int temp_v10;
  int temp_v11 [9];
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned char temp_v20;
  unsigned char temp_v21;
  unsigned char temp_v22;
  unsigned char temp_v23;
  unsigned char temp_v24 [4];
  int temp_v25 [8];
  int temp_v26;
  unsigned char temp_v27 [4];
  int temp_v28;
  int temp_v29;
  int iStack_44;
  int temp_v30;
  unsigned char temp_v31;
  unsigned int temp_v32;
  int iStack_34;
  int temp_v33;
  unsigned int *puStack_2c;
  unsigned int *puStack_28;
  
  temp_v7 = 0;
  iStack_34 = param_1;
  temp_v33 = param_2;
  puStack_2c = param_3;
  puStack_28 = param_4;
  if (*(int *)(param_1 + 0x114) != 0) {
    temp_v1 = *(int *)(param_1 + 4);
    FUN_0015fe40(temp_v1,*(unsigned int *)(param_2 + 0xb0));
    if (temp_v1 != 0) {
      piVar8 = *(int **)(param_1 + 0x114);
      temp_v7 = 0;
      if ((char)piVar8[1] != '\0') {
        temp_v8 = (int *)0x0;
        temp_v7 = (**(romwright_code **)(*piVar8 + 0x18))(piVar8,temp_v1,&DAT_00548f40,"bxseq");
      }
    }
  }
  temp_v26 = *param_4;
  temp_v28 = param_4[5];
  if ((temp_v7 == 0) &&
     (temp_v7 = FUN_00507d20(*(unsigned int *)(param_1 + 0x110),*param_3), param_7 != (int *)0x0)) {
    if (*param_7 != 0) {
      temp_v7 = *param_7;
    }
    FUN_001cb8e4(&temp_v8,temp_v7);
    if (param_7[1] != 0) {
      temp_v1 = FUN_00508854(&temp_v8,param_7[1],(unsigned int *)&temp_v26);
      if (temp_v1 == 0) {
        return 0xf;
      }
      temp_v26 = FUN_00466b9c(temp_v9,temp_v26,(unsigned int *)&temp_v28);
    }
  }
  temp_v10 = (unsigned int)(*(int *)(*(int *)(temp_v33 + 0x10) + 0x38) != 0);
  temp_v16 = 0;
  temp_v29 = 0xffffffff;
  iStack_44 = 0;
  FUN_002f5020(temp_v11,&LAB_001b1aa8,8,4);
  FUN_002f5020(temp_v24,&LAB_001b1aa8,8,4);
  temp_v29 = *(unsigned int *)(temp_v33 + 0xb0);
  if (temp_v7 == 0) {
    if (temp_v10 == 0) {
      return 5;
    }
    temp_v16 = 1;
  }
  iStack_44 = temp_v7;
  if (*(int *)(param_1 + 0x114) != 0) {
    temp_v1 = *(int *)(param_1 + 4);
    FUN_0015fe40(temp_v1,*(unsigned int *)(temp_v33 + 0xb0));
    if (temp_v1 != 0) {
      piVar8 = (int *)0x0;
      do {
        temp_v0 = *(char *)(*(int *)(param_1 + 0x114) + 4);
        if (temp_v0 == '\0') {
          *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
          *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
        }
        piVar3 = *(int **)(param_1 + 0x114);
        if ((char)piVar3[1] == '\0') {
          temp_v2 = 0;
        }
        else {
          temp_v8 = piVar8;
          temp_v2 = (**(romwright_code **)(*piVar3 + 0x18))(piVar3,temp_v1,&DAT_00548f40,"bxbnk");
        }
        piVar3 = *(int **)(param_1 + 0x114);
        if ((char)piVar3[1] == '\0') {
          temp_v3 = 0;
        }
        else {
          temp_v8 = piVar8;
          temp_v3 = (**(romwright_code **)(*piVar3 + 0x18))(piVar3,temp_v1,&DAT_00548f40,"bxwar");
        }
        if (temp_v0 == '\0') {
          *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 0;
          *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 0;
        }
        if (!(temp_v2 == 0 || temp_v3 == 0)) {
          temp_v11[(int)piVar8 * 2 + 1] = temp_v2;
          temp_v25[(int)piVar8 * 2] = temp_v3;
          temp_v27[(int)piVar8] = 0;
        }
        else {
          temp_v11[(int)piVar8 * 2 + 1] = 0;
          temp_v25[(int)piVar8 * 2] = 0;
        }
        piVar8 = (int *)((int)piVar8 + 1);
      } while (piVar8 < (int *)0x4);
    }
  }
  if (param_7 != (int *)0x0) {
    temp_v11[0] = param_7[2];
    temp_v11[2] = param_7[3];
    temp_v11[4] = param_7[4];
    temp_v11[6] = param_7[5];
  }
  else {
    temp_v11[0] = param_4[1];
    temp_v11[2] = param_4[2];
    temp_v11[4] = param_4[3];
    temp_v11[6] = param_4[4];
  }
  temp_v6 = 0;
  do {
    if (((*(int *)(param_1 + 0x114) == 0) || (temp_v11[temp_v6 * 2 + 1] == 0)) ||
       (temp_v25[temp_v6 * 2] == 0)) {
      temp_v15 = 0xffffffff;
      temp_v1 = FUN_001946d4(*(unsigned int *)(param_1 + 4),temp_v11[temp_v6 * 2],(unsigned int *)&temp_v15);
      if (temp_v1 != 0) {
        temp_v1 = FUN_00507d20(*(unsigned int *)(param_1 + 0x110),temp_v15);
        temp_v11[temp_v6 * 2 + 1] = temp_v1;
        if (temp_v1 != 0) {
          temp_v8 = *(int **)(param_1 + 0x110);
          if (temp_v8 != (int *)0x0) {
            temp_v8 = temp_v8 + 3;
          }
          puVar6 = temp_v24 + temp_v6 * 8;
          FUN_00461888(puVar6,temp_v27 + temp_v6,temp_v1,*(unsigned int *)(param_1 + 4));
          switch((unsigned int)puVar6) {
          case (unsigned int)0x0:
          case (unsigned int)0x1:
            break;
          case (unsigned int)0x2:
            if (temp_v10 != 0) {
              temp_v16 = 1;
            }
            break;
          case (unsigned int)0xfffffffe:
            return 0x12;
          case (unsigned int)0xffffffff:
            if (temp_v10 == 0) {
              return 8;
            }
            temp_v16 = 1;
            break;
          default:
            return 0xff;
          }
        }
        else if (temp_v10 != 0) {
          temp_v16 = 1;
          break;
        }
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 4);
  temp_v8 = (int *)(unsigned int)*(unsigned char *)(param_4 + 6);
  uStack_c8 = *(unsigned int *)(param_1 + 0x10);
  temp_v10 = *(unsigned int *)(param_1 + 0x14);
  temp_v9 = (int)*(char *)((int)param_4 + 0x19);
  FUN_00460824(temp_v33,*(unsigned int *)(param_1 + 0xf0),temp_v28,param_1 + 8);
  if (param_5 == 0) {
    temp_v31 = 1;
  }
  else {
    temp_v5 = temp_v4;
    if (param_5 != 1) {
      temp_v5 = 0;
    }
    temp_v31 = 0;
    if (param_5 != 1) {
      param_6 = temp_v5;
    }
  }
  temp_v32 = param_6;
  temp_v30 = temp_v26;
  if (temp_v16 != 0) {
    temp_v9 = *(unsigned int *)(temp_v33 + 0x10);
    temp_v8 = temp_v11;
    FUN_004658c0(temp_v11 + 8,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 0x110),
                 &temp_v29);
    FUN_004606d8(temp_v33,temp_v11 + 8,&temp_v30);
  }
  else {
    temp_v12 = temp_v11[1];
    temp_v16 = temp_v25[0];
    temp_v20 = temp_v27[0];
    temp_v13 = temp_v11[3];
    temp_v17 = temp_v25[2];
    temp_v21 = temp_v27[1];
    temp_v14 = temp_v11[5];
    temp_v18 = temp_v25[4];
    temp_v22 = temp_v27[2];
    temp_v15 = temp_v11[7];
    temp_v19 = temp_v25[6];
    temp_v23 = temp_v27[3];
    temp_v11[8] = temp_v7;
    FUN_0046089c(temp_v33,temp_v11 + 8,&temp_v30);
  }
  return 0;
}

} /* extern "C" */
