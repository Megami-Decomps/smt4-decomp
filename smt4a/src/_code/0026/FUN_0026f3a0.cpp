/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f3a0` (_code @ 0x26f3a0, 0x264 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameGetSlotRecord(...);
int FUN_002ade88(void);
int partyPanelRefreshFilterMarks(void);
int slotPlacementStartTransition(unsigned int, int);
int slotPlacementSetSlot(int, int);
int FUN_003f5220(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int g_partyPanel; /* 0x57f268 */

/* Supplied declaration required: gameGetSlotRecord. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: FUN_002ade88. */
/* Supplied declaration required: partyPanelRefreshFilterMarks. */
/* Supplied declaration required: slotPlacementStartTransition. */
/* Supplied declaration required: slotPlacementSetSlot. */
/* Supplied declaration required: FUN_003f5220. */
extern int FUN_004bd0d8(void);


void FUN_0026f3a0(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = g_partyPanel;
  temp_v1 = gameGetSlotTable();
  piVar4 = (int *)(temp_v0 + 0xa10);
  FUN_003f5220(*(unsigned int *)(temp_v0 + 0xa10),0);
  slotPlacementStartTransition(*(unsigned int *)(temp_v0 + 0xa10),*(char *)(temp_v0 + 0x42) == '\x01');
  *(unsigned char *)(*piVar4 + 0x25) = 0;
  *(unsigned char *)(*piVar4 + 0x26) = 0;
  *(unsigned char *)(*piVar4 + 0x27) = 0;
  temp_v3 = 0;
  do {
    temp_v4 = temp_v0 + temp_v3 * 4;
    piVar4 = (int *)(temp_v4 + 0xa14);
    FUN_003f5220(*(unsigned int *)(temp_v4 + 0xa14),*(unsigned int *)(temp_v0 + 0x2c));
    slotPlacementStartTransition(*(unsigned int *)(temp_v4 + 0xa14),*(char *)(temp_v0 + 0x42) == '\x01');
    slotPlacementSetSlot(*piVar4,temp_v3 + 1);
    temp_v2 = temp_v1 + temp_v3;
    if (*(char *)(temp_v2 + 0x1ca0) < '\0') {
      *(unsigned char *)(*(int *)(temp_v4 + 0xa14) + 0x20) = 1;
    }
    else {
      *(unsigned char *)(*(int *)(temp_v4 + 0xa14) + 0x20) = 0;
      *(int *)(*piVar4 + 0x34) = (int)*(char *)(temp_v2 + 0x1ca0);
      temp_v2 = gameGetSlotRecord((int)*(char *)(temp_v2 + 0x1ca0));
      *(unsigned char *)(*(int *)(temp_v4 + 0xa14) + 0x29) = (*(unsigned short *)(temp_v2 + 0x60) & 4) != 0;
    }
    *(unsigned char *)(*(int *)(temp_v4 + 0xa14) + 0x25) = 0;
    *(unsigned char *)(*piVar4 + 0x26) = 0;
    *(unsigned char *)(*piVar4 + 0x27) = 0;
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 3);
  temp_v1 = 0;
  do {
    temp_v3 = temp_v0 + temp_v1 * 4;
    piVar4 = (int *)(temp_v3 + 0xa20);
    FUN_003f5220(*piVar4,*(unsigned int *)(temp_v0 + 0x2c));
    slotPlacementStartTransition(*(unsigned int *)(temp_v3 + 0xa20),*(char *)(temp_v0 + 0x42) == '\x01');
    slotPlacementSetSlot(*piVar4,temp_v1 + 4);
    *(unsigned char *)(*piVar4 + 0x25) = 0;
    *(unsigned char *)(*piVar4 + 0x26) = 0;
    *(unsigned char *)(*piVar4 + 0x27) = 0;
    temp_v2 = temp_v0 + temp_v1 * 8;
    if (*(int *)(temp_v2 + 0xa80) < 0) {
      *(unsigned char *)(*(int *)(temp_v3 + 0xa20) + 0x20) = 1;
    }
    else {
      *(unsigned char *)(*(int *)(temp_v3 + 0xa20) + 0x20) = 0;
      *(unsigned int *)(*piVar4 + 0x34) = *(unsigned int *)(temp_v2 + 0xa80);
      temp_v2 = gameGetSlotRecord(*(unsigned int *)(temp_v2 + 0xa80));
      temp_v4 = FUN_004bd0d8();
      *(unsigned char *)(*(int *)(temp_v3 + 0xa20) + 0x23) = temp_v4 != 0;
      *(unsigned char *)(*(int *)(temp_v3 + 0xa20) + 0x24) = (*(unsigned short *)(temp_v2 + 0x60) & 0x400) != 0;
      *(unsigned char *)(*(int *)(temp_v3 + 0xa20) + 0x29) = (*(unsigned short *)(temp_v2 + 0x60) & 4) != 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  if (*(char *)(temp_v0 + 0x9b4) == '\n' || *(char *)(temp_v0 + 0x9b4) == '\x12') {
    FUN_002ade88();
  }
  if (*(char *)(temp_v0 + 0x9b4) != '\v') {
    return;
  }
  partyPanelRefreshFilterMarks();
  return;
}

} /* extern "C" */
