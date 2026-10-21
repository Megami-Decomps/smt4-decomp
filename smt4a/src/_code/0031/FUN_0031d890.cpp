/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d890` (_code @ 0x31d890, 0x2ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00203b40(...);
int FUN_002a4878(...);
int FUN_002a4914(...);
int FUN_002a4964(...);
int partyPanelSortByMode(void);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int g_partyPanel; /* 0x57f268 */

extern int gameGetSlotTable(void);
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_002a4878. */
extern unsigned int FUN_002a4894(int);
/* Supplied declaration required: FUN_002a4914. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: partyPanelSortByMode. */


void FUN_0031d890(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  char *pcVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char *pbVar12;
  unsigned char temp_v10;
  
  temp_v6 = g_partyPanel;
  temp_v9 = 0;
  *(unsigned int *)(g_partyPanel + 0x28) = 0;
  do {
    temp_v1 = gameGetSlotTable();
    if (-1 < *(char *)(temp_v1 + temp_v9 + 0x1c88)) {
      *(int *)(temp_v6 + 0x28) = *(int *)(temp_v6 + 0x28) + 1;
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0x18);
  temp_v9 = gameGetSlotTable();
  if (*(unsigned char *)(temp_v9 + 0x1ca3) < 0xd) {
    temp_v2 = 1;
  }
  else {
    temp_v2 = 2;
  }
  *(unsigned int *)(temp_v6 + 0x30) = temp_v2;
  temp_v9 = gameGetSlotTable();
  temp_v1 = 0;
  temp_v8 = 0x18;
  pcVar4 = (char *)(temp_v9 + 0x1c88);
  do {
    temp_v0 = temp_v1 * 8;
    temp_v8 = temp_v8 - 1;
    temp_v1 = temp_v1 + 1;
    *(int *)(temp_v6 + temp_v0 + 0xa80) = (int)*pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (temp_v8 != 0);
  partyPanelSortByMode();
  pbVar12 = (unsigned char *)(temp_v9 + 0x1ca3);
  temp_v10 = *pbVar12 >> 2;
  temp_v9 = temp_v6 + 0xc88;
  if ((*pbVar12 & 3) != 0) {
    temp_v10 = temp_v10 + 1;
  }
  temp_v2 = FUN_002a4878();
  temp_v3 = FUN_002a4894(temp_v9);
  temp_v4 = FUN_002a4878(temp_v6 + 0xd50);
  temp_v5 = FUN_002a4894(temp_v6 + 0xd50);
  if (*(int *)(temp_v6 + 0x1218) != 0) {
    FUN_00203b40(temp_v6 + 0xd50,4,1,4,1,1);
  }
  else {
    temp_v7 = (unsigned int)*pbVar12;
    if (temp_v7 < 0xc) {
      FUN_00203b40(temp_v9,temp_v7,temp_v10,4,1,1);
      FUN_00203b40(temp_v6 + 0xd50,*pbVar12 + 4,temp_v10 + 1,4,1,1);
    }
    else if (*(int *)(temp_v6 + 0x2c) != 0) {
      FUN_00203b40(temp_v9,temp_v7 - 0xc,3,4,1,1);
      FUN_00203b40(temp_v6 + 0xd50,*pbVar12 - 8,4,4,1,1);
    }
    else {
      FUN_00203b40(temp_v9,0xc,3,4,1,1);
      FUN_00203b40(temp_v6 + 0xd50,0x10,4,4,1,1);
    }
  }
  FUN_002a4914(temp_v9,temp_v2);
  FUN_002a4964(temp_v9,temp_v3);
  FUN_002a4914(temp_v6 + 0xd50,temp_v4);
  FUN_002a4964(temp_v6 + 0xd50,temp_v5);
  temp_v9 = temp_v6 + 0xcec;
  temp_v2 = FUN_002a4878();
  temp_v3 = FUN_002a4894(temp_v9);
  temp_v6 = temp_v6 + 0xdb4;
  temp_v4 = FUN_002a4878();
  temp_v5 = FUN_002a4894(temp_v6);
  FUN_00203b40(temp_v9,*pbVar12,temp_v10,4,1,1);
  FUN_00203b40(temp_v6,*pbVar12 + 4,temp_v10 + 1,4,1,1);
  FUN_002a4914(temp_v9,temp_v2);
  FUN_002a4964(temp_v9,temp_v3);
  FUN_002a4914(temp_v6,temp_v4);
  FUN_002a4964(temp_v6,temp_v5);
  return;
}

} /* extern "C" */
