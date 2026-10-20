/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019e290` (_code @ 0x19e290, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int, unsigned int, unsigned int, unsigned int);
int asdMemFree(unsigned int *);
int asdOperatorDelete(int);
int FUN_004b7a54(void);
int owner4DDestroy(int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern unsigned int *g_placeWin; /* 0x57f578 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: FUN_004b7a54. */
/* Supplied declaration required: owner4DDestroy. */


void FUN_0019e290(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int unaff_r4;
  
  FUN_004b7a54();
  owner4DDestroy(param_1);
  if (*(int *)(param_1 + 0x1218) != 0) {
    asdOperatorDelete(*(int *)(param_1 + 0x1218));
  }
  *(unsigned int *)(param_1 + 0x1218) = 0;
  puVar1 = g_placeWin;
  jobStop(*g_placeWin,0,param_3,param_4,unaff_r4);
  asdMemFree(puVar1);
  g_placeWin = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
