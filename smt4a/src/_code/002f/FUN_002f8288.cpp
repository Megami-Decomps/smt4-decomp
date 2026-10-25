/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8288` (_code @ 0x2f8288, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "network/DataStore/DataStoreMain.h"

extern "C" {

int FUN_002c7bb0(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int g_partyPanel; /* 0x57f268 */

extern unsigned int gameGetSlotRecord(unsigned int);
extern int gameGetSlotTable(void);
/* Supplied declaration required: FUN_002c7bb0. */
/* Supplied declaration required: FUN_003344b4. */
extern int FUN_003df57c(unsigned short, unsigned int);
extern int FUN_004bcbb4(unsigned int, unsigned short);


void FUN_002f8288(void)

{
/* irregular: irregular input(s): in_r3; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int in_r3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = g_partyPanel;
  temp_v6 = in_r3;
  temp_v1 = gameGetSlotTable();
  temp_v6 = 0;
  if (*(short *)(temp_v0 + 0x38) >= 0) {
    temp_v4 = 0;
    do {
      if ((int)*(char *)(temp_v1 + temp_v4 + 0x1ca0) == (int)*(short *)(temp_v0 + 0x38)) {
        temp_v5 = temp_v0 + temp_v4 * 4;
        temp_v2 = gameGetSlotRecord(*(unsigned int *)(*(int *)(temp_v5 + 0xa14) + 0x34));
        temp_v3 = FUN_004bcbb4(temp_v2,*(unsigned short *)(temp_v0 + 0x36));
        *(int *)(*(int *)(temp_v5 + 0xa14) + 0x44) = -temp_v3;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 3);
    temp_v4 = 0;
    do {
      if (*(int *)(temp_v0 + temp_v4 * 8 + 0xa80) == (int)*(short *)(temp_v0 + 0x38)) {
        temp_v5 = temp_v0 + temp_v4 * 4;
        temp_v2 = gameGetSlotRecord(*(unsigned int *)(*(int *)(temp_v5 + 0xa20) + 0x34));
        temp_v3 = FUN_004bcbb4(temp_v2,*(unsigned short *)(temp_v0 + 0x36));
        *(int *)(*(int *)(temp_v5 + 0xa20) + 0x44) = -temp_v3;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x18);
  }
  else {
    temp_v4 = FUN_003df57c(*(unsigned short *)(temp_v0 + 0x36),1);
    *(int *)(*(int *)(temp_v0 + 0xa10) + 0x44) = -temp_v4;
  }
  if (*(char *)(temp_v0 + 0x9c0) != '\0') {
    FUN_002c7bb0((int)*(short *)(temp_v0 + 0x38),0xffffffff,*(unsigned short *)(temp_v0 + 0x36),&temp_v6);
    *(unsigned int *)(*(int *)(temp_v0 + 0xa10) + 0x40) = temp_v6;
  }
  temp_v4 = 0;
  do {
    temp_v3 = (int)*(char *)(temp_v1 + temp_v4 + 0x1ca0);
    if (-1 < temp_v3) {
      FUN_002c7bb0((int)*(short *)(temp_v0 + 0x38),temp_v3,*(unsigned short *)(temp_v0 + 0x36),&temp_v6);
      *(unsigned int *)(*(int *)(temp_v0 + temp_v4 * 4 + 0xa14) + 0x40) = temp_v6;
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 3);
  temp_v1 = 0;
  do {
    temp_v4 = *(int *)(temp_v0 + temp_v1 * 8 + 0xa80);
    if (-1 < temp_v4) {
      FUN_002c7bb0((int)*(short *)(temp_v0 + 0x38),temp_v4,*(unsigned short *)(temp_v0 + 0x36),&temp_v6);
      *(unsigned int *)(*(int *)(temp_v0 + temp_v1 * 4 + 0xa20) + 0x40) = temp_v6;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  if (*(short *)(temp_v0 + 0x38) < 0) {
    FUN_003344b4(*(unsigned int *)(*(int *)(temp_v0 + 0xa10) + 0x40), *(unsigned int *)(*(int *)(temp_v0 + 0xa10) + 0x44));
    return;
  }
  temp_v1 = 0;
  do {
    if (*(int *)(temp_v0 + temp_v1 * 8 + 0xa80) == (int)*(short *)(temp_v0 + 0x38)) {
      temp_v4 = temp_v0 + temp_v1 * 4;
      FUN_003344b4(*(unsigned int *)(*(int *)(temp_v4 + 0xa20) + 0x40), *(unsigned int *)(*(int *)(temp_v4 + 0xa20) + 0x44));
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return;
}

} /* extern "C" */
