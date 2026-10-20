/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026b9bc` (_code @ 0x26b9bc, 0x2ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026bc6c(void);
int FUN_0029e8b8(...);
int objectPartRunUnlessLocked(...);
int FUN_0029eb5c(...);
int FUN_0029f848(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int g_partyPanel; /* 0x43dcf0 */

/* Supplied declaration required: FUN_0026bc6c. */
/* Supplied declaration required: FUN_0029e8b8. */
/* Supplied declaration required: objectPartRunUnlessLocked. */
/* Supplied declaration required: FUN_0029eb5c. */
extern unsigned int FUN_0029efa8(int);
/* Supplied declaration required: FUN_0029f848. */
extern int gameGetSlotTable(void);


void FUN_0026b9bc(void)

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
  unsigned char temp_v10;
  
  temp_v6 = g_partyPanel;
  temp_v9 = 0;
  *(unsigned int *)(g_partyPanel + 0x28) = 0;
  do {
    temp_v1 = gameGetSlotTable();
    if (-1 < *(char *)(temp_v1 + temp_v9 + 0x90f0)) {
      *(int *)(temp_v6 + 0x28) = *(int *)(temp_v6 + 0x28) + 1;
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0x18);
  temp_v9 = gameGetSlotTable();
  if (*(unsigned char *)(temp_v9 + 0x910b) < 0xd) {
    temp_v2 = 1;
  }
  else {
    temp_v2 = 2;
  }
  *(unsigned int *)(temp_v6 + 0x30) = temp_v2;
  temp_v9 = gameGetSlotTable();
  temp_v1 = 0;
  temp_v8 = 0x18;
  pcVar4 = (char *)(temp_v9 + 0x90f0);
  do {
    temp_v0 = temp_v1 * 8;
    temp_v8 = temp_v8 - 1;
    temp_v1 = temp_v1 + 1;
    *(int *)(temp_v6 + temp_v0 + 0x738) = (int)*pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (temp_v8 != 0);
  FUN_0026bc6c();
  temp_v10 = *(unsigned char *)(temp_v9 + 0x910b) >> 2;
  if ((*(unsigned char *)(temp_v9 + 0x910b) & 3) != 0) {
    temp_v10 = temp_v10 + 1;
  }
  temp_v2 = objectPartRunUnlessLocked(temp_v6 + 0x940);
  temp_v3 = FUN_0029efa8(temp_v6 + 0x940);
  temp_v1 = temp_v6 + 0xa08;
  temp_v4 = objectPartRunUnlessLocked();
  temp_v5 = FUN_0029efa8(temp_v1);
  temp_v7 = (unsigned int)*(unsigned char *)(temp_v9 + 0x910b);
  if (temp_v7 < 0xc) {
    FUN_0029f848(temp_v6 + 0x940,temp_v7,temp_v10,4,1,1);
    FUN_0029f848(temp_v1,*(unsigned char *)(temp_v9 + 0x910b) + 4,temp_v10 + 1,4,1,1);
  }
  else if (*(int *)(temp_v6 + 0x2c) != 0) {
    FUN_0029f848(temp_v6 + 0x940,temp_v7 - 0xc,3,4,1,1);
    FUN_0029f848(temp_v1,*(unsigned char *)(temp_v9 + 0x910b) - 8,4,4,1,1);
  }
  else {
    FUN_0029f848(temp_v6 + 0x940,0xc,3,4,1,1);
    FUN_0029f848(temp_v1,0x10,4,4,1,1);
  }
  FUN_0029e8b8(temp_v6 + 0x940,temp_v2);
  FUN_0029eb5c(temp_v6 + 0x940,temp_v3);
  FUN_0029e8b8(temp_v1,temp_v4);
  FUN_0029eb5c(temp_v1,temp_v5);
  temp_v1 = temp_v6 + 0x9a4;
  temp_v2 = objectPartRunUnlessLocked();
  temp_v3 = FUN_0029efa8(temp_v1);
  temp_v6 = temp_v6 + 0xa6c;
  temp_v4 = objectPartRunUnlessLocked();
  temp_v5 = FUN_0029efa8(temp_v6);
  FUN_0029f848(temp_v1,*(unsigned char *)(temp_v9 + 0x910b),temp_v10,4,1,1);
  FUN_0029f848(temp_v6,*(unsigned char *)(temp_v9 + 0x910b) + 4,temp_v10 + 1,4,1,1);
  FUN_0029e8b8(temp_v1,temp_v2);
  FUN_0029eb5c(temp_v1,temp_v3);
  FUN_0029e8b8(temp_v6,temp_v4);
  FUN_0029eb5c(temp_v6,temp_v5);
  return;
}

} /* extern "C" */
