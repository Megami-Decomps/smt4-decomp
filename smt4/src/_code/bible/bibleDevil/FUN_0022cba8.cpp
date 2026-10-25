/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022cba8` (_code @ 0x22cba8, 0x5d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int digitsDrawAtAreaCorner(...);
int FUN_0022d7b0(...);
int uiDrawScrollingSelectionEntry(...);
int FUN_0022d9c8(...);
int FUN_0022daac(...);
int FUN_0022db94(...);
int FUN_0022dcac(...);
int uiRectDrawAtBottomRight(int, int, int);
int pairCopy(int, float *);
int FUN_00231bcc(int, int, int);
int flaggedEntryGetValueByState(...);
int drawSetColorFromRGBA8(...);
int FUN_002bed3c(void);
int uiMenuAnchorGetOffset(int, float [3]);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned int DAT_0049375c; /* 0x49375c */

/* Supplied declaration required: digitsDrawAtAreaCorner. */
/* Supplied declaration required: FUN_0022d7b0. */
/* Supplied declaration required: uiDrawScrollingSelectionEntry. */
/* Supplied declaration required: FUN_0022d9c8. */
/* Supplied declaration required: FUN_0022daac. */
/* Supplied declaration required: FUN_0022db94. */
/* Supplied declaration required: FUN_0022dcac. */
/* Supplied declaration required: uiRectDrawAtBottomRight. */
/* Supplied declaration required: pairCopy. */
/* Supplied declaration required: FUN_00231bcc. */
extern int flaggedValueHolderGetTotal(int);
extern unsigned long long rangeLimitMin(int);
/* Supplied declaration required: flaggedEntryGetValueByState. */
extern int FUN_0029e924(int);
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: uiMenuAnchorGetOffset. */


/* WARNING: Removing unreachable block (ram,0x0022cf08) */

void FUN_0022cba8(int param_1)

{
/* irregular: 1 goto(s); 23 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned long long temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18 [3];
  
  pairCopy(param_1 + 200,&temp_v16);
  uiMenuAnchorGetOffset(param_1 + 200,temp_v18);
  if (((int)(temp_v16 + temp_v18[0]) < 0x43a00000) && ((unsigned int)(temp_v16 + temp_v18[0]) < 0xc3a00000))
  {
    temp_v16 = *(float *)(param_1 + 0x594);
    temp_v18[0] = temp_v16;
    uiRectDrawAtBottomRight(param_1 + 200,2,0);
    temp_v16 = temp_v18[0];
    temp_v17 = 1.4013e-45f;
    FUN_00231bcc(param_1 + 200,0x4a4,0);
    temp_v16 = temp_v18[0];
    temp_v17 = 1.4013e-45f;
    FUN_00231bcc(param_1 + 200,0x4a5,0);
    temp_v16 = temp_v18[0];
    temp_v17 = 1.4013e-45f;
    FUN_00231bcc(param_1 + 200,0x4a6,0);
    temp_v16 = temp_v18[0];
    temp_v17 = 1.4013e-45f;
    FUN_00231bcc(param_1 + 200,0x4a7,0);
    if (*(char *)(param_1 + 0x5a4) != '\0') {
      temp_v16 = temp_v18[0];
      temp_v17 = 1.4013e-45f;
      FUN_00231bcc(param_1 + 200,0x4a3,0);
    }
    else {
      temp_v16 = temp_v18[0];
      temp_v17 = 1.4013e-45f;
      FUN_00231bcc(param_1 + 200,0x4a2,0);
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      temp_v0 = FUN_0029e924(param_1 + 0x20);
      temp_v15 = rangeLimitMin(param_1 + 0x20);
      temp_v2 = (int)((unsigned long long)temp_v15 >> 0x20);
      temp_v1 = (int)temp_v15;
      temp_v14 = 1;
      do {
        temp_v11 = 0;
        if (temp_v11 < temp_v1) {
          do {
            if (*(int *)(param_1 + 0x14) == 2) {
              temp_v15 = flaggedEntryGetValueByState(param_1 + 0x20);
              temp_v2 = (int)((unsigned long long)temp_v15 >> 0x20);
              if ((int)temp_v15 != temp_v11) goto LAB_0022cd30;
            }
            else {
LAB_0022cd30:
              temp_v12 = *(float *)(param_1 + 0x594);
              temp_v2 = (int)*(short *)(param_1 + 0x5a8 + (temp_v0 + temp_v11) * 0x20 + 4);
              switch(temp_v14) {
              case 1:
                temp_v16 = 0.0f;
                temp_v17 = temp_v12;
                FUN_0022dcac(param_1,*(char *)(param_1 + 0x5a4) == '\0',temp_v2,temp_v11);
                temp_v2 = temp_v3;
                break;
              case 2:
                temp_v16 = temp_v12;
                FUN_0022db94(param_1,temp_v2,temp_v11);
                temp_v2 = temp_v4;
                break;
              case 3:
                temp_v16 = temp_v12;
                FUN_0022daac(param_1,temp_v2,temp_v11);
                temp_v2 = temp_v5;
                break;
              case 4:
                temp_v17 = *(float *)(temp_v11 * 4 + 0x4935a4);
                temp_v16 = temp_v12;
                FUN_0022d9c8(param_1,*(unsigned int *)(temp_v11 * 4 + 0x49357c),temp_v11);
                temp_v2 = temp_v6;
                break;
              case 5:
                if (temp_v11 != 0) {
                  if (*(int *)(temp_v11 * 4 + 0x493758) != (&DAT_0049375c)[temp_v11]) {
                    drawSetColorFromRGBA8();
                  }
                }
                else {
                  drawSetColorFromRGBA8(DAT_0049375c);
                }
                temp_v16 = (float)(temp_v11 * 0x20 + 0x49361c);
                digitsDrawAtAreaCorner(param_1 + 200,*(unsigned int *)(temp_v11 * 4 + 0x4935cc),
                             *(unsigned int *)(temp_v11 * 4 + 0x4935f4),temp_v12);
                temp_v2 = temp_v7;
              }
            }
            temp_v11 = temp_v11 + 1;
          } while (temp_v11 < temp_v1);
        }
        temp_v14 = temp_v14 + 1;
        if (temp_v14 >= 5) {
          temp_v0 = 0;
          if (temp_v0 < temp_v1) {
            do {
              if ((*(int *)(param_1 + 0x14) == 2) &&
                 (temp_v2 = flaggedEntryGetValueByState(param_1 + 0x20,temp_v2), temp_v2 == temp_v0)) {
                if (temp_v0 != 0) {
                  temp_v2 = *(int *)(temp_v0 * 4 + 0x493758);
                  if (temp_v2 != (&DAT_0049375c)[temp_v0]) {
                    drawSetColorFromRGBA8();
                    temp_v2 = temp_v8;
                  }
                }
                else {
                  drawSetColorFromRGBA8(DAT_0049375c);
                  temp_v2 = temp_v9;
                }
              }
              else {
                temp_v13 = *(unsigned int *)(param_1 + 0x594);
                if (temp_v0 != 0) {
                  if (*(int *)(temp_v0 * 4 + 0x493758) != (&DAT_0049375c)[temp_v0]) {
                    drawSetColorFromRGBA8();
                  }
                }
                else {
                  drawSetColorFromRGBA8(DAT_0049375c);
                }
                temp_v16 = (float)(temp_v0 * 0x20 + 0x49361c);
                digitsDrawAtAreaCorner(param_1 + 200,*(unsigned int *)(temp_v0 * 4 + 0x4935cc),
                             *(unsigned int *)(temp_v0 * 4 + 0x4935f4),temp_v13);
                temp_v2 = temp_v10;
              }
              temp_v0 = temp_v0 + 1;
            } while (temp_v0 < temp_v1);
          }
          FUN_002bed3c();
          temp_v2 = *(int *)(param_1 + 0x14);
          if (((temp_v2 == 2 || temp_v2 == 3) || (temp_v2 == 7 || temp_v2 == 4)) ||
             (temp_v2 == 5 || temp_v2 == 8)) {
            temp_v2 = flaggedValueHolderGetTotal(param_1 + 0x20);
            temp_v0 = (int)*(short *)(param_1 + 0x5a8 + temp_v2 * 0x20 + 4);
            temp_v2 = flaggedEntryGetValueByState(param_1 + 0x20);
            temp_v12 = (float)(*(int *)(param_1 + 0x594) + 1);
            uiDrawScrollingSelectionEntry(param_1,temp_v2,temp_v12,(int)*(char *)(param_1 + 0x56d));
            temp_v16 = 1.4013e-45f;
            temp_v17 = temp_v12;
            FUN_0022dcac(param_1,*(char *)(param_1 + 0x5a4) == '\0',temp_v0,temp_v2);
            temp_v16 = temp_v12;
            FUN_0022db94(param_1,temp_v0,temp_v2,1);
            temp_v16 = temp_v12;
            FUN_0022daac(param_1,temp_v0,temp_v2,1);
            temp_v17 = *(float *)(temp_v2 * 4 + 0x4935a4);
            temp_v16 = temp_v12;
            FUN_0022d9c8(param_1,*(unsigned int *)(temp_v2 * 4 + 0x49357c),temp_v2,1);
            drawSetColorFromRGBA8((&DAT_0049375c)[temp_v2]);
            temp_v16 = (float)(temp_v2 * 0x20 + 0x49361c);
            digitsDrawAtAreaCorner(param_1 + 200,*(unsigned int *)(temp_v2 * 4 + 0x4935cc),
                         *(unsigned int *)(temp_v2 * 4 + 0x4935f4),temp_v12);
            FUN_002bed3c();
          }
          FUN_0022d7b0(param_1,temp_v18[0]);
          return;
        }
      } while( 1 );
    }
  }
  return;
}

} /* extern "C" */
