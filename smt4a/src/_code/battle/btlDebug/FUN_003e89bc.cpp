/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e89bc` (_code @ 0x3e89bc, 0x1ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(int [50], int, int, unsigned char *);
int FUN_004cae0c(int, int, int, int, int);
int FUN_004f1c5c(int, int);
int FUN_004f9450(unsigned int);
int FUN_004fd204(int, int, int, int, int, int);
int FUN_004fe764(int, int, int, unsigned int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
} param_1_stack;

extern unsigned char LAB_00221b34; /* 0x221b34 */
extern int g_btlCamera; /* 0x571508 */
extern unsigned int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_0057a634; /* 0x57a634 */
extern unsigned int DAT_0057a638; /* 0x57a638 */
extern unsigned int DAT_0057a63c; /* 0x57a63c */
extern unsigned int DAT_0057a640; /* 0x57a640 */
extern unsigned int DAT_0057a644; /* 0x57a644 */
extern unsigned int DAT_0057a648; /* 0x57a648 */
extern unsigned int DAT_0057a64c; /* 0x57a64c */

/* Supplied declaration required: qsort. */
/* Supplied declaration required: FUN_004cae0c. */
/* Supplied declaration required: FUN_004f1c5c. */
/* Supplied declaration required: FUN_004f9450. */
/* Supplied declaration required: FUN_004fd204. */
/* Supplied declaration required: FUN_004fe764. */


void FUN_003e89bc(int param_1)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar8;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  short temp_v10;
  short temp_v11;
  int aiStack_f8 [50];
  int temp_v12;
  int temp_v13;
  
  *(unsigned int *)(g_btlCamera + 0x64c) = *(unsigned int *)(g_btlCamera + 0x64c) | 0x4000;
  temp_v13 = param_1;
  FUN_004f9450(DAT_00573808);
  temp_v9 = 0;
  piVar8 = (int *)(temp_v13 + 0x1ed4);
  temp_v6 = 4;
  do {
    temp_v4 = temp_v6 + 1;
    temp_v6 = *piVar8 + temp_v6 * 0x1d0;
    temp_v7 = *(unsigned int *)(temp_v6 + 0x50);
    if ((temp_v7 & 1) != 0 && (temp_v7 & 2) != 0) {
      aiStack_f8[temp_v9] = temp_v6;
      temp_v9 = temp_v9 + 1;
    }
    temp_v6 = temp_v4;
  } while (temp_v4 < 0x36);
  qsort(aiStack_f8,temp_v9,4,&LAB_00221b34);
  temp_v3 = 0;
  temp_v10 = 0;
  temp_v6 = 0;
  if (temp_v6 < temp_v9) {
    do {
      temp_v4 = aiStack_f8[temp_v6];
      if (((*(unsigned int *)(temp_v4 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v4 + 0x50) & 2) != 0) &&
         ((*(unsigned short *)(temp_v4 + 0x60) & 0x800) == 0)) {
        *(unsigned short *)(temp_v4 + 0x60) = *(unsigned short *)(temp_v4 + 0x60) | 0x800;
        if ((*(unsigned int *)(temp_v4 + 0x50) & 0x10) != 0) {
          temp_v11 = (short)DAT_0057a640;
          temp_v0 = (short)DAT_0057a644;
          temp_v1 = (short)DAT_0057a648;
        }
        else {
          temp_v11 = (short)DAT_0057a634;
          temp_v0 = (short)DAT_0057a638;
          temp_v1 = (short)DAT_0057a63c;
        }
        temp_v2 = (short)DAT_0057a64c;
        temp_v12 = (int)temp_v0;
        temp_v5 = (int)temp_v1;
        FUN_004cae0c(temp_v13,temp_v4,0,0,temp_v5);
        FUN_004fd204((int)temp_v10 * (int)temp_v11 + temp_v12 + temp_v2,0,temp_v4,0xff,temp_v5,0);
        temp_v8 = 6;
        if ((*(unsigned int *)(temp_v4 + 0x50) & 0x10) != 0) {
          temp_v8 = 7;
        }
        FUN_004fe764((int)temp_v10 * (int)temp_v11 + (int)temp_v2,0,temp_v4,temp_v8,0xd);
        temp_v10 = temp_v10 + 1;
        if (!temp_v3) {
          temp_v3 = 1;
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v9);
  }
  FUN_004f1c5c(g_btlCamera,0x78);
  return;
}

} /* extern "C" */
