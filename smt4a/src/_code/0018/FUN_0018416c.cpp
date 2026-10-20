/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018416c` (_code @ 0x18416c, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_gameDataBlocks; /* 0x57f698 */

extern int FUN_0018719c(unsigned int);
extern unsigned int FUN_0019e52c(unsigned int);


unsigned int FUN_0018416c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  unsigned short temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  
  temp_v0 = FUN_0018719c(0x45b);
  if (temp_v0 == 0) {
    return 0;
  }
  temp_v6 = 0;
  temp_v5 = 0;
  temp_v8 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x88;
  temp_v0 = FUN_0018719c(0x4f6);
  if (temp_v0 != 0) {
    temp_v0 = 0;
    do {
      temp_v4 = temp_v8 + temp_v0 * 4;
      temp_v3 = *(unsigned short *)(temp_v4 + 0x28312) & 0x3ff;
      if (temp_v5 != temp_v3) {
        temp_v6 = temp_v0 + 1;
        temp_v5 = temp_v3;
      }
      if (*(unsigned short *)(temp_v4 + 0x28310) == param_1) {
        if (temp_v6 < 0xb) {
          return 1;
        }
        return 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x14);
  }
  temp_v0 = FUN_0018719c(0x4f7);
  if (temp_v0 != 0) {
    temp_v0 = 0;
    do {
      temp_v6 = temp_v8 + temp_v0 * 4;
      temp_v4 = 0;
      temp_v5 = *(unsigned short *)(temp_v6 + 0x28362);
      temp_v7 = (unsigned int)*(unsigned short *)(temp_v6 + 0x28360);
      do {
        if (temp_v7 - 1 < 8) {
          temp_v1 = 0;
                    /* WARNING: Switch table taken from the stored dispatch table */
          if (temp_v7 < 9) {
            temp_v1 = 0;
            switch(temp_v7) {
            case 1:
              temp_v1 = 0xae;
              break;
            case 2:
              temp_v1 = 0xaf;
              break;
            case 3:
              temp_v1 = 0xb0;
              break;
            case 4:
              if (temp_v4 == 0) {
                temp_v1 = 0xb2;
              }
              else {
                temp_v1 = 0xb9;
              }
              break;
            case 5:
              if (temp_v4 == 0) {
                temp_v1 = 0xb1;
              }
              else if (temp_v4 == 1) {
                temp_v1 = 0xbf;
              }
              else {
                temp_v1 = 0xc0;
              }
              break;
            case 6:
              if (temp_v4 == 0) {
                temp_v1 = 0xb3;
              }
              else {
                temp_v1 = 0xba;
              }
              break;
            case 7:
              temp_v1 = 5;
            }
          }
          temp_v2 = FUN_0019e52c(temp_v1);
          if (param_1 == temp_v2) {
            if ((temp_v5 >> 10) - 1 < 3) {
              return 1;
            }
            return 0;
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 3);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 7);
  }
  return 0;
}

} /* extern "C" */
