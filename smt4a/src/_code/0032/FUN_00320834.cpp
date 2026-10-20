/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00320834` (_code @ 0x320834, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_uiQuest; /* 0x57f28c */
extern unsigned char g_gameState; /* 0x5f15fc */

/* Supplied declaration required: sysPlaySe. */


void FUN_00320834(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = g_uiQuest;
  temp_v1 = *(int *)(g_uiQuest + 0x918);
  if (*(char *)(g_uiQuest + 0x90c) != '\0') {
    if ((*(signed char *)((unsigned char *)&g_gameState + 0x460)) != '\0') {
      if (temp_v1 == 2) {
        if (*(int *)(g_uiQuest + 0x910) == 0) {
          sysPlaySe(0x10f);
        }
        if (*(int *)(temp_v0 + 0x910) == 1) {
          sysPlaySe(0x110);
          return;
        }
      }
    }
    else if (temp_v1 == 2) {
      if (*(int *)(g_uiQuest + 0x910) == 0) {
        sysPlaySe(0xd7);
      }
      if (*(int *)(temp_v0 + 0x910) == 1) {
        sysPlaySe(0xd6);
        return;
      }
    }
  }
  else {
    if (temp_v1 == 2) {
      if (*(int *)(g_uiQuest + 0x910) == 0) {
        sysPlaySe(0xd7);
      }
      if (*(int *)(temp_v0 + 0x910) == 1) {
        sysPlaySe(0xd6);
      }
    }
    if (*(int *)(temp_v0 + 0x918) == 3) {
      if (*(int *)(temp_v0 + 0x910) == 0) {
        sysPlaySe(0xd8);
      }
      if (*(int *)(temp_v0 + 0x910) == 1) {
        sysPlaySe(0xd9);
      }
      if (*(int *)(temp_v0 + 0x910) == 2) {
        sysPlaySe(0xda);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
