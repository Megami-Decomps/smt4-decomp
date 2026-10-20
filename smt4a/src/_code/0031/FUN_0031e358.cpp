/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031e358` (_code @ 0x31e358, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019de98(int, unsigned int);
int FUN_0038892c(int, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0038892c. */
extern int QuestCenter_GetActiveEntry(void);


void FUN_0031e358(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = QuestCenter_GetActiveEntry();
  FUN_0019de98(0,0xf4f4f4ff);
  temp_v1 = QuestCenter_GetActiveEntry();
  FUN_0038892c(temp_v0 + 0xadc,*(unsigned int *)(temp_v1 + 0xcf0));
  return;
}

} /* extern "C" */
