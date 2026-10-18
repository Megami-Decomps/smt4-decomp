/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b2e50` (_code @ 0x4b2e50, 0xbfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_3_stack;

extern unsigned int DAT_00588c4c; /* 0x588c4c */
extern unsigned int DAT_00588c50; /* 0x588c50 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001634b4. */
extern int FUN_001654d8(int);
extern int FUN_001654e4(int);
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_0035ae58. */
extern int FUN_003e4940(void);
extern int FUN_003e4cb4(void);
/* Supplied declaration required: FUN_003e503c. */
/* Supplied declaration required: FUN_004b3a4c. */
/* Supplied declaration required: FUN_004b5db8. */


void FUN_004b2e50(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  char *pcVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned short temp_v5;
  int temp_v6;
  char *pcVar9;
  int temp_v7;
  char temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int *piVar14;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned int in_fpscr;
  char acStack_70 [24];
  char acStack_58 [12];
  int temp_v14;
  int temp_v15;
  int iStack_30;
  int temp_v16;
  int temp_v17;
  
  iStack_30 = param_1;
  temp_v16 = param_2;
  temp_v17 = param_3;
  temp_v14 = FUN_001ab888();
  FUN_001835b4(2,0x1d,0x159,param_2,param_3,0x6a);
  FUN_001835b4(2,0x1d,0x180,param_2,param_3,0x6b);
  FUN_001835b4(2,0x1d,0x181,param_2,param_3,0x6b);
  FUN_001835b4(2,0x1d,0x15a,param_2,param_3,0x6a);
  FUN_001835b4(2,0x1d,0x182,param_2,param_3,0x6b);
  FUN_001835b4(2,0x1d,0x183,param_2,param_3,0x6b);
  temp_v1 = FUN_001834a4(0x1d,0x7d3);
  FUN_001835b4(2,0x1d,0x7d2,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,0x6a);
  temp_v1 = FUN_001834a4(0x1d,0x7d5);
  FUN_001835b4(2,0x1d,0x7d4,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,0x6a);
  temp_v1 = temp_v14;
  temp_v7 = 0x18;
  pcVar3 = (char *)(temp_v14 + 0x1c88);
  pcVar9 = acStack_70;
  do {
    temp_v0 = *pcVar3;
    temp_v8 = '\0';
    if ((((-1 < temp_v0) &&
         ((*(char *)(temp_v1 + 0x1ca0) < '\0' || (*(char *)(temp_v1 + 0x1ca0) != temp_v0)))) &&
        ((*(char *)(temp_v1 + 0x1ca1) < '\0' || (*(char *)(temp_v1 + 0x1ca1) != temp_v0)))) &&
       ((*(char *)(temp_v1 + 0x1ca2) < '\0' || (*(char *)(temp_v1 + 0x1ca2) != temp_v0)))) {
      temp_v8 = '\x01';
    }
    temp_v7 = temp_v7 - 1;
    *pcVar9 = temp_v8;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  } while (temp_v7 != 0);
  temp_v9 = 0;
  do {
    acStack_58[temp_v9] = '\0';
    FUN_003e503c(temp_v9 & 0xffff);
    temp_v1 = FUN_003e4940();
    if (temp_v1 != 0) {
      acStack_58[temp_v9] = '\x01';
    }
    temp_v9 = temp_v9 + 1;
  } while ((int)temp_v9 < 0xc);
  temp_v15 = param_1 + 0x4134;
  temp_v1 = 0;
  do {
    temp_v11 = temp_v17;
    temp_v12 = temp_v16;
    temp_v7 = DAT_0059dbb4;
    temp_v13 = 0;
    if (temp_v1 != 7) {
      if (temp_v1 != 2) {
        if (temp_v1 != 4) {
          if (temp_v1 == 6) {
            DAT_00588c4c = FUN_001834a4(0x1d,0x5f);
          }
        }
        else {
          DAT_00588c4c = FUN_001834a4(0x1d,0x15f);
          DAT_00588c50 = 0;
        }
      }
      else {
        DAT_00588c4c = FUN_001834a4(0x1d,100);
        DAT_00588c50 = 0;
      }
    }
    else {
      temp_v2 = FUN_00169294(6,1,0);
      piVar14 = (int *)(temp_v7 + 0x12b8);
      temp_v3 = piVar14[*piVar14 + 2];
      piVar14[*piVar14 + 2] = temp_v2;
      if (*(char *)(temp_v7 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
        (**(romwright_code **)(temp_v7 + 0x12d4))();
        *(unsigned char *)(temp_v7 + 0x12d0) = 0;
      }
    }
    temp_v7 = 0;
    do {
      if (acStack_70[temp_v7] != '\0') {
        temp_v2 = temp_v14 + temp_v7;
        temp_v0 = *(char *)(temp_v2 + 0x1c88);
        temp_v3 = param_1 + ((int)(temp_v13 + ((unsigned int)(temp_v13 >> 0x1f) >> 0x1e)) >> 2) * 0x8c;
        temp_v4 = FUN_001654d8(temp_v3 + 0xac);
        temp_v12 = temp_v12 + temp_v4;
        temp_v3 = FUN_001654e4(temp_v3 + 0xac);
        temp_v11 = temp_v11 + temp_v3;
        temp_v3 = param_1 + (temp_v0 + 1) * 0x28;
        FUN_004b3a4c(param_1,temp_v1,(int)*(char *)(temp_v2 + 0x1c88),temp_v13,temp_v12,temp_v11,
                     (int)*(short *)(temp_v3 + 0x7888),(int)*(char *)(temp_v3 + 0x788e),
                     (int)*(short *)(temp_v3 + 0x788a),(int)*(short *)(temp_v3 + 0x7890));
        if ((temp_v1 == 8) && (*(char *)(param_1 + temp_v7 + 0x753f) != '\0')) {
          temp_v3 = FUN_001834a4(0x1d,temp_v13 + 0x68);
          temp_v4 = FUN_001834a4(0x1d,0x167);
          temp_v2 = temp_v15;
          temp_v10 = (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + temp_v11;
          temp_v3 = (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v12;
          if (*(char *)(temp_v15 + 0x8a) == '\0') {
            temp_v4 = FUN_001654d8(temp_v15);
            temp_v3 = temp_v4 + temp_v3;
            temp_v2 = FUN_001654e4(temp_v2);
            temp_v10 = temp_v10 + temp_v2;
          }
          FUN_001835b4(2,0x11,0xb5,temp_v3,temp_v10,0x79);
          temp_v2 = 0;
          do {
            FUN_001677c0();
            FUN_001835b4(2,0x11,temp_v2 + 0xb8,temp_v3,temp_v10,temp_v2 + 0x7e);
            FUN_001677c0();
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 3);
        }
        temp_v13 = temp_v13 + 1;
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 0x18);
    if (temp_v1 == 2) {
      FUN_00183bb0();
    }
    temp_v7 = 0;
    temp_v9 = 0;
    do {
      if (acStack_58[temp_v9] != '\0') {
        FUN_003e503c(temp_v9 & 0xffff);
        temp_v13 = FUN_003e4cb4();
        if (temp_v13 == 0) {
          temp_v2 = param_1 + ((int)(temp_v7 + ((unsigned int)(temp_v7 >> 0x1f) >> 0x1e)) >> 2) * 0x8c;
          temp_v13 = FUN_001654d8(temp_v2 + 0x3f4);
          temp_v12 = temp_v12 + temp_v13;
          temp_v13 = FUN_001654e4(temp_v2 + 0x3f4);
          temp_v11 = temp_v11 + temp_v13;
          temp_v13 = param_1 + (temp_v9 + 0x19) * 0x28;
          FUN_004b5db8(param_1,temp_v1,temp_v9,temp_v7,temp_v12,temp_v11,(int)*(short *)(temp_v13 + 0x7888),
                       (int)*(char *)(temp_v13 + 0x788e),(int)*(short *)(temp_v13 + 0x788a),
                       (int)*(short *)(temp_v13 + 0x7890));
          temp_v7 = temp_v7 + 1;
        }
      }
      temp_v13 = DAT_0059dbb4;
      temp_v9 = temp_v9 + 1;
    } while ((int)temp_v9 < 0xc);
    if (!(temp_v1 == 2 || temp_v1 == 4)) {
      if (temp_v1 == 7) {
        temp_v7 = FUN_00169294(6,7,0);
        piVar14 = (int *)(temp_v13 + 0x12b8);
        temp_v12 = piVar14[*piVar14 + 2];
        piVar14[*piVar14 + 2] = temp_v7;
        if (*(char *)(temp_v13 + 0x12d0) != '\0' || temp_v12 != temp_v7) {
          (**(romwright_code **)(temp_v13 + 0x12d4))();
          *(unsigned char *)(temp_v13 + 0x12d0) = 0;
        }
        FUN_001677c0();
      }
    }
    else {
      FUN_00183bb0();
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 9);
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v1 = temp_v17;
  temp_v7 = temp_v16;
  do {
    if (acStack_70[temp_v12] != '\0') {
      temp_v4 = *(char *)(temp_v14 + temp_v12 + 0x1c88) + 1;
      temp_v13 = FUN_001ab854();
      temp_v3 = param_1 + ((int)(temp_v11 + ((unsigned int)(temp_v11 >> 0x1f) >> 0x1e)) >> 2) * 0x8c;
      temp_v2 = FUN_001654d8(temp_v3 + 0xac);
      temp_v7 = temp_v7 + temp_v2;
      temp_v2 = FUN_001654e4(temp_v3 + 0xac);
      temp_v1 = temp_v1 + temp_v2;
      temp_v2 = param_1 + temp_v4 * 0x28;
      temp_v3 = temp_v2 + 0x7800;
      if (*(char *)(temp_v2 + 0x788e) != '\0') {
        temp_v2 = FUN_001834a4(0x1d,temp_v11 + 0x68);
        temp_v13 = DAT_0059dbb4;
        piVar14 = (int *)(DAT_0059dbb4 + 0x1318);
        temp_v10 = piVar14[*piVar14 + 2];
        piVar14[*piVar14 + 2] = 3;
        if (*(char *)(temp_v13 + 0x1330) != '\0' || temp_v10 != 3) {
          (**(romwright_code **)(temp_v13 + 0x1334))();
          *(unsigned char *)(temp_v13 + 0x1330) = 0;
        }
        FUN_0035ae58(*(short *)(temp_v2 + 8) + temp_v7,*(short *)(temp_v2 + 10) + temp_v1,
                     (int)**(short **)(temp_v2 + 0xc),(int)(*(short **)(temp_v2 + 0xc))[1],1);
        temp_v13 = DAT_0059dbb4;
        temp_v10 = FUN_00169294(6,1,0);
        piVar14 = (int *)(temp_v13 + 0x12b8);
        temp_v6 = piVar14[*piVar14 + 2];
        piVar14[*piVar14 + 2] = temp_v10;
        if (*(char *)(temp_v13 + 0x12d0) != '\0' || temp_v6 != temp_v10) {
          (**(romwright_code **)(temp_v13 + 0x12d4))();
          *(unsigned char *)(temp_v13 + 0x12d0) = 0;
        }
        FUN_001634b4(param_1 + temp_v4 * 0x8c + 0x24c4);
        temp_v13 = DAT_0059dbb4;
        temp_v4 = FUN_00169294(6,7,0);
        piVar14 = (int *)(temp_v13 + 0x12b8);
        temp_v10 = piVar14[*piVar14 + 2];
        piVar14[*piVar14 + 2] = temp_v4;
        if (*(char *)(temp_v13 + 0x12d0) != '\0' || temp_v10 != temp_v4) {
          (**(romwright_code **)(temp_v13 + 0x12d4))();
          *(unsigned char *)(temp_v13 + 0x12d0) = 0;
        }
        temp_v13 = DAT_0059dbb4;
        piVar14 = (int *)(DAT_0059dbb4 + 0x1318);
        temp_v4 = piVar14[*piVar14 + 2];
        piVar14[*piVar14 + 2] = 0;
        if (*(char *)(temp_v13 + 0x1330) != '\0' || temp_v4 != 0) {
          (**(romwright_code **)(temp_v13 + 0x1334))();
          *(unsigned char *)(temp_v13 + 0x1330) = 0;
        }
        temp_v13 = (int)*(short *)(temp_v3 + 0x8c);
        temp_v3 = temp_v13 * -2 + 0xc;
        if (temp_v3 < 0) {
          temp_v3 = 0;
        }
        if (temp_v13 < 8) {
          VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_001677c0();
        }
        FUN_001835b4(2,0x1d,99,*(short *)(temp_v2 + 8) + temp_v7,
                     (int)*(short *)(temp_v2 + 10) + temp_v1 + temp_v3,0xce);
        FUN_001677c0();
      }
      else if ((0 < *(short *)(temp_v2 + 0x788a)) ||
              ((int)*(short *)(temp_v2 + 0x7890) < (int)(unsigned int)*(unsigned short *)(temp_v13 + 100))) {
        temp_v13 = FUN_001834a4(0x1d,temp_v11 + 0x68);
        FUN_001835b4(2,0x1d,99,*(short *)(temp_v13 + 8) + temp_v7,*(short *)(temp_v13 + 10) + temp_v1,0xce)
        ;
      }
      temp_v11 = temp_v11 + 1;
    }
    temp_v12 = temp_v12 + 1;
  } while (temp_v12 < 0x18);
  temp_v12 = 0;
  temp_v9 = 0;
  do {
    if (acStack_58[temp_v9] != '\0') {
      temp_v5 = temp_v9;
      FUN_003e503c();
      temp_v11 = FUN_003e4cb4();
      if (temp_v11 == 0) {
        temp_v13 = param_1 + ((int)(temp_v12 + ((unsigned int)(temp_v12 >> 0x1f) >> 0x1e)) >> 2) * 0x8c;
        temp_v11 = FUN_001654d8(temp_v13 + 0x3f4);
        temp_v7 = temp_v7 + temp_v11;
        temp_v11 = FUN_001654e4(temp_v13 + 0x3f4);
        temp_v1 = temp_v1 + temp_v11;
        temp_v11 = param_1 + (temp_v9 + 0x19) * 0x28;
        temp_v13 = temp_v11 + 0x7800;
        if (*(char *)(temp_v11 + 0x788e) != '\0') {
          temp_v2 = FUN_001834a4(0x1d,temp_v12 + 0x152);
          temp_v11 = DAT_0059dbb4;
          piVar14 = (int *)(DAT_0059dbb4 + 0x1318);
          temp_v3 = piVar14[*piVar14 + 2];
          piVar14[*piVar14 + 2] = 3;
          if (*(char *)(temp_v11 + 0x1330) != '\0' || temp_v3 != 3) {
            (**(romwright_code **)(temp_v11 + 0x1334))();
            *(unsigned char *)(temp_v11 + 0x1330) = 0;
          }
          FUN_0035ae58(*(short *)(temp_v2 + 8) + temp_v7,*(short *)(temp_v2 + 10) + temp_v1,
                       (int)**(short **)(temp_v2 + 0xc),(int)(*(short **)(temp_v2 + 0xc))[1],1);
          temp_v11 = DAT_0059dbb4;
          temp_v3 = FUN_00169294(6,1,0);
          piVar14 = (int *)(temp_v11 + 0x12b8);
          temp_v4 = piVar14[*piVar14 + 2];
          piVar14[*piVar14 + 2] = temp_v3;
          if (*(char *)(temp_v11 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
            (**(romwright_code **)(temp_v11 + 0x12d4))();
            *(unsigned char *)(temp_v11 + 0x12d0) = 0;
          }
          FUN_001634b4(param_1 + (temp_v9 + 0x19) * 0x8c + 0x24c4);
          temp_v11 = DAT_0059dbb4;
          temp_v3 = FUN_00169294(6,7,0);
          piVar14 = (int *)(temp_v11 + 0x12b8);
          temp_v4 = piVar14[*piVar14 + 2];
          piVar14[*piVar14 + 2] = temp_v3;
          if (*(char *)(temp_v11 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
            (**(romwright_code **)(temp_v11 + 0x12d4))();
            *(unsigned char *)(temp_v11 + 0x12d0) = 0;
          }
          temp_v11 = DAT_0059dbb4;
          piVar14 = (int *)(DAT_0059dbb4 + 0x1318);
          temp_v3 = piVar14[*piVar14 + 2];
          piVar14[*piVar14 + 2] = 0;
          if (*(char *)(temp_v11 + 0x1330) != '\0' || temp_v3 != 0) {
            (**(romwright_code **)(temp_v11 + 0x1334))();
            *(unsigned char *)(temp_v11 + 0x1330) = 0;
          }
          temp_v11 = (int)*(short *)(temp_v13 + 0x8c);
          temp_v13 = temp_v11 * -2 + 0xc;
          if (temp_v13 < 0) {
            temp_v13 = 0;
          }
          if (temp_v11 < 8) {
            VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_001677c0();
          }
          FUN_001835b4(2,0x1d,99,*(short *)(temp_v2 + 8) + temp_v7,
                       temp_v1 + temp_v13 + (int)*(short *)(temp_v2 + 10),0xce);
          FUN_001677c0();
        }
        else if ((0 < *(short *)(temp_v11 + 0x788a)) ||
                ((int)*(short *)(temp_v11 + 0x7890) < (int)(unsigned int)*(unsigned short *)(temp_v5 + 100))) {
          temp_v11 = FUN_001834a4(0x1d,temp_v12 + 0x152);
          FUN_001835b4(2,0x1d,99,*(short *)(temp_v11 + 8) + temp_v7,*(short *)(temp_v11 + 10) + temp_v1,
                       0xce);
        }
        temp_v12 = temp_v12 + 1;
      }
    }
    temp_v9 = temp_v9 + 1;
  } while ((int)temp_v9 < 0xc);
  return;
}
