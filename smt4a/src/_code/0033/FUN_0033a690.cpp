/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a690` (_code @ 0x33a690, 0x298 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00352a14(void);

extern int DAT_005806a4; /* 0x5806a4 */
extern int g_gameState; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */

extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_00352a14. */


void FUN_0033a690(int param_1,int param_2)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  *(unsigned char *)(DAT_005806a4 + 0x305) = 0;
  FUN_00352a14();
  temp_v0 = DAT_005806a4;
  temp_v3 = 0x42c80000;
  temp_v2 = 0;
  if (param_1 == 10 && param_2 == 8) {
    *(unsigned int *)(DAT_005806a4 + 0xd8) = 0x42c80000;
    *(unsigned int *)(temp_v0 + 0x118) = 0x43480000;
    *(unsigned int *)(temp_v0 + 0x158) = 0;
    *(unsigned int *)(temp_v0 + 0x198) = 0x43be0000;
    *(unsigned int *)(temp_v0 + 0x1d8) = 0x42280000;
  }
  temp_v10 = 0x433e0000;
  temp_v4 = 0x43f00000;
  temp_v6 = 0x423c0000;
  temp_v11 = 0x43340000;
  temp_v12 = 0x43020000;
  temp_v7 = 0x437a0000;
  temp_v8 = 0x435c0000;
  temp_v9 = 0x42200000;
  temp_v5 = 0x432a0000;
  if (g_gameState == 1) {
    if (DAT_005f1600 != 1) {
      return;
    }
    temp_v0 = FUN_0018719c(0x72);
    if ((temp_v0 != 0) && (temp_v1 = FUN_0018719c(0xb1), temp_v0 = DAT_005806a4, temp_v1 == 0)) {
      *(unsigned int *)(DAT_005806a4 + 0x114) = 0x42dc0000;
      *(unsigned int *)(temp_v0 + 0x154) = temp_v2;
      *(unsigned int *)(temp_v0 + 0x194) = temp_v4;
      *(unsigned int *)(temp_v0 + 0x1d4) = temp_v6;
      *(unsigned int *)(temp_v0 + 0x118) = temp_v8;
      *(unsigned int *)(temp_v0 + 0x158) = temp_v2;
      *(unsigned int *)(temp_v0 + 0x198) = temp_v4;
      *(unsigned int *)(temp_v0 + 0x1d8) = temp_v6;
      *(unsigned int *)(temp_v0 + 0xdc) = temp_v5;
      *(unsigned int *)(temp_v0 + 0x11c) = temp_v12;
      *(unsigned int *)(temp_v0 + 0x15c) = temp_v9;
      *(unsigned int *)(temp_v0 + 0x19c) = temp_v7;
      *(unsigned int *)(temp_v0 + 0x1dc) = temp_v6;
      *(unsigned int *)(temp_v0 + 0xd4) = temp_v10;
      *(unsigned int *)(temp_v0 + 0xd8) = temp_v11;
    }
  }
  if (g_gameState == 4) {
    if (DAT_005f1600 != 2) {
      return;
    }
    temp_v0 = FUN_0018719c(0xf4);
    if ((temp_v0 != 0) && (temp_v1 = FUN_0018719c(0xf6), temp_v0 = DAT_005806a4, temp_v1 == 0)) {
      *(unsigned int *)(DAT_005806a4 + 0x114) = temp_v3;
      *(unsigned int *)(temp_v0 + 0x154) = temp_v2;
      *(unsigned int *)(temp_v0 + 0x194) = temp_v4;
      *(unsigned int *)(temp_v0 + 0x1d4) = temp_v6;
      *(unsigned int *)(temp_v0 + 0x118) = temp_v8;
      *(unsigned int *)(temp_v0 + 0x158) = temp_v2;
      *(unsigned int *)(temp_v0 + 0x198) = temp_v4;
      *(unsigned int *)(temp_v0 + 0x1d8) = temp_v6;
      *(unsigned int *)(temp_v0 + 0xdc) = temp_v5;
      *(unsigned int *)(temp_v0 + 0x11c) = temp_v12;
      *(unsigned int *)(temp_v0 + 0x15c) = temp_v9;
      *(unsigned int *)(temp_v0 + 0x19c) = temp_v7;
      *(unsigned int *)(temp_v0 + 0x1dc) = temp_v6;
      *(unsigned int *)(temp_v0 + 0xd4) = temp_v10;
      *(unsigned int *)(temp_v0 + 0xd8) = temp_v11;
    }
  }
  temp_v0 = DAT_005806a4;
  if (g_gameState == 0x19) {
    if (DAT_005f1600 == 1) {
      *(unsigned int *)(DAT_005806a4 + 0xd4) = temp_v5;
      *(unsigned int *)(temp_v0 + 0x114) = 0x43520000;
      *(unsigned int *)(temp_v0 + 0x154) = temp_v2;
      *(unsigned int *)(temp_v0 + 0x194) = 0x438c0000;
      *(unsigned int *)(temp_v0 + 0x1d4) = 0x42960000;
      *(unsigned int *)(temp_v0 + 0xd8) = temp_v3;
      *(unsigned int *)(temp_v0 + 0x118) = temp_v8;
      *(unsigned int *)(temp_v0 + 0x158) = temp_v2;
      *(unsigned int *)(temp_v0 + 0x198) = 0x438c0000;
      *(unsigned int *)(temp_v0 + 0x1d8) = 0x42960000;
      *(unsigned int *)(temp_v0 + 0xdc) = 0x43160000;
      *(unsigned int *)(temp_v0 + 0x11c) = 0x43200000;
      *(unsigned int *)(temp_v0 + 0x15c) = temp_v9;
      *(unsigned int *)(temp_v0 + 0x19c) = temp_v3;
      *(unsigned int *)(temp_v0 + 0x1dc) = 0x42960000;
      if (g_gameState != 0x19) goto LAB_0033a890;
    }
    temp_v0 = DAT_005806a4;
    if (DAT_005f1600 != 2) {
      return;
    }
    *(unsigned int *)(DAT_005806a4 + 0xd4) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x114) = 0x43520000;
    *(unsigned int *)(temp_v0 + 0x154) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x194) = 0x438c0000;
    *(unsigned int *)(temp_v0 + 0x1d4) = 0x42960000;
    *(unsigned int *)(temp_v0 + 0xd8) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x118) = temp_v8;
    *(unsigned int *)(temp_v0 + 0x158) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x198) = 0x438c0000;
    *(unsigned int *)(temp_v0 + 0x1d8) = 0x42960000;
    *(unsigned int *)(temp_v0 + 0xdc) = 0x43160000;
    *(unsigned int *)(temp_v0 + 0x11c) = 0x43200000;
    *(unsigned int *)(temp_v0 + 0x15c) = temp_v9;
    *(unsigned int *)(temp_v0 + 0x19c) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x1dc) = 0x42960000;
  }
LAB_0033a890:
  temp_v0 = DAT_005806a4;
  if ((g_gameState == 0x1c || g_gameState == 0x1d) ||
     ((g_gameState == 0x1e || g_gameState == 0x1f) || g_gameState == 0x20)) {
    *(unsigned int *)(DAT_005806a4 + 0xd4) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x114) = temp_v7;
    *(unsigned int *)(temp_v0 + 0x154) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x194) = 0x43f50000;
    *(unsigned int *)(temp_v0 + 0x1d4) = 0x422c0000;
  }
  return;
}

} /* extern "C" */
