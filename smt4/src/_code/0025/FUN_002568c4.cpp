/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002568c4` (_code @ 0x2568c4, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlQueueReflectAction(short *, int, int, unsigned int);

extern short *g_btlActionReflect; /* 0x434290 */

/* Supplied declaration required: btlQueueReflectAction. */


void FUN_002568c4(short param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  short *psVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = g_btlActionReflect;
  btlQueueReflectAction(g_btlActionReflect,(int)param_1,0,param_2);
  psVar3 = *(short **)(g_btlActionReflect + 4);
  do {
    psVar1 = psVar3;
    if (psVar1 == (short *)0x0) {
      *(unsigned char *)(psVar2 + 2) = 0x34;
      return;
    }
    psVar3 = *(short **)(psVar1 + 6);
  } while ((((char)psVar1[2] != '4') || (*psVar1 != *psVar2)) || (psVar2[1] < 0));
  psVar2[1] = -1;
  *(unsigned char *)(psVar2 + 2) = 0x34;
  return;
}

} /* extern "C" */
