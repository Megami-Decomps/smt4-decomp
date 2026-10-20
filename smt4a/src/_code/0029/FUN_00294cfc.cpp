/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294cfc` (_code @ 0x294cfc, 0x31c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(int, int [19], unsigned int *);
int FUN_00152f44(void);
int FUN_00180118(unsigned int *);
int FUN_00184310(void);
int gameFlagIsSet(...);
int dataTableGetCount(unsigned int);
int dataTableGetEntries(void);
int dataTable00FindById(void);
int SBORROW4(...);
int rt_memcpy(int [19], int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern int *g_popupState; /* 0x58104c */
extern unsigned int g_gameState; /* 0x5f15fc */
extern unsigned int *DAT_005f18ec; /* 0x5f18ec */
extern unsigned int *DAT_005f18f0; /* 0x5f18f0 */
extern unsigned int *DAT_005f18f4; /* 0x5f18f4 */
extern unsigned int *DAT_005f18f8; /* 0x5f18f8 */
extern unsigned int *DAT_005f18fc; /* 0x5f18fc */
extern unsigned int *DAT_005f1900; /* 0x5f1900 */
extern unsigned char DAT_005f190c; /* 0x5f190c */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00100388. */
extern int randRange(unsigned int);
/* Supplied declaration required: FUN_00152f44. */
extern int saveSlotFindSelected(void);
/* Supplied declaration required: FUN_00180118. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00184310. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: dataTable00FindById. */
extern int FUN_002a4b28(unsigned short);
extern int FUN_002d8b58(unsigned int, unsigned short);
extern int FUN_004bb80c(unsigned int);
/* Supplied declaration required: rt_memcpy. */


void FUN_00294cfc(unsigned int param_1)

{
/* irregular: 2 goto(s); 10 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar8;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar11;
  int temp_v6;
  unsigned int *puVar13;
  unsigned int *puVar14;
  unsigned int temp_v7;
  unsigned char temp_v8;
  int temp_v9 [19];
  
  FUN_00152f44();
  if ((((*g_popupState == 0) && (temp_v0 = saveSlotFindSelected(), temp_v0 != 0)) &&
      ((temp_v1 = gameFlagIsSet(0x1a2), temp_v1 == 0 || (temp_v1 = randRange(99), temp_v1 + 1 >= 0x33))))
     && (temp_v1 = gameFlagIsSet(0x15), temp_v1 != 0)) {
    temp_v1 = FUN_004bb80c(param_1);
    temp_v2 = gameGetPlayerData();
    temp_v7 = (unsigned int)*(unsigned short *)(temp_v2 + 0x62);
    temp_v2 = 0;
    temp_v9[0] = temp_v7 - 6;
    do {
      temp_v6 = temp_v1 + temp_v2 * 2;
      temp_v3 = FUN_002a4b28(*(unsigned short *)(temp_v6 + 0x14));
      if (temp_v3 == 0) {
        puVar14 = (unsigned int *)(unsigned int)*(unsigned short *)(temp_v6 + 0x14);
        puVar8 = puVar14;
        dataTable00FindById();
        puVar11 = puVar14;
        FUN_00184310();
        if (((*(unsigned short *)((int)puVar11 + 10) & 1) != 0) &&
           (puVar11 = puVar14, dataTable00FindById(), (*(unsigned short *)((int)puVar11 + 0x16) & 4) != 0)) {
          temp_v3 = 0;
          do {
            puVar11 = &g_gameState + temp_v3;
            if (*(unsigned int **)(&DAT_005f190c + temp_v3 * 4) != puVar14) {
              puVar11 = *(unsigned int **)(temp_v3 * 4 + 0x5f1910);
            }
            if (*(unsigned int **)(&DAT_005f190c + temp_v3 * 4) == puVar14 || puVar11 == puVar14)
            goto LAB_00294e4c;
            temp_v3 = temp_v3 + 2;
          } while (temp_v3 < 0x20);
          temp_v3 = 0;
          do {
            puVar11 = (&DAT_005f18ec)[temp_v3];
            temp_v8 = puVar11 == puVar14;
            if (!temp_v8) {
              puVar11 = (&DAT_005f18f0)[temp_v3];
            }
            if (temp_v8 || puVar11 == puVar14) goto LAB_00294e4c;
            temp_v3 = temp_v3 + 2;
          } while (temp_v3 < 6);
          temp_v4 = *(unsigned short *)((int)puVar8 + 2) & 0xffff7fff;
          temp_v8 = SBORROW4(temp_v7,temp_v4);
          temp_v3 = temp_v7 - temp_v4;
          if (temp_v4 <= temp_v7) {
            temp_v8 = SBORROW4(temp_v4,temp_v9[0]);
            temp_v3 = temp_v4 - temp_v9[0];
          }
          if (temp_v3 < 0 == temp_v8) break;
        }
      }
LAB_00294e4c:
      puVar14 = (unsigned int *)0x0;
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 6);
    temp_v5 = dataTableGet(0x43,0);
    dataTableGetEntries();
    temp_v1 = dataTableGetCount(temp_v5);
    if ((puVar14 != (unsigned int *)0x0) && (temp_v7 = 0, 0 < temp_v1)) {
      while( 1 ) {
        temp_v5 = dataTableGet(0x43,0);
        temp_v2 = dataTableGetEntries();
        temp_v4 = dataTableGetCount(temp_v5);
        if (temp_v7 >= temp_v4) {
          puVar13 = (unsigned int *)0x0;
        }
        else {
          puVar13 = (unsigned int *)(temp_v2 + temp_v7 * 0x20);
        }
        if ((((puVar13[1] == 10) && (*puVar13 == (unsigned int)*(unsigned short *)(temp_v0 + 300))) &&
            (((short)puVar13[2] == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 != 0)))) &&
           (((*(short *)((int)puVar13 + 10) == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 == 0)) &&
            (temp_v2 = randRange(99), piVar1 = g_popupState, temp_v2 + 1 <= (int)(short)puVar13[3])))
           ) break;
        temp_v7 = temp_v7 + 1;
        if (temp_v1 <= (int)temp_v7) {
          return;
        }
      }
      *g_popupState = 7;
      piVar1[1] = 0;
      temp_v1 = FUN_002d8b58(10,*(unsigned short *)(temp_v0 + 300));
      piVar1 = g_popupState;
      g_popupState[5] = temp_v1;
      piVar1[6] = (unsigned int)*(unsigned short *)(temp_v0 + 300);
      rt_memcpy(temp_v9,temp_v1,0x48);
      puVar8 = puVar14;
      FUN_00180118(puVar14);
      FUN_00100388((int)g_popupState + 0x25,temp_v9,puVar8);
      puVar3 = DAT_005f18fc;
      puVar2 = DAT_005f18f8;
      puVar11 = DAT_005f18f4;
      puVar8 = DAT_005f18f0;
      temp_v0 = 0;
      do {
        if ((&DAT_005f18ec)[temp_v0] == puVar14) {
          g_popupState[5] = (int)g_popupState + 0x25;
          return;
        }
        if ((&DAT_005f18ec)[temp_v0] == (unsigned int *)0x0) {
          (&DAT_005f18ec)[temp_v0] = puVar14;
          g_popupState[5] = (int)g_popupState + 0x25;
          return;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 6);
      DAT_005f18f0 = DAT_005f18ec;
      DAT_005f18f4 = puVar8;
      DAT_005f18f8 = puVar11;
      DAT_005f18fc = puVar2;
      DAT_005f1900 = puVar3;
      DAT_005f18ec = puVar14;
      g_popupState[5] = (int)g_popupState + 0x25;
    }
  }
  return;
}

} /* extern "C" */
