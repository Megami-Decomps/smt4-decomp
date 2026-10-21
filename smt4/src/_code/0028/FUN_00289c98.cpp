/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289c98` (_code @ 0x289c98, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ifTouchDecrementTimer(void);
int FUN_002a9fdc(int, int, int);
int timerStart(int, int, int);
int FUN_002bee58(int, int);

extern unsigned char g_buttonHelp; /* 0x43da28 */

/* Supplied declaration required: ifTouchDecrementTimer. */
/* Supplied declaration required: FUN_002a9fdc. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bee58. */


void FUN_00289c98(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = (*(int *)((unsigned char *)&g_buttonHelp + 0x4));
  temp_v2 = 0;
  do {
    FUN_002bee58(temp_v0 + temp_v2 * 0x8c + 0x34,1);
    temp_v1 = temp_v0 + temp_v2 * 4;
    if (*(char *)(temp_v1 + 0x494) != '\0') {
      if (param_1 != 0) {
        *(unsigned char *)(temp_v1 + 0x494) = 0;
      }
      ifTouchDecrementTimer();
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 6);
  temp_v2 = 0;
  do {
    temp_v1 = temp_v0 + temp_v2 * 0x8c + 0x37c;
    if (*(char *)(temp_v0 + 0x4c8) != '\x01') {
      FUN_002a9fdc(temp_v1,0,1);
    }
    else {
      timerStart(temp_v1,3,0);
    }
    temp_v1 = (*(int *)((unsigned char *)&g_buttonHelp + 0x4));
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  *(unsigned int *)((*(int *)((unsigned char *)&g_buttonHelp + 0x4)) + 0xc) = 0;
  *(unsigned int *)(temp_v1 + 0x10) = 3;
  return;
}

} /* extern "C" */
