/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a2f54` (_code @ 0x3a2f54, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagsSet(...);
int FUN_003fd63c(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char g_gameState; /* 0x5f15fc */

extern int FUN_00162e8c(void);
/* Supplied declaration required: gameFlagsSet. */
extern int dataTable2FType1GetEntry(int);
/* Supplied declaration required: FUN_003fd63c. */


void FUN_003a2f54(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00162e8c();
  if ((*(signed char *)((unsigned char *)&g_gameState + 0xdc)) == '\0') {
    return;
  }
  temp_v1 = (int)*(short *)(temp_v0 + 0x2a);
  temp_v0 = dataTable2FType1GetEntry(temp_v1);
  if (*(int *)(temp_v0 + 0x1c) != 0) {
    FUN_003fd63c(*(int *)(temp_v0 + 0x1c),1);
  }
  if (*(short *)(temp_v0 + 0x14) != 0) {
    gameFlagsSet(temp_v1);
    return;
  }
  gameFlagsSet(temp_v1,0xff);
  return;
}

} /* extern "C" */
