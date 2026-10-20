/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00199024` (_code @ 0x199024, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028ed3c(int, int, int);
int FUN_0028ee90(void);
int FUN_0028eeb8(int);
int FUN_0028ffb8(int);
int FUN_00290404(void);
int FUN_002b6b38(void);
int buttonHelpSetPreset(int);
int FUN_002bee58(int, int);

extern int g_uiQuest; /* 0x43dd50 */

/* Supplied declaration required: FUN_0028ed3c. */
/* Supplied declaration required: FUN_0028ee90. */
/* Supplied declaration required: FUN_0028eeb8. */
/* Supplied declaration required: FUN_0028ffb8. */
/* Supplied declaration required: FUN_00290404. */
extern int scrScriptProcessStartEntry(unsigned int, unsigned int);
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: FUN_002b6b38. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: FUN_002bee58. */


void FUN_00199024(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = g_uiQuest;
  *(unsigned char *)(g_uiQuest + 0x5f3) = 1;
  temp_v1 = FUN_0029efc0(temp_v3 + 0x660);
  temp_v2 = FUN_0029efa8(temp_v3 + 0x660);
  temp_v0 = *(unsigned short *)(temp_v3 + (temp_v2 + temp_v1) * 2 + 0x78a);
  FUN_0028eeb8(temp_v0);
  FUN_002b6b38();
  FUN_0028ee90();
  FUN_0028ffb8(temp_v0);
  FUN_002bee58(temp_v3 + 0x264,2);
  FUN_0028ed3c(temp_v0,0,1);
  temp_v3 = scrScriptProcessStartEntry(*(unsigned int *)(temp_v3 + 0x5b4),3);
  if (temp_v3 != 0) {
    buttonHelpSetPreset(0x9e);
    FUN_00290404();
    temp_v3 = g_uiQuest;
    *(unsigned int *)(g_uiQuest + 8) = *(unsigned int *)(g_uiQuest + 4);
    *(unsigned int *)(temp_v3 + 4) = 0xc;
    *(unsigned int *)(temp_v3 + 0x10) = 0;
  }
  return;
}

} /* extern "C" */
