/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c488` (_code @ 0x39c488, 0x17c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00203b40(int, int, int, int, int, int);
int FUN_002c7e3c(void);
int FUN_003343f0(int);
int fillTwoWordsWithByte(int, unsigned int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int g_statusDown; /* 0x588fe8 */

extern int gameGetPlayerData(void);
extern int slotRecordFindById(unsigned short);
/* Supplied declaration required: FUN_00203b40. */
extern int FUN_002857b8(void);
/* Supplied declaration required: FUN_002c7e3c. */
/* Supplied declaration required: FUN_003343f0. */
extern int countUnlockedSlots(void);
extern int getUnlockedSlotCount(void);
/* Supplied declaration required: fillTwoWordsWithByte. */


void FUN_0039c488(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  char *pcVar6;
  unsigned int *puVar7;
  
  temp_v0 = g_statusDown;
  puVar7 = (unsigned int *)(g_statusDown + 0x24ac);
  *puVar7 = 0;
  *(unsigned int *)(temp_v0 + 0x2564) = 1;
  *(unsigned int *)(temp_v0 + 0x24b0) = 0;
  *(unsigned int *)(temp_v0 + 0x24b4) = 0;
  *(unsigned int *)(temp_v0 + 0x24b8) = 0;
  *(unsigned int *)(temp_v0 + 0x24bc) = 0;
  *(unsigned int *)(temp_v0 + 0x24c0) = 0;
  *(unsigned int *)(temp_v0 + 0x24c4) = 0;
  *(unsigned int *)(temp_v0 + 0x24c8) = 0;
  *(unsigned int *)(temp_v0 + 0x24cc) = 0;
  *(unsigned int *)(temp_v0 + 0x24d0) = 0;
  *(unsigned int *)(temp_v0 + 0x24d4) = 0;
  *(unsigned int *)(temp_v0 + 0x24d8) = 0;
  *(unsigned int *)(temp_v0 + 0x24dc) = 0;
  *(unsigned int *)(temp_v0 + 0x24e0) = 0;
  *(unsigned int *)(temp_v0 + 0x24e4) = 0;
  *(unsigned int *)(temp_v0 + 0x24e8) = 0;
  fillTwoWordsWithByte(temp_v0 + 0x24f4,0xffffffff);
  *(unsigned char *)(temp_v0 + 0x24f0) = 0;
  *(unsigned int *)(temp_v0 + 0x24fc) = 0;
  FUN_002c7e3c();
  if (*(short *)(temp_v0 + 0x598) < 1) {
    temp_v1 = gameGetPlayerData();
    temp_v2 = countUnlockedSlots();
    *(int *)(temp_v0 + 0x24ec) = temp_v2;
    if (0 < temp_v2) {
      temp_v3 = 0;
      puVar4 = (unsigned short *)(temp_v1 + 0x34);
      pcVar6 = (char *)(temp_v1 + 0x44);
      do {
        temp_v1 = temp_v3 * 2;
        temp_v2 = temp_v2 - 1;
        *(unsigned short *)(puVar7 + temp_v1) = *puVar4;
        temp_v3 = temp_v3 + 1;
        (puVar7 + temp_v1)[1] = (int)*pcVar6;
        puVar4 = puVar4 + 1;
        pcVar6 = pcVar6 + 1;
      } while (temp_v2 != 0);
    }
  }
  else {
    temp_v1 = slotRecordFindById(*(unsigned short *)(temp_v0 + 0x598));
    *(int *)(temp_v0 + 0x24fc) = temp_v1;
    temp_v2 = getUnlockedSlotCount();
    *(int *)(temp_v0 + 0x24ec) = temp_v2;
    if (0 < temp_v2) {
      temp_v3 = 0;
      puVar4 = (unsigned short *)(temp_v1 + 0x34);
      pcVar6 = (char *)(temp_v1 + 0x44);
      do {
        temp_v1 = temp_v3 * 2;
        temp_v2 = temp_v2 - 1;
        *(unsigned short *)(puVar7 + temp_v1) = *puVar4;
        temp_v3 = temp_v3 + 1;
        (puVar7 + temp_v1)[1] = (int)*pcVar6;
        puVar4 = puVar4 + 1;
        pcVar6 = pcVar6 + 1;
      } while (temp_v2 != 0);
    }
  }
  temp_v1 = *(int *)(temp_v0 + 0x24ec) + 1;
  FUN_00203b40(temp_v0 + 0x2500,temp_v1,temp_v1,1,1,1);
  *(unsigned char *)(temp_v0 + 0x2580) = 0;
  temp_v1 = FUN_002857b8();
  if (temp_v1 == 0) {
    FUN_003343f0(1);
    *(unsigned char *)(temp_v0 + 0x2580) = 1;
  }
  *(unsigned int *)(temp_v0 + 0x2564) = 0;
  *(unsigned int *)(temp_v0 + 0x2568) = 0;
  return;
}

} /* extern "C" */
