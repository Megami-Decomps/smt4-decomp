/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047f444` (_code @ 0x47f444, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015f490(int, unsigned int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_00573cc8; /* 0x573cc8 */
extern unsigned int DAT_00573ccc; /* 0x573ccc */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_0015f490. */


void FUN_0047f444(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = btlGetMainState();
  if (((-1 < *(short *)(temp_v0 + 0x2004)) &&
      (puVar2 = (unsigned int *)(*(int *)(temp_v0 + 0x1ffc) + *(short *)(temp_v0 + 0x2004) * 0x408),
      (DAT_00573cc8 & *puVar2) != 0 || (DAT_00573ccc & puVar2[1]) != 0)) &&
     (-1 < *(short *)((int)puVar2 + 0x166))) {
    FUN_0015f490((int)*(short *)((int)puVar2 + 0x166),param_1,1,0);
    return;
  }
  return;
}

} /* extern "C" */
