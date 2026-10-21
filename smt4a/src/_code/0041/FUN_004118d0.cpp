/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004118d0` (_code @ 0x4118d0, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlStageGetModeIndex(unsigned int);
int FUN_004aaa94(unsigned int);
int FUN_004f5238(unsigned int, int, int, int, int, int, int, int, int);
int FUN_004fb43c(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned int g_btlAux; /* 0x573808 */
extern unsigned int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: btlStageGetModeIndex. */
/* Supplied declaration required: FUN_004aaa94. */
/* Supplied declaration required: FUN_004f5238. */
/* Supplied declaration required: FUN_004fb43c. */


void FUN_004118d0(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  FUN_004aaa94(g_btlUiBlock);
  btlStageGetModeIndex(param_1);
  FUN_004f5238(g_btlAux,0,0,9,1,6,0,1,0);
  FUN_004f5238(g_btlAux,0,0,9,1,6,0,1,0);
  FUN_004f5238(g_btlAux,0,0,9,1,6,0,1,0);
  FUN_004fb43c(0,0,0x10000bd,1,0,0,0);
  return;
}

} /* extern "C" */
