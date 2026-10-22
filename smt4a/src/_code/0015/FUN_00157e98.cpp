/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157e98` (_code @ 0x157e98, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001575cc(int);
int FUN_0017cdcc(unsigned int, unsigned int);
int asdModelCommitCommandRange(unsigned int *, unsigned int *);
int FUN_0019a270(unsigned int *, int, int);
int FUN_0019a2ac(unsigned int *, int, int);
int asdGxGetCommandCursor(void);

extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: FUN_001575cc. */
extern unsigned int *FUN_001696f4(void);
/* Supplied declaration required: FUN_0017cdcc. */
/* Supplied declaration required: asdModelCommitCommandRange. */
/* Supplied declaration required: FUN_0019a270. */
/* Supplied declaration required: FUN_0019a2ac. */
/* Supplied declaration required: asdGxGetCommandCursor. */


unsigned int FUN_00157e98(int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    return 0;
  }
  temp_v0 = 0;
  temp_v1 = 0;
  puVar1 = (unsigned int *)FUN_001696f4();
  if (puVar1 == (unsigned int *)0x1) {
    puVar1 = *(unsigned int **)(g_renderCtx + 0x52c);
    if (puVar1 == (unsigned int *)0x0) {
      temp_v0 = param_2 + 0x248;
      temp_v1 = param_2 + 0x1d8;
    }
    else if (puVar1 == (unsigned int *)0x1) {
      temp_v0 = param_2 + 0x2f8;
      temp_v1 = param_2 + 0x288;
    }
    else if (puVar1 == (unsigned int *)0x2) {
      temp_v0 = param_2 + 0xa8;
      temp_v1 = param_2 + 0x38;
    }
  }
  else {
    temp_v0 = param_2 + 0xa8;
    temp_v1 = param_2 + 0x38;
  }
  asdGxGetCommandCursor();
  *puVar1 = *(unsigned char *)(param_1 + 0xb2) | 0x80000000;
  puVar1[1] = 0xf02c0;
  FUN_0019a2ac(puVar1 + 2,temp_v0,0xff02c1);
  puVar1[0x14] = *(unsigned char *)(param_1 + 0xba) | 0x80000000;
  puVar1[0x15] = 0xf02c0;
  FUN_0019a270(puVar1 + 0x16,temp_v1,0xbf02c1);
  asdModelCommitCommandRange(puVar1,puVar1 + 0x24);
  FUN_0017cdcc(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x9c) * 0x4c + 0x48),
               *(unsigned int *)(param_1 + 0xa0));
  FUN_001575cc(g_renderCtx);
  return 1;
}

} /* extern "C" */
