/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033e348` (_code @ 0x33e348, 0x23c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagsGetBlock(void);
int ptrListRemoveClearOwner(unsigned int);
int dataTable2EType1Count(void);
int dataTable2EType0Count(void);
int FUN_0040ace8(unsigned int, int);

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern short *g_lmapScene; /* 0x581288 */
extern int DAT_005f1848; /* 0x5f1848 */
extern short *DAT_005f184c; /* 0x5f184c */
extern int DAT_005f1b14; /* 0x5f1b14 */
extern int DAT_005f1b18; /* 0x5f1b18 */
extern int DAT_005f1b1c; /* 0x5f1b1c */
extern int DAT_005f1b20; /* 0x5f1b20 */
extern int DAT_005f1c68; /* 0x5f1c68 */
extern short *DAT_005f1c6c; /* 0x5f1c6c */

/* Supplied declaration required: gameFlagsGetBlock. */
extern unsigned short *gameGetPlayerData(void);
/* Supplied declaration required: ptrListRemoveClearOwner. */
extern short *dataTable2EType1GetEntry(int);
extern short *dataTable2EType0GetEntry(int);
/* Supplied declaration required: dataTable2EType1Count. */
/* Supplied declaration required: dataTable2EType0Count. */
/* Supplied declaration required: FUN_0040ace8. */


unsigned int FUN_0033e348(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned short *puVar1;
  short *psVar2;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  puVar1 = (unsigned short *)gameGetPlayerData();
  gameFlagsGetBlock();
  psVar2 = g_lmapScene;
  temp_v2 = *(int *)(g_lmapScene + 0xb6);
  if (temp_v2 != 0) {
    if (temp_v2 != 1) {
      if (temp_v2 != 2) {
        if (temp_v2 != 3) {
          return 0;
        }
        temp_v2 = DAT_005f1b14;
        if ((((DAT_005f1848 == 0) || (temp_v2 = DAT_005f1b18, DAT_005f1848 == 1)) ||
            (temp_v2 = DAT_005f1b1c, DAT_005f1848 == 2)) || (temp_v2 = DAT_005f1b20, DAT_005f1848 == 3))
        {
          *(int *)(g_lmapScene + 0xb8) = temp_v2;
        }
        temp_v2 = *(int *)(*(int *)(psVar2 + 0xb8) + 4);
        FUN_0040ace8(g_handleRegistry,temp_v2);
        *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 4) | 3;
        psVar2 = g_lmapScene;
        psVar2[0xb2] = 0;
        psVar2[0xb3] = 0;
        psVar2[0xb4] = -1;
        psVar2[0xb5] = -1;
        psVar2[0xb6] = 0;
        temp_v2 = DAT_005f1b14;
        psVar2[0xb7] = 0;
        *(int *)(psVar2 + 0xc2) = DAT_005f1b14;
        temp_v2 = *(int *)(temp_v2 + 4);
        FUN_0040ace8(g_handleRegistry,temp_v2);
        *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 4) | 3;
        psVar2 = g_lmapScene;
        psVar2[0xb2] = 0;
        psVar2[0xb3] = 0;
        psVar2[0xb4] = -1;
        psVar2[0xb5] = -1;
        psVar2[0xb6] = 0;
        psVar2[0xb7] = 0;
        return 1;
      }
      temp_v2 = 3;
    }
    else {
      temp_v2 = 1;
      if ((*(int *)(g_lmapScene + 0xb8) != 0) &&
         (temp_v2 = 0, *(int *)(*(int *)(g_lmapScene + 0xb8) + 4) != 0)) {
        ptrListRemoveClearOwner(g_handleRegistry);
        temp_v2 = temp_v3;
      }
      temp_v1 = *(int *)(g_lmapScene + 0xc2);
      if (temp_v1 != 0) {
        temp_v2 = *(int *)(temp_v1 + 4);
      }
      if (temp_v1 != 0 && temp_v2 != 0) {
        ptrListRemoveClearOwner(g_handleRegistry);
      }
      temp_v2 = *(int *)(g_lmapScene + 0xb6) + 1;
    }
    *(int *)(g_lmapScene + 0xb6) = temp_v2;
    return 0;
  }
  temp_v2 = 0;
  dataTable2EType1Count();
  if (0 < (int)psVar2) {
    do {
      psVar2 = (short *)dataTable2EType1GetEntry(temp_v2);
      if ((int)*psVar2 == (unsigned int)puVar1[4]) {
        if (DAT_005f1c6c == (short *)0xffffffff) {
          psVar2 = (short *)(int)psVar2[1];
          DAT_005f184c = psVar2;
        }
        else {
          DAT_005f184c = DAT_005f1c6c;
        }
        break;
      }
      temp_v2 = temp_v2 + 1;
      dataTable2EType1Count();
    } while (temp_v2 < (int)psVar2);
  }
  temp_v2 = 0;
  dataTable2EType0Count();
  if (0 < (int)psVar2) {
    do {
      psVar2 = (short *)dataTable2EType0GetEntry(temp_v2);
      temp_v0 = (unsigned int)*psVar2;
      if (temp_v0 == *puVar1) {
        temp_v2 = DAT_005f1c68;
        if (DAT_005f1c68 == -1) {
          temp_v2 = (int)psVar2[1];
        }
        if (DAT_005f1848 == temp_v2) {
          return 1;
        }
        DAT_005f1848 = temp_v2;
        *(int *)(g_lmapScene + 0xb6) = *(int *)(g_lmapScene + 0xb6) + 1;
        return 0;
      }
      temp_v2 = temp_v2 + 1;
      dataTable2EType0Count();
    } while (temp_v2 < (int)temp_v0);
  }
  return 1;
}

} /* extern "C" */
