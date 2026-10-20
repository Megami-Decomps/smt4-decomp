/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023547c` (_code @ 0x23547c, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00189c24(void);
int FUN_00250798(void);
int FUN_0028fe0c(int, int);
int FUN_00290d5c(int);
int timerStart(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_uiQuest; /* 0x43dd50 */

/* Supplied declaration required: FUN_00189c24. */
/* Supplied declaration required: FUN_00250798. */
/* Supplied declaration required: FUN_0028fe0c. */
/* Supplied declaration required: FUN_00290d5c. */
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: timerStart. */


void FUN_0023547c(unsigned char param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = g_uiQuest;
  *(unsigned char *)(g_uiQuest + 0x5f1) = 1;
  *(unsigned char *)(temp_v0 + 0x5f8) = param_1;
  FUN_00189c24();
  temp_v0 = g_uiQuest;
  *(unsigned char *)(g_uiQuest + 0x5c4) = 0;
  if (*(int *)(temp_v0 + 4) != 0xd) {
    FUN_00250798();
    temp_v1 = FUN_0029efc0(temp_v0 + 0x660);
    temp_v2 = FUN_0029efa8(temp_v0 + 0x660);
    FUN_0028fe0c(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x78a),1);
    timerStart(temp_v0 + 0x34,0);
    temp_v0 = g_uiQuest;
    temp_v3 = *(unsigned int *)(g_uiQuest + 4);
    *(unsigned int *)(g_uiQuest + 4) = 1;
    *(unsigned int *)(temp_v0 + 8) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x10) = 0;
    return;
  }
  timerStart(temp_v0 + 0x34,2,0);
  temp_v0 = g_uiQuest;
  temp_v3 = *(unsigned int *)(g_uiQuest + 4);
  *(unsigned int *)(g_uiQuest + 4) = 3;
  *(unsigned int *)(temp_v0 + 8) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  FUN_00290d5c(0xa0);
  return;
}

} /* extern "C" */
