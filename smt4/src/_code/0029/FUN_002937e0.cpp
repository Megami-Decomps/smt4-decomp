/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002937e0` (_code @ 0x2937e0, 0x1a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c3600(...);
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

/* Supplied declaration required: FUN_001c3600. */
/* Supplied declaration required: FUN_0029e8b8. */
/* Supplied declaration required: objectPartRunUnlessLocked. */
/* Supplied declaration required: FUN_0029eb5c. */
extern unsigned int FUN_0029efa8(int);
/* Supplied declaration required: FUN_0029f848. */
extern int gameGetSlotTable(void);


void FUN_002937e0(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  
  temp_v1 = g_partyPanel;
  temp_v2 = gameGetSlotTable();
  temp_v3 = objectPartRunUnlessLocked(temp_v1 + 0x940);
  temp_v4 = FUN_0029efa8(temp_v1 + 0x940);
  temp_v5 = temp_v1 + 0xa08;
  temp_v6 = objectPartRunUnlessLocked();
  temp_v7 = FUN_0029efa8(temp_v5);
  temp_v0 = *(unsigned char *)(temp_v2 + 0x910b);
  temp_v8 = temp_v0 >> 2;
  if ((temp_v0 & 3) != 0) {
    temp_v8 = temp_v8 + 1;
  }
  if (temp_v0 < 0xc) {
    FUN_0029f848(temp_v1 + 0x940,temp_v0,temp_v8,4,1,1);
    FUN_0029f848(temp_v5,*(unsigned char *)(temp_v2 + 0x910b) + 4,temp_v8 + 1,4,1,1);
  }
  else if (*(int *)(temp_v1 + 0x2c) != 0) {
    temp_v2 = gameGetSlotTable();
    FUN_0029f848(temp_v1 + 0x940,*(unsigned char *)(temp_v2 + 0x910b) - 0xc,3,4,1,1);
    temp_v2 = gameGetSlotTable();
    FUN_0029f848(temp_v5,*(unsigned char *)(temp_v2 + 0x910b) - 8,4,4,1,1);
  }
  else {
    FUN_0029f848(temp_v1 + 0x940,0xc,3,4,1,1);
    FUN_0029f848(temp_v5,0x10,4,4,1,1);
  }
  FUN_0029e8b8(temp_v1 + 0x940,temp_v3);
  FUN_0029eb5c(temp_v1 + 0x940,temp_v4);
  FUN_0029e8b8(temp_v5,temp_v6);
  FUN_0029eb5c(temp_v5,temp_v7);
  FUN_001c3600(temp_v1 + 0x940);
  FUN_001c3600(temp_v5);
  return;
}

} /* extern "C" */
