/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00265110` (_code @ 0x265110, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026493c(int);
int FUN_00265180(void);
int FUN_00265bf8(int);
int FUN_00265f50(int);
int FUN_002fb7dc(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int g_lmapMainState; /* 0x447060 */
extern signed char DAT_0049fc64; /* 0x49fc64 */

/* Supplied declaration required: FUN_0026493c. */
/* Supplied declaration required: FUN_00265180. */
/* Supplied declaration required: FUN_00265bf8. */
/* Supplied declaration required: FUN_00265f50. */
/* Supplied declaration required: FUN_002fb7dc. */


void FUN_00265110(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = g_lmapMainState;
  if (DAT_0049fc64 == '\0') {
    if (*(char *)(g_lmapMainState + 0xb) != '\0') {
      FUN_002fb7dc();
    }
    else {
      FUN_0026493c(g_lmapMainState);
    }
  }
  FUN_00265f50(temp_v0);
  FUN_00265bf8(temp_v0);
  if (*(int *)(g_lmapMainState + 0x40) != 100) {
    FUN_00265180();
    return;
  }
  return;
}

} /* extern "C" */
