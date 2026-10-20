/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e5c10` (_code @ 0x4e5c10, 0x310 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e8bb0(unsigned char [2], int, unsigned int);
int FUN_004a9308(...);
int FUN_004c9160(...);
int FUN_004c9220(int, unsigned int);
int FUN_004e0114(...);
int FUN_004e5b5c(int *);
int FUN_004e7c04(int *, int);
int FUN_004e8454(int *);
int FUN_004e933c(int *, unsigned int *);
int FUN_004e9f74(int *, int, int);
int FUN_004eb838(int *, unsigned int *);
int FUN_004fd508(...);

/* stack frame of param_2: 5 slot(s), 15 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned short sp56; /* 0x56: local_56 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_2_stack;

extern int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571170; /* 0x571170 */
extern unsigned int DAT_00571174; /* 0x571174 */
extern unsigned int g_btlUiBlock; /* 0x57a9c8 */

extern int lcgRandomRange(unsigned int);
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_004a9308. */
/* Supplied declaration required: FUN_004c9160. */
/* Supplied declaration required: FUN_004c9220. */
/* Supplied declaration required: FUN_004e0114. */
/* Supplied declaration required: FUN_004e5b5c. */
/* Supplied declaration required: FUN_004e7c04. */
/* Supplied declaration required: FUN_004e8454. */
/* Supplied declaration required: FUN_004e933c. */
/* Supplied declaration required: FUN_004e9f74. */
/* Supplied declaration required: FUN_004eb838. */
/* Supplied declaration required: FUN_004fd508. */


void FUN_004e5c10(int *param_1,unsigned int *param_2)

{
/* irregular: 1 goto(s); 12 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [2];
  short temp_v7;
  char temp_v8;
  
  temp_v1 = lcgRandomRange(99);
  FUN_004e8454(param_1);
  if ((temp_v1 >= 10) || (piVar3 = param_1, FUN_004e933c(param_1,param_2), piVar3 == (int *)0x0)) {
    if (temp_v1 < 0x28) {
      temp_v0 = (*(unsigned int *)param_2[8] & DAT_00571168) != 0 ||
              (((unsigned int *)param_2[8])[1] & DAT_0057116c) != 0;
      FUN_004e7c04(param_1,temp_v0);
      temp_v2 = param_2[10];
      *(unsigned short *)(temp_v2 + 0x1be) = 1;
      FUN_003e8bb0(temp_v6,*param_1,param_2[8]);
      if (temp_v7 == 1) {
        *(unsigned short *)(temp_v2 + 0x1c0) = 2;
      }
      else {
        *(unsigned short *)(temp_v2 + 0x1c0) = 1;
      }
      if (temp_v8 != '\0') {
        if (temp_v8 != '\x01') {
          if (temp_v8 == '\x02') {
            FUN_004e9f74(param_1,temp_v0,2);
          }
        }
        else {
          FUN_004e9f74(param_1,temp_v0,1);
        }
      }
      else {
        FUN_004e5b5c(param_1);
      }
      temp_v1 = 0;
      temp_v4 = 0x6d;
      do {
        temp_v4 = temp_v4 - 1;
        temp_v5 = temp_v1 * 0x1d0 + 0x50;
        temp_v1 = temp_v1 + 1;
        temp_v2 = *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v5);
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v5) = temp_v2 & 0xfffffffb;
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v5) = temp_v2 & 0xfffffff3;
      } while (temp_v4 != 0);
      FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0,0x1e,0x1e);
      FUN_004eb838(param_1,param_2);
      *(unsigned char *)((int)param_2 + 0x59d) = 1;
      if (temp_v8 == '\0') {
        temp_v1 = 0;
        do {
          if (*(char *)((int)param_2 + temp_v1 + 0x38) != '\0') {
            temp_v2 = param_2[8];
            if (temp_v2 == *(int *)(*param_1 + 0x1ffc) + temp_v1 * 0x408) {
              temp_v3 = 0x2b;
              goto LAB_004e5e18;
            }
            break;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 0x6d);
        FUN_004c9220(0x2a,param_2[8]);
      }
      else {
        temp_v2 = param_2[8];
        temp_v3 = 0x2c;
LAB_004e5e18:
        FUN_004c9160(temp_v3,temp_v2,0,1);
      }
    }
    else {
      if ((*param_2 & 0x1080) == 0) {
        temp_v3 = 0x32;
      }
      else {
        temp_v3 = 0;
      }
      FUN_004c9160(9,param_2[8],0,1);
      FUN_004fd508(temp_v3,param_2,0,param_2[9],1);
      FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0,0x1e,0x1e);
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x1d;
    }
  }
  if (((DAT_0057116c | DAT_00571174) & ((unsigned int *)param_2[8])[1]) != 0 ||
      ((DAT_00571168 | DAT_00571170) & *(unsigned int *)param_2[8]) != 0) {
    return;
  }
  FUN_004a9308(g_btlUiBlock,(short)param_2[0xb],0);
  return;
}

} /* extern "C" */
