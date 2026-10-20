/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ab92c` (_code @ 0x2ab92c, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a1828(unsigned int *, int, int);
int FUN_002a18ac(unsigned int *, int, int);

extern unsigned int *g_commandBufferCursor; /* 0x4652a0 */

/* Supplied declaration required: FUN_002a1828. */
/* Supplied declaration required: FUN_002a18ac. */


void FUN_002ab92c(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  if (*(int *)(param_1 + 0x28) != param_2 || param_3 != 0) {
    *(int *)(param_1 + 0x28) = param_2;
    puVar1 = g_commandBufferCursor;
    g_commandBufferCursor[1] = 0xf02c0;
    *puVar1 = 0x8000005a;
    FUN_002a1828(puVar1 + 2,param_2 + 0x148,0xbf02c1);
    puVar2 = g_commandBufferCursor;
    puVar3 = g_commandBufferCursor + 0x10;
    puVar1 = g_commandBufferCursor + 0x11;
    g_commandBufferCursor = puVar3;
    *puVar1 = 0xf02c0;
    *puVar3 = 0x80000056;
    FUN_002a18ac(puVar2 + 0x12,param_2 + 0x1a8,0xff02c1);
    puVar2 = g_commandBufferCursor;
    puVar3 = g_commandBufferCursor + 0x14;
    puVar1 = g_commandBufferCursor + 0x15;
    g_commandBufferCursor = puVar3;
    *puVar1 = 0xf0290;
    *puVar3 = 0x8000005a;
    FUN_002a1828(puVar2 + 0x16,param_2 + 0x148,0xbf0291);
    puVar2 = g_commandBufferCursor;
    puVar3 = g_commandBufferCursor + 0x10;
    puVar1 = g_commandBufferCursor + 0x11;
    g_commandBufferCursor = puVar3;
    *puVar1 = 0xf0290;
    *puVar3 = 0x80000056;
    FUN_002a18ac(puVar2 + 0x12,param_2 + 0x1a8,0xff0291);
    g_commandBufferCursor = g_commandBufferCursor + 0x14;
  }
  return;
}

} /* extern "C" */
