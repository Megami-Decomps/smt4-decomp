/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312af0` (_code @ 0x312af0, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00295108(int);
int FUN_002d8c90(...);
int FUN_0039933c(void);
int FUN_003b5d1c(void);

extern int *g_popupState; /* 0x58104c */

extern int lmapMainIsRunning(void);
/* Supplied declaration required: FUN_00295108. */
extern int FUN_002c2758(unsigned int);
extern int FUN_002d8b58(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002d8c90. */
/* Supplied declaration required: FUN_0039933c. */
/* Supplied declaration required: FUN_003b5d1c. */


void FUN_00312af0(void)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    piVar1 = g_popupState;
    temp_v1 = g_popupState[temp_v2 + 0x2c];
    if (temp_v1 == 0xd) {
      if (*g_popupState != 0) {
        if (*g_popupState == 0xd) {
          g_popupState[temp_v2 + 0x2c] = 0;
          return;
        }
        temp_v0 = 0xd;
        FUN_002d8c90(temp_v0);
      }
      else {
        temp_v1 = lmapMainIsRunning();
        if (temp_v1 != 0) {
          FUN_0039933c();
        }
        else {
          FUN_003b5d1c();
        }
        piVar1 = g_popupState;
        *g_popupState = 0xd;
        piVar1[1] = 0;
        temp_v1 = FUN_002d8b58(0xf,0);
        g_popupState[5] = temp_v1;
      }
      g_popupState[temp_v2 + 0x2c] = 0;
      return;
    }
    if (temp_v1 == 0x10) {
      if (*g_popupState == 0) {
        *g_popupState = 0x10;
        piVar1[1] = 0;
        temp_v1 = FUN_002c2758(6);
        if (temp_v1 != 1) {
          temp_v1 = FUN_002d8b58(0x11,0);
          g_popupState[5] = temp_v1;
        }
        else {
          temp_v1 = FUN_002d8b58(0x18,0);
          g_popupState[5] = temp_v1;
        }
        g_popupState[temp_v2 + 0x2c] = 0;
        return;
      }
      if (*g_popupState == 0x10) {
        g_popupState[temp_v2 + 0x2c] = 0;
        return;
      }
      temp_v0 = 0x10;
      FUN_002d8c90(temp_v0);
      g_popupState[temp_v2 + 0x2c] = 0;
      return;
    }
    if (temp_v1 != 0x12) {
      if (temp_v1 == 0x13) {
        if (*g_popupState != 0) {
          if (*g_popupState != 0x13) {
            FUN_002d8c90(0x13);
          }
        }
        else {
          g_popupState[1] = 0;
          *piVar1 = 0x13;
          temp_v1 = FUN_002d8b58(0x14,0);
          g_popupState[5] = temp_v1;
        }
        g_popupState[temp_v2 + 0x2c] = 0;
      }
    }
    else {
      FUN_00295108(1);
      g_popupState[temp_v2 + 0x2c] = 0;
    }
    temp_v1 = temp_v2 + 1;
    g_popupState[temp_v2 + 0x2c] = 0;
    temp_v2 = temp_v1;
    if (temp_v1 >= 0x10) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
