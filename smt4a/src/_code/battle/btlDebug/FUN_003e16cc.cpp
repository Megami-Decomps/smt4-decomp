/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e16cc` (_code @ 0x3e16cc, 0x344 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(int [50], int, int, unsigned char *);
int FUN_001568f8(int, int);
int FUN_003e0cd4(...);
int FUN_003ed6e8(int);
int FUN_003f26d4(...);
int FUN_004aa2e0(...);
int FUN_004cae0c(int, int, int, int, int);
int FUN_004f1c5c(...);
int FUN_004f9450(void);
int FUN_004fb43c(int, unsigned int *, int, int, int, int, int);
int FUN_004fd204(int, unsigned int *, int, int, int, int);
int FUN_004fe764(int, unsigned int *, int, unsigned int, int);

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
} param_2_stack;

extern unsigned char LAB_00221a94; /* 0x221a94 */
extern int g_btlCamera; /* 0x571508 */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_00573858; /* 0x573858 */
extern unsigned int DAT_0057385c; /* 0x57385c */
extern unsigned int DAT_00573878; /* 0x573878 */
extern unsigned int DAT_0057387c; /* 0x57387c */
extern unsigned int DAT_00573890; /* 0x573890 */
extern unsigned int DAT_00573894; /* 0x573894 */
extern unsigned int DAT_0057a634; /* 0x57a634 */
extern unsigned int DAT_0057a638; /* 0x57a638 */
extern unsigned int DAT_0057a63c; /* 0x57a63c */
extern unsigned int DAT_0057a640; /* 0x57a640 */
extern unsigned int DAT_0057a644; /* 0x57a644 */
extern unsigned int DAT_0057a648; /* 0x57a648 */
extern unsigned int DAT_0057a64c; /* 0x57a64c */
extern unsigned int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: qsort. */
/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: FUN_003e0cd4. */
/* Supplied declaration required: FUN_003ed6e8. */
extern int FUN_003f10c8(int, unsigned short);
/* Supplied declaration required: FUN_003f26d4. */
/* Supplied declaration required: FUN_004aa2e0. */
/* Supplied declaration required: FUN_004cae0c. */
/* Supplied declaration required: FUN_004f1c5c. */
extern int FUN_004f8264(int);
/* Supplied declaration required: FUN_004f9450. */
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fd204. */
/* Supplied declaration required: FUN_004fe764. */


void FUN_003e16cc(unsigned int *param_1,int param_2)

{
/* irregular: 12 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int *puVar9;
  int temp_v8;
  short temp_v9;
  int temp_v10;
  int aiStack_f8 [50];
  int temp_v11;
  int temp_v12;
  
  if ((param_1[3] == 0) && ((*(unsigned int *)(DAT_00573808 + 0x339c) & 0x400) != 0)) {
    *(unsigned int *)(g_btlCamera + 0x64c) = *(unsigned int *)(g_btlCamera + 0x64c) | 0x4000;
    FUN_004f9450();
    param_1[3] = param_1[3] | 2;
  }
  if (((param_1[3] & 2) != 0) && (temp_v3 = FUN_004f8264(DAT_00573808), temp_v3 != 0)) {
    temp_v8 = 0;
    temp_v3 = 4;
    do {
      temp_v4 = *(int *)(param_2 + 0x1ed4) + temp_v3 * 0x1d0;
      if (((*(unsigned int *)(temp_v4 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v4 + 0x50) & 2) != 0) &&
         ((*(unsigned int *)(temp_v4 + 0x58) & 8) != 0)) {
        aiStack_f8[temp_v8] = temp_v4;
        temp_v8 = temp_v8 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x36);
    qsort(aiStack_f8,temp_v8,4,&LAB_00221a94);
    temp_v9 = 0;
    temp_v3 = 0;
    temp_v12 = 0;
    if (temp_v3 < temp_v8) {
      do {
        temp_v4 = aiStack_f8[temp_v3];
        if ((((*(unsigned int *)(temp_v4 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v4 + 0x50) & 2) != 0) &&
            ((*(unsigned int *)(temp_v4 + 0x58) & 8) != 0)) &&
           (*(unsigned int *)(temp_v4 + 0x58) = *(unsigned int *)(temp_v4 + 0x58) & 0xfffffff7,
           (*(unsigned short *)(temp_v4 + 0x60) & 0x800) == 0)) {
          temp_v5 = param_2;
          FUN_001568f8(param_2,(int)*(short *)(temp_v4 + 0x6a));
          temp_v5 = FUN_003f10c8(param_2,*(unsigned short *)(temp_v5 + 2));
          if (temp_v5 == 0) {
            *(unsigned short *)(temp_v4 + 0x60) = *(unsigned short *)(temp_v4 + 0x60) | 0x800;
            if ((*(unsigned int *)(temp_v4 + 0x50) & 0x10) != 0) {
              temp_v0 = (short)DAT_0057a640;
              temp_v1 = (short)DAT_0057a644;
              temp_v2 = (short)DAT_0057a648;
            }
            else {
              temp_v1 = (short)DAT_0057a638;
              temp_v0 = (short)DAT_0057a634;
              temp_v2 = (short)DAT_0057a63c;
            }
            temp_v11 = (int)temp_v1;
            temp_v10 = (int)(short)DAT_0057a64c;
            temp_v5 = (int)temp_v2;
            FUN_004cae0c(param_2,temp_v4,0,0,temp_v5);
            FUN_004fd204((int)temp_v9 * (int)temp_v0 + temp_v10 + temp_v11,param_1,temp_v4,0xff,temp_v5,0);
            temp_v7 = 6;
            if ((*(unsigned int *)(temp_v4 + 0x50) & 0x10) != 0) {
              temp_v7 = 7;
            }
            FUN_004fe764((int)temp_v9 * (int)temp_v0 + temp_v10,param_1,temp_v4,temp_v7,0xd);
            if (temp_v12 == 0) {
              FUN_004fb43c((int)temp_v9 * (int)temp_v0,param_1,0x1000276,0,0,0,0);
              temp_v12 = 1;
            }
            temp_v9 = temp_v9 + 1;
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < temp_v8);
    }
    if (*(int *)(g_btlCamera + 0x34) != 0) {
      FUN_004f1c5c();
    }
    else {
      FUN_004f1c5c(g_btlCamera,0x78);
    }
    puVar9 = (unsigned int *)(param_2 + 0x45a0);
    if ((DAT_00573858 & *puVar9) == 0 && (*(unsigned int *)(param_2 + 0x45a4) & DAT_0057385c) == 0) {
      FUN_003ed6e8(param_2);
      FUN_003f26d4(param_2);
      temp_v6 = DAT_0057387c | *(unsigned int *)(param_2 + 0x45a4) | DAT_00573894;
      *puVar9 = DAT_00573878 | *puVar9 | DAT_00573890;
      *(unsigned int *)(param_2 + 0x45a4) = temp_v6;
      FUN_004aa2e0(g_btlUiBlock,0);
    }
    param_1[4] = 0;
    *param_1 = 0x19;
    param_1[3] = 0;
    FUN_003e0cd4(param_1,param_2);
  }
  return;
}

} /* extern "C" */
