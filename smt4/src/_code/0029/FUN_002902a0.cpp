/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002902a0` (_code @ 0x2902a0, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiFadeRequestClear(void);
int FUN_0029eb5c(int, int);
int buttonHelpSetPreset(int);
int timerStart(int, int);
int FUN_002bf810(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int g_uiQuest; /* 0x43dd50 */

/* Supplied declaration required: uiFadeRequestClear. */
extern unsigned char FUN_00298f88(unsigned int);
/* Supplied declaration required: FUN_0029eb5c. */
extern int FUN_0029ee54(int);
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bf810. */


void FUN_002902a0(unsigned int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = g_uiQuest;
  *(short *)(g_uiQuest + 0x97e) = (short)param_1;
  temp_v1 = FUN_00298f88(param_1);
  *(unsigned char *)(temp_v0 + 0x5c4) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x5ec) = 0x3e55cfab;
  timerStart(temp_v0 + 0x408,0);
  if (param_2 == 0) {
    *(unsigned char *)(temp_v0 + 0x5f0) = 0;
  }
  else {
    *(unsigned char *)(temp_v0 + 0x5f0) = 1;
    temp_v4 = 0;
    if (*(char *)(temp_v0 + 0x5c4) != '\0') {
      temp_v6 = temp_v0 + 0x5fc;
      temp_v5 = temp_v0 + 0x6c4;
    }
    else {
      temp_v6 = temp_v0 + 0x660;
      temp_v5 = temp_v0 + 0x78a;
    }
    temp_v2 = FUN_0029ee54(temp_v6);
    if (0 < temp_v2) {
      do {
        if (*(unsigned short *)(temp_v5 + temp_v4 * 2) == param_1) {
          FUN_0029eb5c(temp_v6,temp_v4);
          break;
        }
        temp_v4 = temp_v4 + 1;
        temp_v2 = FUN_0029ee54(temp_v6);
      } while (temp_v4 < temp_v2);
    }
    timerStart(temp_v0 + 0x34,0);
  }
  uiFadeRequestClear();
  temp_v0 = g_uiQuest;
  temp_v3 = *(unsigned int *)(g_uiQuest + 4);
  *(unsigned int *)(g_uiQuest + 4) = 0x14;
  *(unsigned int *)(temp_v0 + 8) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  buttonHelpSetPreset(0x1a);
  FUN_002bf810(0x100025e);
  return;
}

} /* extern "C" */
