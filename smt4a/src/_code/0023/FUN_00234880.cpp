/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234880` (_code @ 0x234880, 0x2a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152f44(void);
int FUN_0018719c(...);
int dataTableGetCount(unsigned int);
int dataTableGetEntries(void);
int FUN_002d8b58(int, int);
int VectorSignedToFloat(int, int);

extern int *g_popupState; /* 0x58104c */
extern int g_gameState; /* 0x5f15fc */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_00152f44. */
extern int saveSlotFindSelected(void);
extern int FUN_0017760c(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018719c. */
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_001b347c(void);
/* Supplied declaration required: FUN_002d8b58. */
extern int FUN_003e0024(void);
extern int FUN_003e0154(void);


void FUN_00234880(void)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int *puVar13;
  unsigned int temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  
  FUN_00152f44();
  if ((*g_popupState == 0) && (temp_v2 = saveSlotFindSelected(), temp_v2 != 0)) {
    temp_v1 = 0;
    temp_v3 = FUN_0018719c(0x1a2);
    if (((temp_v3 != 0) && (temp_v3 = FUN_0014bef4(99), temp_v3 + 1 < 0x33)) &&
       ((g_gameState == 0x1c || g_gameState == 0x1d ||
        ((g_gameState == 0x1e || g_gameState == 0x1f) || g_gameState == 0x20)))) {
      temp_v1 = 1;
    }
    temp_v3 = FUN_003e0024();
    temp_v4 = FUN_003e0154();
    temp_v5 = FUN_001b347c();
    temp_v6 = FUN_001ab888();
    temp_v10 = 0;
    if (temp_v10 < temp_v5) {
      do {
        if (-1 < *(char *)(temp_v6 + 0x1c88 + temp_v10)) {
          temp_v7 = FUN_001ab854();
          temp_v3 = temp_v3 + *(short *)(temp_v7 + 0x2a);
          temp_v7 = FUN_0017760c();
          temp_v4 = temp_v4 + temp_v7;
        }
        temp_v10 = temp_v10 + 1;
      } while (temp_v10 < temp_v5);
    }
    temp_v12 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v13 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14 = (unsigned long long)(unsigned int)((temp_v12 / temp_v13) * 100.0f);
    temp_v8 = dataTableGet(0x43,0);
    dataTableGetEntries();
    temp_v3 = dataTableGetCount(temp_v8);
    temp_v11 = 0;
    if (0 < temp_v3) {
      do {
        temp_v8 = dataTableGet(0x43,0);
        temp_v4 = dataTableGetEntries();
        temp_v9 = dataTableGetCount(temp_v8);
        puVar13 = (unsigned int *)0x0;
        if (temp_v11 < temp_v9) {
          puVar13 = (unsigned int *)(temp_v4 + temp_v11 * 0x20);
        }
        if ((((puVar13[1] == 8 || puVar13[1] == 9) && (*puVar13 == (unsigned int)*(unsigned short *)(temp_v2 + 300)))
            && (((short)puVar13[2] == 0 || (temp_v4 = FUN_0018719c(), temp_v4 != 0)))) &&
           ((*(short *)((int)puVar13 + 10) == 0 || (temp_v4 = FUN_0018719c(), temp_v4 == 0)))) {
          piVar3 = g_popupState;
          temp_v12 = (float)VectorSignedToFloat((int)(short)puVar13[3],(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v13 = (float)temp_v14;
          if (puVar13[1] != 8) {
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 == temp_v12) << 0x1e) |
                       ((unsigned int)(temp_v12 <= temp_v13) << 0x1d);
            temp_v0 = (unsigned char)(in_fpscr >> 0x18);
            if (!(unsigned char)((temp_v0 >> 5) & 1) || (unsigned char)(temp_v0 >> 6)) {
              *g_popupState = 5;
              piVar3[1] = 0;
              if (temp_v1) {
                temp_v2 = FUN_002d8b58(9,0xad);
                g_popupState[5] = temp_v2;
                return;
              }
              temp_v2 = FUN_002d8b58(9,*(unsigned short *)(temp_v2 + 300));
              g_popupState[5] = temp_v2;
              return;
            }
          }
          else {
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 == temp_v13) << 0x1e) |
                       ((unsigned int)(temp_v13 <= temp_v12) << 0x1d);
            temp_v0 = (unsigned char)(in_fpscr >> 0x18);
            if (!(unsigned char)((temp_v0 >> 5) & 1) || (unsigned char)(temp_v0 >> 6)) {
              *g_popupState = 5;
              piVar3[1] = 0;
              if (temp_v1) {
                temp_v2 = FUN_002d8b58(8,0xad);
                g_popupState[5] = temp_v2;
                return;
              }
              temp_v2 = FUN_002d8b58(8,*(unsigned short *)(temp_v2 + 300));
              g_popupState[5] = temp_v2;
              return;
            }
          }
        }
        temp_v11 = temp_v11 + 1;
      } while ((int)temp_v11 < temp_v3);
      return;
    }
  }
  return;
}

} /* extern "C" */
