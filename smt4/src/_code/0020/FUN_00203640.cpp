/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00203640` (_code @ 0x203640, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int buttonHelpSetPreset(int);
int timerStart(int, int, int);
int FUN_002bee58(int, int);
int FUN_002bf810(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int g_uiQuest; /* 0x43dd50 */

/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002bf810. */


void FUN_00203640(unsigned short param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = g_uiQuest;
  *(unsigned short *)(g_uiQuest + 0x97e) = param_1;
  *(unsigned int *)(temp_v0 + 0x5e8) = 0;
  timerStart(temp_v0 + 0x34,1,0);
  FUN_002bee58(temp_v0 + 0x2f0,2);
  FUN_002bee58(temp_v0 + 0x37c,3);
  temp_v0 = g_uiQuest;
  temp_v1 = *(unsigned int *)(g_uiQuest + 4);
  *(unsigned int *)(g_uiQuest + 4) = 0x11;
  *(unsigned int *)(temp_v0 + 8) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  buttonHelpSetPreset(0x1a);
  FUN_002bf810(0x100025d);
  return;
}

} /* extern "C" */
