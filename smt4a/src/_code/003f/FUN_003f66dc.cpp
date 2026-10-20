/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f66dc` (_code @ 0x3f66dc, 0x3d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001677c0(void);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00344cd0(...);
int FUN_003f6424(...);
int FUN_003f7164(int, unsigned short *, int, unsigned int, int, int, int);

typedef int romwright_code(...);
/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_3_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00344cd0. */
/* Supplied declaration required: FUN_003f6424. */
/* Supplied declaration required: FUN_003f7164. */
extern unsigned long long FUN_003ff190(unsigned short);


void FUN_003f66dc(int param_1,int param_2,int param_3)

{
/* irregular: 9 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar8;
  unsigned short *puVar9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned long long temp_v12;
  unsigned int temp_v13;
  
  FUN_001677c0();
  temp_v10 = 0;
  temp_v6 = temp_v5;
  do {
    temp_v2 = *(int *)(param_1 + temp_v10 * 4 + 0x6c8);
    temp_v11 = temp_v2 == 0;
    if (-1 < temp_v2) {
      temp_v6 = *(int *)(param_1 + 0x6b0);
      temp_v11 = temp_v6 == temp_v2;
    }
    if ((!temp_v11 && (-1 < temp_v2 && temp_v2 <= temp_v6)) &&
       (temp_v3 = (unsigned int)*(unsigned short *)(param_1 + temp_v2 * 2 + 0x5e6), temp_v3 != 0)) {
      puVar9 = (unsigned short *)(*(int *)(param_1 + 0x20) + temp_v3 * 0x34);
      if ((unsigned short)puVar9[1] >> 8 == 10) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = (unsigned short)puVar9[1] & 0xff;
      }
      if (*(int *)(param_1 + 0x44) == temp_v10) {
        temp_v6 = FUN_001834a4(0x31,temp_v10 + 0x91);
        temp_v0 = *(short *)(temp_v6 + 10);
        temp_v2 = *(short *)(temp_v6 + 8) + param_2;
        FUN_001677c0();
        temp_v6 = DAT_0059dbb4;
        temp_v4 = FUN_00169294(6,1,0);
        piVar8 = (int *)(temp_v6 + 0x12b8);
        temp_v7 = piVar8[*piVar8 + 2];
        piVar8[*piVar8 + 2] = temp_v4;
        if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v7 != temp_v4) {
          (**(romwright_code **)(temp_v6 + 0x12d4))();
          *(unsigned char *)(temp_v6 + 0x12d0) = 0;
        }
        temp_v6 = 0;
        do {
          FUN_001835b4(2,0x31,temp_v6 + 0x8c,temp_v2,temp_v0 + param_3,0x83);
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 4);
        FUN_001677c0();
        temp_v6 = DAT_0059dbb4;
        temp_v2 = FUN_00169294(6,7,0);
        piVar8 = (int *)(temp_v6 + 0x12b8);
        temp_v4 = piVar8[*piVar8 + 2];
        piVar8[*piVar8 + 2] = temp_v2;
        if (*(char *)(temp_v6 + 0x12d0) != '\0' || temp_v4 != temp_v2) {
          (**(romwright_code **)(temp_v6 + 0x12d4))();
          *(unsigned char *)(temp_v6 + 0x12d0) = 0;
        }
        FUN_001677c0();
        temp_v6 = FUN_001834a4(0x31,temp_v10 + 0x88);
        temp_v0 = *(short *)(temp_v6 + 10);
        temp_v2 = *(short *)(temp_v6 + 8) + param_2;
        FUN_003f7164(param_1,puVar9,temp_v10,temp_v3,param_2,param_3,0x8d);
        temp_v13 = 0x87;
        temp_v12 = FUN_003ff190(*puVar9);
        temp_v6 = (int)((unsigned long long)temp_v12 >> 0x20);
        if ((int)temp_v12 != 0) {
          temp_v6 = FUN_001834a4(0x31,temp_v13);
          temp_v1 = *(short *)(temp_v6 + 10);
          temp_v2 = temp_v2 + *(short *)(temp_v6 + 8);
          FUN_001677c0();
          temp_v4 = 0;
          do {
            FUN_001835b4(2,0x31,temp_v4 + 0x9d,temp_v2,(int)temp_v1 + temp_v0 + param_3,temp_v4 + 0x97);
            temp_v4 = temp_v4 + 1;
            temp_v6 = temp_v8;
          } while (temp_v4 < 3);
        }
      }
      else {
        temp_v6 = FUN_001834a4(0x31,temp_v10 + 0x88);
        temp_v2 = *(short *)(temp_v6 + 8) + param_2;
        temp_v4 = *(short *)(temp_v6 + 10) + param_3;
        FUN_003f6424(param_1,puVar9,temp_v3,temp_v2,temp_v4,0x8d);
        temp_v13 = 0x87;
        temp_v12 = FUN_003ff190(*puVar9);
        temp_v6 = (int)((unsigned long long)temp_v12 >> 0x20);
        if ((int)temp_v12 != 0) {
          temp_v6 = FUN_001834a4(0x31,temp_v13);
          temp_v0 = *(short *)(temp_v6 + 10);
          temp_v2 = temp_v2 + *(short *)(temp_v6 + 8);
          FUN_001677c0();
          temp_v7 = 0;
          do {
            FUN_001835b4(2,0x31,temp_v7 + 0x9d,temp_v2,temp_v0 + temp_v4,temp_v7 + 0x97);
            temp_v7 = temp_v7 + 1;
            temp_v6 = temp_v9;
          } while (temp_v7 < 3);
        }
      }
    }
    temp_v10 = temp_v10 + 1;
  } while (temp_v10 < 4);
  FUN_001677c0();
  FUN_001835b4(2,0x31,0x9a,param_2,param_3,0x83);
  FUN_00344cd0(param_1 + 0x58,param_2,param_3,0x31,0x99,0x9b,0x9c,0x95,0x96,0x97,0x98,
               (int)*(short *)(param_1 + 0x146),(int)*(short *)(param_1 + 0x142),
               (int)*(short *)(param_1 + 0x144),0x6a,0);
  FUN_001677c0();
  return;
}

} /* extern "C" */
