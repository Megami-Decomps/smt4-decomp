/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001294fc` (_code @ 0x1294fc, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f5020(...);
int FUN_004325f4(...);

extern int FUN_0030cbf0(...); /* 0x30cbf0 */
extern unsigned char DAT_005949d8; /* 0x5949d8 */

extern unsigned int rt_malloc(int);
extern unsigned int *FUN_002f5010(unsigned int);
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_004325f4. */


void FUN_001294fc(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (((*(unsigned int *)((unsigned char *)&DAT_005949d8 + 0x28)) == 0xffffffff) &&
     (puVar1 = (unsigned int *)FUN_002f5010(0xffffff30), puVar1 != (unsigned int *)0x0)) {
    puVar1[1] = 0xffffffff;
    *puVar1 = 0xd8;
    FUN_002f5020(puVar1 + 2,FUN_0030cbf0,0xd8,0xffffffff);
  }
  temp_v0 = rt_malloc((*(unsigned int *)((unsigned char *)&DAT_005949d8 + 0x28)) * 0xd8);
  *(unsigned int *)(param_1 + 8) = temp_v0;
  for (temp_v2 = 0; temp_v2 < (*(unsigned int *)((unsigned char *)&DAT_005949d8 + 0x28)); temp_v2 = temp_v2 + 1) {
    temp_v1 = *(int *)(param_1 + 8) + temp_v2 * 0xd8;
    if (temp_v1 != 0) {
      FUN_004325f4(temp_v1,param_1 + 0xe8);
    }
  }
  return;
}

} /* extern "C" */
