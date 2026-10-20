/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e540` (_code @ 0x35e540, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4a90(int, int, int);

extern int DAT_0057f268; /* 0x57f268 */

extern int slotRecordFindById(unsigned int);
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001b4a90. */


void FUN_0035e540(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v0 = DAT_0057f268;
  temp_v1 = FUN_001ab888();
  temp_v7 = 0;
  do {
    *(unsigned char *)(temp_v0 + temp_v7 + 0x9c0) = 0;
    *(unsigned char *)(*(int *)(temp_v0 + temp_v7 * 4 + 0xa10) + 0x28) = 0;
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 4);
  temp_v7 = 0;
  do {
    *(unsigned short *)(temp_v0 + temp_v7 * 8 + 0xa84) = 0;
    *(unsigned char *)(*(int *)(temp_v0 + temp_v7 * 4 + 0xa20) + 0x28) = 0;
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 0x18);
  FUN_001b4a90(temp_v0 + 0x9c0,4,1);
  temp_v7 = 0;
  temp_v5 = 0x18;
  *(unsigned char *)(temp_v0 + 0x9c0) = 0;
  do {
    temp_v6 = temp_v0 + temp_v7 * 8;
    temp_v7 = temp_v7 + 1;
    if (*(int *)(temp_v6 + 0xa80) < 0) {
      *(unsigned short *)(temp_v6 + 0xa84) = 1;
    }
    temp_v5 = temp_v5 - 1;
  } while (temp_v5 != 0);
  temp_v7 = 0;
  if (temp_v7 < *(int *)(temp_v0 + 0xe84)) {
    do {
      temp_v2 = *(unsigned int *)(temp_v0 + temp_v7 * 4 + 0xe7c);
      if ((-1 < (int)temp_v2) && (temp_v5 = slotRecordFindById(temp_v2 & 0xffff), temp_v5 != 0)) {
        temp_v6 = 0;
        do {
          if ((-1 < *(char *)(temp_v1 + temp_v6 + 0x1ca0)) &&
             (temp_v3 = FUN_001ab854(), *(short *)(temp_v3 + 0x62) == *(short *)(temp_v5 + 0x62))) {
            *(unsigned char *)(temp_v0 + temp_v6 + 0x9c1) = 1;
            *(unsigned char *)(*(int *)(temp_v0 + temp_v6 * 4 + 0xa14) + 0x28) = 1;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 3);
        temp_v6 = 0;
        do {
          temp_v3 = temp_v0 + temp_v6 * 8;
          if ((-1 < *(int *)(temp_v3 + 0xa80)) &&
             (temp_v4 = FUN_001ab854(), *(short *)(temp_v4 + 0x62) == *(short *)(temp_v5 + 0x62))) {
            *(unsigned short *)(temp_v3 + 0xa84) = 1;
            *(unsigned char *)(*(int *)(temp_v0 + temp_v6 * 4 + 0xa20) + 0x28) = 1;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 0x18);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < *(int *)(temp_v0 + 0xe84));
  }
  return;
}

} /* extern "C" */
