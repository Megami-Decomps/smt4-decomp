/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002905d0` (_code @ 0x2905d0, 0x1c0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b8454(...);
int buttonHelpSetPreset(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int g_uiQuest; /* 0x43dd50 */

extern int FUN_0029022c(void);
extern unsigned int FUN_002903f0(void);
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: FUN_002b8454. */
/* Supplied declaration required: buttonHelpSetPreset. */


void FUN_002905d0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v4 = g_uiQuest;
  if (*(char *)(g_uiQuest + 0x5c4) != '\0') {
    if (*(int *)(g_uiQuest + 0x5d0) == 1) {
      buttonHelpSetPreset(0x6c);
    }
    if (*(int *)(temp_v4 + 0x5d0) == 2) {
      if (*(int *)(temp_v4 + 0x5c8) == 0) {
        buttonHelpSetPreset(0x6d);
      }
      if (*(int *)(temp_v4 + 0x5c8) == 1) {
        buttonHelpSetPreset(0x6e);
        return;
      }
    }
    return;
  }
  if (*(int *)(g_uiQuest + 0x5d0) == 1) {
    buttonHelpSetPreset(0x6f);
  }
  if (*(int *)(temp_v4 + 0x5d0) == 2) {
    if (*(int *)(temp_v4 + 0x5c8) == 0) {
      buttonHelpSetPreset(0x70);
    }
    if (*(int *)(temp_v4 + 0x5c8) == 1) {
      buttonHelpSetPreset(0x71);
    }
  }
  if (*(int *)(temp_v4 + 0x5d0) == 3) {
    if (*(int *)(temp_v4 + 0x5c8) == 0) {
      buttonHelpSetPreset(0x72);
    }
    if (*(int *)(temp_v4 + 0x5c8) == 1) {
      buttonHelpSetPreset(0x73);
    }
    if (*(int *)(temp_v4 + 0x5c8) == 2) {
      buttonHelpSetPreset(0x74);
    }
  }
  if (*(char *)(temp_v4 + 0x5f1) != '\0') {
    FUN_002b8454(5,1,0x32);
    FUN_002b8454(2,0x12,0,1);
  }
  temp_v1 = FUN_0029efc0(temp_v4 + 0x660);
  temp_v2 = FUN_0029efa8(temp_v4 + 0x660);
  temp_v0 = *(unsigned short *)(temp_v4 + (temp_v2 + temp_v1) * 2 + 0x78a);
  temp_v3 = FUN_002903f0();
  if (temp_v3 == temp_v0) {
    FUN_002b8454(5,1,0x33);
  }
  else if (*(char *)(temp_v4 + 0x5f1) == '\0') {
    FUN_002b8454(5,1,0x31);
  }
  temp_v4 = FUN_0029022c();
  if (temp_v4 == 0) {
    FUN_002b8454(2,0x12,0,1);
    return;
  }
  FUN_002b8454(2,4,0x33,1);
  return;
}

} /* extern "C" */
