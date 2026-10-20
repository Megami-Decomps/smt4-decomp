/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00292c0c` (_code @ 0x292c0c, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00294f64(void);
int FUN_002958f8(int, int);
int asdMemFree(unsigned int *);
int jobStop(unsigned int, int);
int FUN_002f6590(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern signed char g_gameGlobals; /* 0x44e140 */
extern unsigned int *DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_00294f64. */
/* Supplied declaration required: FUN_002958f8. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: FUN_002f6590. */


void FUN_00292c0c(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0044e144;
  g_gameGlobals = g_gameGlobals - '\x01';
  if ('\0' < g_gameGlobals) {
    return;
  }
  if (*(short *)(DAT_0044e144 + 0x4bf) != 0) {
    FUN_002958f8((int)*(short *)(DAT_0044e144 + 0x4bf),1);
  }
  if ((0 < *(short *)((int)puVar1 + 0x12fe)) && (puVar1[0x79d] != 0)) {
    FUN_00294f64();
    puVar1[0x79d] = 0;
  }
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  DAT_0044e144 = (unsigned int *)0x0;
  g_gameGlobals = 0;
  FUN_002f6590();
  return;
}

} /* extern "C" */
