/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a8bc` (_code @ 0x37a8bc, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdModelCommandBlockRelease(void);
int FUN_00167ba0(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */
extern int DAT_005b3fe4; /* 0x5b3fe4 */
extern int DAT_005b3fe8; /* 0x5b3fe8 */

/* Supplied declaration required: asdModelCommandBlockRelease. */
/* Supplied declaration required: FUN_00167ba0. */


void FUN_0037a8bc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_00167ba0();
  temp_v0 = DAT_005b3fe4;
  *(int *)(DAT_005b3fe4 + DAT_005b3fe8 * 4) = param_1;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0065;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  if (param_1 != 0) {
    *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4) =
         *(unsigned int *)(g_renderCtx + *(int *)(g_renderCtx + 0x1338) * 4 + 0x1340);
    *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0066;
    DAT_005b3fe8 = DAT_005b3fe8 + 2;
    *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4) =
         *(unsigned int *)(g_renderCtx + *(int *)(g_renderCtx + 0x1358) * 4 + 0x1360);
    *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0067;
    DAT_005b3fe8 = DAT_005b3fe8 + 2;
  }
  asdModelCommandBlockRelease();
  return;
}

} /* extern "C" */
