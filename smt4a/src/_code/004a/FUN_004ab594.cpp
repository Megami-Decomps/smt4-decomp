/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ab594` (_code @ 0x4ab594, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_btlUiBlock; /* 0x57a9c8 */

extern int gameGetSlotTable(unsigned int);
extern int FUN_002cc9e0(int, unsigned int);
extern unsigned long long runtimeShiftLeftWide(unsigned int, unsigned int, int);


unsigned int FUN_004ab594(void)

{
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  char temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned long long temp_v11;
  
  temp_v7 = g_btlUiBlock;
  temp_v1 = FUN_002cc9e0(g_btlUiBlock + 0x28c4,1);
  if (temp_v1 != 10) {
    temp_v2 = 0xffffffff;
  }
  else {
    temp_v3 = gameGetSlotTable(10);
    temp_v10 = -1;
    temp_v1 = -1;
    if ((*(unsigned int *)(temp_v7 + 0x7490) & 1) != 0) {
      temp_v10 = -1;
    }
    else {
      temp_v4 = *(unsigned int *)(temp_v7 + 0x7490);
      if ((temp_v4 & 2) != 0) {
        temp_v10 = 0;
      }
      else if ((temp_v4 & 4) != 0) {
        temp_v10 = 1;
      }
      else if ((temp_v4 & 8) != 0) {
        temp_v10 = 2;
      }
    }
    temp_v6 = 1;
    temp_v4 = *(unsigned int *)(temp_v7 + 0x7498);
    temp_v9 = *(unsigned int *)(temp_v7 + 0x749c);
    temp_v7 = 0;
    temp_v8 = 0x18;
    do {
      temp_v11 = runtimeShiftLeftWide(1,0,temp_v6);
      if ((temp_v9 & (unsigned int)((unsigned long long)temp_v11 >> 0x20)) != 0 || (temp_v4 & (unsigned int)temp_v11) != 0) {
        temp_v1 = temp_v7;
      }
      temp_v8 = temp_v8 - 1;
      temp_v6 = temp_v6 + 1;
      temp_v7 = temp_v7 + 1;
    } while (temp_v8 != 0);
    temp_v0 = -1;
    temp_v5 = -1;
    if (-1 < temp_v10) {
      temp_v0 = *(char *)(temp_v10 + temp_v3 + 0x1ca0);
    }
    if (-1 < temp_v1) {
      temp_v5 = *(char *)(temp_v1 + temp_v3 + 0x1c88);
    }
    if (temp_v0 == temp_v5) {
      temp_v2 = 1;
    }
    else {
      temp_v2 = 0;
    }
  }
  return temp_v2;
}

} /* extern "C" */
