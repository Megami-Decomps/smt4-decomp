/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00272d44` (_code @ 0x272d44, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00352e04(int, int);
int FUN_004a00f4(int);

extern int g_gameState; /* 0x5f15fc */

extern int randRange(unsigned int);
extern int FUN_0015fa74(int, int);
extern int FUN_00352c60(void);
/* Supplied declaration required: FUN_00352e04. */
/* Supplied declaration required: FUN_004a00f4. */
extern int FUN_004bbc34(int, int);


int FUN_00272d44(void)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float in_s0;
  
  temp_v0 = (*(int *)((unsigned char *)&g_gameState + 0x4));
  if (g_gameState != 0x1c) {
    if (g_gameState == 0x1d) {
      temp_v0 = (*(int *)((unsigned char *)&g_gameState + 0x4)) + 0x14;
    }
    else if (g_gameState == 0x1e) {
      temp_v0 = (*(int *)((unsigned char *)&g_gameState + 0x4)) + 0x28;
    }
    else {
      if (g_gameState != 0x1f) {
        return 0;
      }
      temp_v0 = (*(int *)((unsigned char *)&g_gameState + 0x4)) + 0x3c;
    }
  }
  if (temp_v0 != 0) {
    temp_v1 = FUN_00352c60();
    if (temp_v1 == 0) {
      temp_v2 = FUN_004bbc34(g_gameState,(*(int *)((unsigned char *)&g_gameState + 0x4)));
      temp_v1 = 0;
      if (temp_v2 != 0) {
        temp_v1 = FUN_0015fa74(g_gameState,(*(int *)((unsigned char *)&g_gameState + 0x4)));
        FUN_004a00f4(2);
        if ((int)(unsigned int)*(unsigned short *)(temp_v1 + 8) <= (int)in_s0) {
          return 0;
        }
        FUN_00352e04((int)(short)temp_v0,1);
        temp_v1 = randRange(1);
        temp_v1 = temp_v1 + 1;
      }
      return temp_v1;
    }
  }
  return 0;
}

} /* extern "C" */
