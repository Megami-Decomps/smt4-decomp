/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353c20` (_code @ 0x353c20, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

void FUN_00357b18(unsigned int, int, int, int, int, int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int g_mapEnemy; /* 0x5806d4 */

/* Supplied declaration required: FUN_00357b18. */


void FUN_00353c20(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(char *)(param_1 + 0x50) != '\0') {
    if (*(int *)(param_1 + 0x84) == 3 || *(int *)(param_1 + 0x84) == 2) {
      FUN_00357b18(*(unsigned int *)(param_1 + 0x58),*(unsigned int *)(g_mapEnemy + 0xc),
                   *(unsigned int *)(g_mapEnemy + 0x10),(int)*(float *)(param_1 + 0x20),
                   (int)*(float *)(param_1 + 0x24),(int)*(float *)(param_1 + 0x28),0);
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    FUN_00357b18(*(unsigned int *)(param_1 + 0x58),*(unsigned int *)(g_mapEnemy + 0xc),
                 *(unsigned int *)(g_mapEnemy + 0x10),(int)*(float *)(param_1 + 0x20),
                 (int)*(float *)(param_1 + 0x24),(int)*(float *)(param_1 + 0x28),1);
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
