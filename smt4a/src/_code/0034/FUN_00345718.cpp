/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00345718` (_code @ 0x345718, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(int, int, int, int, int);
int uiSpriteSetKeyframe(int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char g_messageMain; /* 0x57f588 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: uiSpriteSetKeyframe. */


unsigned int FUN_00345718(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&g_messageMain + 0x8));
  temp_v1 = (*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0xb8c;
  if (param_1 != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x94) = 1;
    FUN_0014e188(temp_v1,8,0,temp_v0 + 0x194,0xb);
    uiSpriteSetKeyframe(temp_v1,8,0);
  }
  else {
    *(unsigned char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x94) = 2;
    FUN_0014e188(temp_v1,8,0,temp_v0 + 0x194,0xb);
    uiSpriteSetKeyframe(temp_v1,9,0);
  }
  return 1;
}

} /* extern "C" */
