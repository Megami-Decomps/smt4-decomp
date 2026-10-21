/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8c40` (_code @ 0x3b8c40, 0x1c0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022b064(int);
int dialogOpen(int);
int FUN_0027e7b4(unsigned int, int);
int tableGroupFindEntryIndex(...);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int FUN_00297060(int, unsigned int);
int buttonHelpSetPreset(int);

extern unsigned char LAB_003b8e04; /* 0x3b8e04 */
extern unsigned char LAB_003b8e14; /* 0x3b8e14 */
extern unsigned char LAB_003b8e28; /* 0x3b8e28 */
extern unsigned char LAB_003b8e40; /* 0x3b8e40 */
extern int g_aocMain; /* 0x432fc8 */

extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_0022b064. */
extern int FUN_0022b14c(int);
extern unsigned short flaggedValueHolderGetTotal(int);
/* Supplied declaration required: dialogOpen. */
/* Supplied declaration required: FUN_0027e7b4. */
/* Supplied declaration required: tableGroupFindEntryIndex. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern unsigned int asdLoadFileSyncDefault(unsigned char *);


void FUN_003b8c40(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = FUN_0022b14c(param_1 + 0x9c);
  temp_v2 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0xd74));
  if ((temp_v2 == 2) && (temp_v1 != 0)) {
    FUN_0022b064(param_1);
    temp_v0 = flaggedValueHolderGetTotal(param_1 + 0x9c);
    *(unsigned short *)(param_1 + 0x4c) = temp_v0;
    if (*(char *)(g_aocMain + 0xc1) == '\0') {
      temp_v1 = *(int *)(param_1 + 0xdb0);
      if (temp_v1 != 1) {
        if (temp_v1 == 2) {
          *(unsigned int *)(param_1 + 0x28) = 9;
          *(unsigned int *)(param_1 + 0x2c) = 0;
          buttonHelpSetPreset(0x9e);
          temp_v3 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0xd94),&LAB_003b8e04);
          scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0xd9c),temp_v3);
          *(unsigned int *)(param_1 + 0xdb0) = 0;
          return;
        }
        if (temp_v1 == 3) {
          *(unsigned int *)(param_1 + 0x28) = 0xb;
          *(unsigned int *)(param_1 + 0x2c) = 0;
          temp_v3 = asdLoadFileSyncDefault(&LAB_003b8e14);
          *(unsigned int *)(param_1 + 0xda0) = temp_v3;
          temp_v3 = asdLoadFileSyncDefault(&LAB_003b8e28);
          *(unsigned int *)(param_1 + 0xda4) = temp_v3;
          temp_v1 = *(int *)(param_1 + 0xda0);
          FUN_00297060(temp_v1,temp_v3);
          *(int *)(param_1 + 0xda8) = temp_v1;
          *(unsigned int *)(temp_v1 + 0x108) = 3;
          temp_v3 = tableGroupFindEntryIndex(*(int *)(param_1 + 0xda0),&LAB_003b8e40);
          scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0xda8),temp_v3);
          *(unsigned int *)(param_1 + 0xdb0) = 0;
          return;
        }
        if (temp_v1 != 4) {
          dialogOpen(0);
          FUN_0027e7b4(*(unsigned int *)(param_1 + 0xd80),
                       *(unsigned char *)(*(int *)(param_1 + 0xd5c) + 0x3f));
          *(unsigned int *)(param_1 + 0x28) = 5;
          *(unsigned int *)(param_1 + 0x2c) = 0;
          return;
        }
        dialogOpen(0);
        FUN_0027e7b4(*(unsigned int *)(param_1 + 0xd80),
                     *(unsigned char *)(*(int *)(param_1 + 0xd5c) + 0x3f));
        *(unsigned int *)(param_1 + 0x28) = 5;
        *(unsigned int *)(param_1 + 0x2c) = 0;
      }
      else {
        *(unsigned int *)(param_1 + 0x28) = 9;
        *(unsigned int *)(param_1 + 0x2c) = 0;
        temp_v3 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0xd94),&LAB_003b8e04);
        scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0xd9c),temp_v3);
      }
      *(unsigned int *)(param_1 + 0xdb0) = 0;
      return;
    }
    *(unsigned char *)(g_aocMain + 0xc1) = 0;
    *(unsigned int *)(param_1 + 0x28) = 10;
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  return;
}

} /* extern "C" */
