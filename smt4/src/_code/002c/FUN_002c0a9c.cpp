/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0a9c` (_code @ 0x2c0a9c, 0x1bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int aocEntryFind(unsigned int, unsigned int);
extern short *gameDataGetTableEntry(unsigned int, unsigned int);
extern unsigned int randNextInRange(unsigned int);
extern int FUN_002c0a84(void);


unsigned int FUN_002c0a9c(unsigned int param_1,unsigned int param_2,int param_3)

{
  unsigned int temp_v0;
  unsigned char temp_v1;
  short temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  short *psVar6;
  int temp_v5;
  unsigned short *puVar8;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  short *psVar12;
  short temp_v9;
  unsigned int temp_v10;
  
  temp_v4 = FUN_002c0a84();
  psVar6 = (short *)gameDataGetTableEntry(param_1,param_2);
  if (temp_v4 == 0) {
    *(unsigned char *)(psVar6 + 1) = 0;
  }
  temp_v1 = *(unsigned char *)((int)psVar6 + 3);
  if ((temp_v1 & 0x1f) >= 2) {
    *(unsigned char *)((int)psVar6 + 3) = (temp_v1 & 0xe0) | ((temp_v1 - 1) & 0x1f);
    return 0;
  }
  *(unsigned char *)((int)psVar6 + 3) = temp_v1 & 0xe0;
  temp_v5 = aocEntryFind(param_1,param_2);
  temp_v9 = *(short *)(temp_v5 + 0xe);
  temp_v6 = temp_v5 + temp_v4 * 6;
  psVar12 = (short *)(temp_v6 + 0x10);
  temp_v7 = (unsigned int)*(unsigned short *)(temp_v6 + 0x12);
  if (temp_v7 != 0) {
    if (999 >= temp_v7) {
      temp_v7 = randNextInRange(99);
      if (*(unsigned short *)(temp_v6 + 0x12) > temp_v7) {
        temp_v2 = *psVar12;
        if (temp_v2 != 0) {
          temp_v9 = temp_v2;
        }
      }
    }
    else {
      temp_v7 = (temp_v7 * 0x4189 + 0x4189) >> 0x18;
      temp_v0 = 1 << ((temp_v7 - 1) & 0xff);
      if ((*(unsigned char *)(psVar6 + 1) & temp_v0) == 0) {
        temp_v4 = temp_v4 + 1;
        temp_v10 = 0;
        if (0 < temp_v4) {
          puVar8 = (unsigned short *)(temp_v5 + 0x12);
          do {
            temp_v8 = (unsigned int)*puVar8;
            if ((temp_v7 * 1000 < temp_v8) && (temp_v8 < (temp_v7 + 1) * 1000)) {
              temp_v10 = temp_v10 + temp_v7 * -1000 + temp_v8;
            }
            temp_v4 = temp_v4 - 1;
            puVar8 = puVar8 + 3;
          } while (temp_v4 != 0);
        }
        temp_v7 = randNextInRange(99);
        if (temp_v7 < temp_v10) {
          temp_v9 = *psVar12;
          *(unsigned char *)(psVar6 + 1) = *(unsigned char *)(psVar6 + 1) | (unsigned char)temp_v0;
        }
      }
    }
  }
  else {
    temp_v2 = *psVar12;
    if (temp_v2 != 0) {
      temp_v9 = temp_v2;
    }
  }
  if (*psVar6 == temp_v9) {
    return 0;
  }
  *psVar6 = temp_v9;
  temp_v1 = *(unsigned char *)((int)psVar6 + 3);
  temp_v3 = (temp_v1 & 0xe0) | ((unsigned char)*(unsigned short *)(temp_v6 + 0x14) & 0x1f);
  *(unsigned char *)((int)psVar6 + 3) = temp_v3;
  if ((param_3 == 0) && ((temp_v1 & 0x40) != 0)) {
    *(unsigned char *)((int)psVar6 + 3) = temp_v3 | 0x20;
  }
  return 1;
}

} /* extern "C" */
