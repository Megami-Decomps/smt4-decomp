/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b7b74` (_code @ 0x4b7b74, 0x1bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int dialogOpen(int);
int asdLoadFileSyncDefault(void);
int FUN_00275bc8(int, unsigned char *);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int infoWinSetText(unsigned int, int);
int FUN_004b7d88(int);

extern unsigned char LAB_004b7d34; /* 0x4b7d34 */
extern unsigned char LAB_004b7d44; /* 0x4b7d44 */
extern unsigned char LAB_004b7d58; /* 0x4b7d58 */
extern unsigned char LAB_004b7d70; /* 0x4b7d70 */
extern int g_aocMain; /* 0x570260 */

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: dialogOpen. */
/* Supplied declaration required: asdLoadFileSyncDefault. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: infoWinSetText. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_004b7d88. */
extern int FUN_004ba698(int);
extern unsigned short flaggedValueHolderGetTotal(int);


void FUN_004b7b74(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  unsigned int temp_v3;
  
  temp_v1 = FUN_004ba698(param_1 + 0x9c);
  temp_v2 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x1130));
  if ((temp_v2 == 2) && (temp_v1 != 0)) {
    FUN_004b7d88(param_1);
    temp_v0 = flaggedValueHolderGetTotal(param_1 + 0x9c);
    *(unsigned short *)(param_1 + 0x4c) = temp_v0;
    if (*(char *)(g_aocMain + 0xc1) == '\0') {
      temp_v1 = *(int *)(param_1 + 0x116c);
      if (temp_v1 != 1) {
        if (temp_v1 == 2) {
          *(unsigned int *)(param_1 + 0x28) = 9;
          *(unsigned int *)(param_1 + 0x2c) = 0;
          sysPlaySe(0xa0);
          temp_v3 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x1150),&LAB_004b7d34);
          scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x1158),temp_v3);
          *(unsigned int *)(param_1 + 0x116c) = 0;
          return;
        }
        if (temp_v1 == 3) {
          *(unsigned int *)(param_1 + 0x28) = 0xb;
          *(unsigned int *)(param_1 + 0x2c) = 0;
          puVar4 = &LAB_004b7d44;
          asdLoadFileSyncDefault();
          *(unsigned char **)(param_1 + 0x115c) = puVar4;
          puVar4 = &LAB_004b7d58;
          asdLoadFileSyncDefault();
          *(unsigned char **)(param_1 + 0x1160) = puVar4;
          temp_v1 = *(int *)(param_1 + 0x115c);
          FUN_00275bc8(temp_v1,puVar4);
          *(int *)(param_1 + 0x1164) = temp_v1;
          *(unsigned int *)(temp_v1 + 0x108) = 3;
          temp_v3 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x115c),&LAB_004b7d70);
          scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x1164),temp_v3);
          *(unsigned int *)(param_1 + 0x116c) = 0;
          return;
        }
        if (temp_v1 != 4) {
          dialogOpen(0);
          infoWinSetText(*(unsigned int *)(param_1 + 0x113c),
                       *(unsigned char *)(*(int *)(param_1 + 0x1118) + 0x3f));
          *(unsigned int *)(param_1 + 0x28) = 5;
          *(unsigned int *)(param_1 + 0x2c) = 0;
          return;
        }
        dialogOpen(0);
        infoWinSetText(*(unsigned int *)(param_1 + 0x113c),
                     *(unsigned char *)(*(int *)(param_1 + 0x1118) + 0x3f));
        *(unsigned int *)(param_1 + 0x28) = 5;
        *(unsigned int *)(param_1 + 0x2c) = 0;
      }
      else {
        *(unsigned int *)(param_1 + 0x28) = 9;
        *(unsigned int *)(param_1 + 0x2c) = 0;
        temp_v3 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x1150),&LAB_004b7d34);
        scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x1158),temp_v3);
      }
      *(unsigned int *)(param_1 + 0x116c) = 0;
      return;
    }
    *(unsigned char *)(g_aocMain + 0xc1) = 0;
    *(unsigned int *)(param_1 + 0x28) = 10;
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  return;
}

} /* extern "C" */
