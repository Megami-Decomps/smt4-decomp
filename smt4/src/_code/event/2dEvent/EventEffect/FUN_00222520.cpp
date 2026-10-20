/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00222520` (_code @ 0x222520, 0x27c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024dbc4(...);
int FUN_00287728(int);
int FUN_002c53f4(...);

extern int g_eventEffect; /* 0x43dee8 */
extern unsigned int DAT_0043df00; /* 0x43df00 */
extern unsigned int DAT_0043df04; /* 0x43df04 */

/* Supplied declaration required: FUN_0024dbc4. */
/* Supplied declaration required: FUN_00287728. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
extern int FUN_002c1d5c(void);
/* Supplied declaration required: FUN_002c53f4. */


unsigned int FUN_00222520(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = g_eventEffect;
  if (*(int *)(g_eventEffect + 8) == 0) {
    temp_v5 = 0;
    temp_v2 = temp_v5;
    do {
      temp_v3 = asdTMTexTableNodeIsLoaded((&DAT_0043df00)[temp_v5 * 3],(&DAT_0043df04)[temp_v5 * 3]);
      if (temp_v3 != 0) {
        temp_v2 = temp_v2 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 2);
    if (temp_v2 == 2) {
      FUN_00287728(0);
      *(unsigned int *)(temp_v0 + 8) = 1;
      *(unsigned char *)(temp_v0 + 0x18) = 1;
    }
  }
  else if (*(int *)(g_eventEffect + 8) == 1) {
    temp_v4 = *(int *)(g_eventEffect + 0x10) - 0xf;
    if (temp_v4 < 0x79) {
      temp_v1 = FUN_0024dbc4(0x28,0xffffff4c,0x78,temp_v4);
      *(unsigned int *)(temp_v0 + 0xc) = temp_v1;
    }
    temp_v4 = *(int *)(temp_v0 + 0x10) - 0x88;
    if (temp_v4 < 7) {
      temp_v1 = FUN_0024dbc4(0xffffff4c,0x28,6,temp_v4);
      *(unsigned int *)(temp_v0 + 0xc) = temp_v1;
    }
    temp_v4 = *(int *)(temp_v0 + 0x10) - 0x8f;
    if (temp_v4 < 8) {
      temp_v1 = FUN_0024dbc4(0x28,0xffffff4c,7,temp_v4);
      *(unsigned int *)(temp_v0 + 0xc) = temp_v1;
    }
    temp_v4 = *(int *)(temp_v0 + 0x10) - 0xc3;
    if (temp_v4 < 5) {
      temp_v1 = FUN_0024dbc4(0xffffff4c,0x28,4,temp_v4);
      *(unsigned int *)(temp_v0 + 0xc) = temp_v1;
    }
    temp_v4 = *(int *)(temp_v0 + 0x10) - 200;
    if (temp_v4 < 7) {
      temp_v1 = FUN_0024dbc4(0x28,0xffffff4c,6,temp_v4);
      *(unsigned int *)(temp_v0 + 0xc) = temp_v1;
    }
    temp_v4 = *(int *)(temp_v0 + 0x10) - 0xcf;
    if (temp_v4 < 5) {
      temp_v1 = FUN_0024dbc4(0xffffff4c,0x28,4,temp_v4);
      *(unsigned int *)(temp_v0 + 0xc) = temp_v1;
    }
    if (*(int *)(temp_v0 + 0x10) >= 0xd4) {
      temp_v1 = FUN_0024dbc4(0x28,0xffffff4c,0x2d,*(int *)(temp_v0 + 0x10) - 0xd4);
      *(unsigned int *)(temp_v0 + 0xc) = temp_v1;
    }
    temp_v1 = 0x3f19999a;
    if (*(int *)(temp_v0 + 0x10) - 0xfU < 0xbc) {
      temp_v6 = 0x3f800000;
      FUN_002c53f4(0xca);
      *(unsigned int *)(temp_v0 + 0x14) = temp_v6;
    }
    temp_v6 = 0x3f333333;
    if (*(int *)(temp_v0 + 0x10) - 0xcbU < 8) {
      FUN_002c53f4(8);
      *(unsigned int *)(temp_v0 + 0x14) = temp_v1;
    }
    if (*(int *)(temp_v0 + 0x10) >= 0xf0) {
      FUN_002c53f4(0x3c,*(int *)(temp_v0 + 0x10) - 0xf0);
      *(unsigned int *)(temp_v0 + 0x14) = temp_v6;
    }
    temp_v2 = *(int *)(temp_v0 + 0x10) + 1;
    *(int *)(temp_v0 + 0x10) = temp_v2;
    if (temp_v2 >= 301) {
      *(unsigned char *)(temp_v0 + 0x18) = 0;
      *(unsigned int *)(temp_v0 + 8) = 2;
    }
  }
  temp_v2 = FUN_002c1d5c();
  if (temp_v2 != 0) {
    temp_v5 = 0;
    temp_v2 = temp_v5;
    do {
      temp_v3 = asdTMTexTableNodeIsLoaded((&DAT_0043df00)[temp_v5 * 3],(&DAT_0043df04)[temp_v5 * 3]);
      if (temp_v3 != 0) {
        temp_v2 = temp_v2 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 2);
    if (temp_v2 == 2) {
      *(unsigned int *)(temp_v0 + 8) = 2;
    }
  }
  return 0;
}

} /* extern "C" */
