/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7644` (_code @ 0x3a7644, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameDataBlocksAddFlags(int);
int FUN_002c76d8(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char g_messageMain; /* 0x57f588 */

/* Supplied declaration required: gameDataBlocksAddFlags. */
/* Supplied declaration required: FUN_002c76d8. */


void FUN_003a7644(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  param_1[1] = 0;
  param_1[2] = 0;
  if ((int *)param_1[0x82] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
    param_1[0x82] = 0;
  }
  *param_1 = 0;
  param_1[3] = 0;
  param_1[0x8e] = 0x32;
  FUN_002c76d8(4);
  gameDataBlocksAddFlags(4);
  g_messageMain = 0;
  return;
}

} /* extern "C" */
