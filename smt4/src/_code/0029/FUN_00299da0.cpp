/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00299da0` (_code @ 0x299da0, 0x208 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282f80(unsigned int);
int FUN_002937d0(int);
int FUN_0029eb5c(int, int);
int FUN_0029f848(int, int, int, int, int, int);
int gameGetPlayerData(void);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int g_camp; /* 0x43da90 */

/* Supplied declaration required: FUN_00282f80. */
extern int flagValueIsPositive(unsigned int);
/* Supplied declaration required: FUN_002937d0. */
/* Supplied declaration required: FUN_0029eb5c. */
/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: gameGetPlayerData. */


void FUN_00299da0(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  short *psVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  short temp_v5;
  short *psVar8;
  int temp_v6;
  
  if (*(char *)(g_camp + 0x33) == '\0') {
    switch(param_1) {
    case 0x11:
      temp_v3 = 0x3d;
      temp_v4 = 0xb4;
      psVar8 = (short *)(g_camp + 0x1e7c);
      temp_v6 = g_camp + 0x2a4;
      psVar1 = (short *)gameGetPlayerData();
      temp_v5 = *psVar1;
      break;
    case 0x12:
      temp_v3 = 0xb5;
      temp_v4 = 300;
      psVar8 = (short *)(g_camp + 0x1f6c);
      temp_v6 = g_camp + 0x308;
      temp_v0 = gameGetPlayerData();
      temp_v5 = *(short *)(temp_v0 + 2);
      break;
    case 0x13:
      temp_v3 = 0x30d;
      psVar8 = (short *)(g_camp + 0x205c);
      temp_v4 = 0x33e;
      temp_v6 = g_camp + 0x36c;
      temp_v0 = gameGetPlayerData();
      temp_v5 = *(short *)(temp_v0 + 4);
      break;
    case 0x14:
      temp_v3 = 0x12d;
      temp_v4 = 0x1a4;
      psVar8 = (short *)(g_camp + 0x20c0);
      temp_v6 = g_camp + 0x3d0;
      temp_v0 = gameGetPlayerData();
      temp_v5 = *(short *)(temp_v0 + 6);
      break;
    case 0x15:
      temp_v3 = 0x1a5;
      temp_v4 = 0x21c;
      psVar8 = (short *)(g_camp + 0x21b0);
      temp_v6 = g_camp + 0x434;
      temp_v0 = gameGetPlayerData();
      temp_v5 = *(short *)(temp_v0 + 8);
      break;
    case 0x16:
      temp_v3 = 0x21d;
      temp_v4 = 0x294;
      psVar8 = (short *)(g_camp + 0x22a0);
      temp_v6 = g_camp + 0x498;
      temp_v0 = gameGetPlayerData();
      temp_v5 = *(short *)(temp_v0 + 10);
      break;
    case 0x17:
      temp_v3 = 0x295;
      temp_v4 = 0x30c;
      psVar8 = (short *)(g_camp + 0x2390);
      temp_v6 = g_camp + 0x4fc;
      temp_v0 = gameGetPlayerData();
      temp_v5 = *(short *)(temp_v0 + 0xc);
      break;
    default:
      return;
    }
    if (temp_v6 != 0) {
      temp_v0 = 0;
      if (temp_v3 <= temp_v4) {
        do {
          temp_v1 = flagValueIsPositive(temp_v3);
          if (temp_v1 != 0) {
            psVar1 = psVar8 + temp_v0;
            temp_v0 = temp_v0 + 1;
            *psVar1 = (short)temp_v3;
          }
          temp_v3 = temp_v3 + 1;
        } while ((int)temp_v3 <= (int)temp_v4);
      }
      FUN_0029f848(temp_v6,temp_v0,9,1,1,0);
      FUN_00282f80(param_1);
      temp_v1 = 0;
      if (0 < temp_v0 + 1) {
        temp_v2 = 0;
        temp_v0 = temp_v0 + 1;
        do {
          if (*psVar8 == temp_v5) {
            temp_v1 = temp_v2;
          }
          temp_v0 = temp_v0 - 1;
          temp_v2 = temp_v2 + 1;
          psVar8 = psVar8 + 1;
        } while (temp_v0 != 0);
      }
      FUN_0029eb5c(temp_v6,temp_v1);
      FUN_002937d0(temp_v6);
      return;
    }
  }
  return;
}

} /* extern "C" */
