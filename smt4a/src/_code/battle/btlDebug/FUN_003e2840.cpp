/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e2840` (_code @ 0x3e2840, 0x23c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(int [50], int, int, unsigned char *);
int FUN_001568f8(int, int);
int FUN_004cae0c(int, int, int, int, int);
int reflectActionSetScalarPayload(...);
int FUN_004fd204(int, unsigned int, int, int, int, int);
int FUN_004fdcd8(int, unsigned int, int, int, int, int, int, int);

/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
} param_3_stack;

extern unsigned char LAB_00221a94; /* 0x221a94 */
extern unsigned int DAT_0057a634; /* 0x57a634 */
extern unsigned int DAT_0057a638; /* 0x57a638 */
extern unsigned int DAT_0057a63c; /* 0x57a63c */
extern unsigned int DAT_0057a640; /* 0x57a640 */
extern unsigned int DAT_0057a644; /* 0x57a644 */
extern unsigned int DAT_0057a648; /* 0x57a648 */
extern unsigned int DAT_0057a64c; /* 0x57a64c */

/* Supplied declaration required: qsort. */
/* Supplied declaration required: FUN_001568f8. */
extern int pairedEntryTableContains(int, unsigned short);
/* Supplied declaration required: FUN_004cae0c. */
/* Supplied declaration required: reflectActionSetScalarPayload. */
/* Supplied declaration required: FUN_004fd204. */
/* Supplied declaration required: FUN_004fdcd8. */


void FUN_003e2840(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  short temp_v7;
  short temp_v8;
  int temp_v9;
  short temp_v10;
  int aiStack_100 [50];
  int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  int iStack_28;
  
  temp_v4 = 4;
  temp_v6 = 0;
  temp_v13 = param_1;
  temp_v14 = param_2;
  iStack_28 = param_3;
  do {
    temp_v2 = *(int *)(param_2 + 0x1ed4) + temp_v4 * 0x1d0;
    if (((*(unsigned int *)(temp_v2 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v2 + 0x50) & 2) != 0) &&
       ((*(unsigned int *)(temp_v2 + 0x58) & 8) != 0)) {
      aiStack_100[temp_v6] = temp_v2;
      temp_v6 = temp_v6 + 1;
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x36);
  qsort(aiStack_100,temp_v6,4,&LAB_00221a94);
  temp_v4 = 0;
  temp_v7 = 0;
  if (param_3 == 3) {
    temp_v4 = 0xc;
  }
  temp_v8 = 0;
  temp_v2 = 0;
  if (temp_v2 < temp_v6) {
    do {
      temp_v5 = aiStack_100[temp_v2];
      if ((((*(unsigned int *)(temp_v5 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v5 + 0x50) & 2) != 0) &&
          ((*(unsigned int *)(temp_v5 + 0x58) & 8) != 0)) &&
         (*(unsigned int *)(temp_v5 + 0x58) = *(unsigned int *)(temp_v5 + 0x58) & 0xfffffff7,
         (*(unsigned short *)(temp_v5 + 0x60) & 0x800) == 0)) {
        temp_v3 = temp_v14;
        FUN_001568f8(temp_v14,(int)*(short *)(temp_v5 + 0x6a));
        temp_v3 = pairedEntryTableContains(temp_v14,*(unsigned short *)(temp_v3 + 2));
        if (temp_v3 == 0) {
          *(unsigned short *)(temp_v5 + 0x60) = *(unsigned short *)(temp_v5 + 0x60) | 0x800;
          if ((*(unsigned int *)(temp_v5 + 0x50) & 0x10) != 0) {
            temp_v10 = (short)DAT_0057a640;
            temp_v0 = (short)DAT_0057a644;
            temp_v1 = (short)DAT_0057a648;
          }
          else {
            temp_v0 = (short)DAT_0057a638;
            temp_v10 = (short)DAT_0057a634;
            temp_v1 = (short)DAT_0057a63c;
          }
          temp_v11 = (int)temp_v0;
          temp_v3 = (int)(short)DAT_0057a64c;
          temp_v9 = (int)temp_v1;
          FUN_004cae0c(temp_v14,temp_v5,0,0,temp_v9);
          temp_v12 = (int)temp_v7 * (int)temp_v10 + temp_v3;
          temp_v3 = temp_v11 + temp_v4;
          temp_v11 = temp_v12;
          FUN_004fd204(temp_v3 + temp_v12,temp_v13,temp_v5,0xff,temp_v9,0);
          FUN_004fdcd8(temp_v12,temp_v13,0,(int)*(short *)(temp_v5 + 0x6a),7,0,0xe,0);
          if ((param_3 != 4) || (temp_v8 < 3)) {
            reflectActionSetScalarPayload(temp_v11,temp_v13,0x1000218,(int)*(short *)(temp_v5 + 0x6a),
                         (int)*(short *)(temp_v5 + 0x6a),0xe);
          }
          temp_v7 = temp_v7 + 1;
          temp_v8 = temp_v8 + 1;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v6);
  }
  return;
}

} /* extern "C" */
