/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_FrameHeap_Alloc` (_code @ 0x466c3c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_ut_internal_LinkListImpl_insert(unsigned int, unsigned int, unsigned int *);

extern unsigned int *nw_ut_FrameHeap_Alloc(unsigned int, int, unsigned int);
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


unsigned int *
nw_snd_internal_FrameHeap_Alloc
          (unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = (unsigned int *)
           nw_ut_FrameHeap_Alloc(*param_1,((param_2 + 0x1fU) & 0xffffffe0) + 0x20,0x20);
  puVar2 = puVar1;
  if (puVar1 != (unsigned int *)0x0) {
    puVar2 = puVar1 + 8;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = (unsigned int)puVar2;
    puVar1[3] = param_2;
    puVar1[4] = param_3;
    puVar1[5] = param_4;
    nw_ut_internal_LinkListImpl_insert(param_1[3] + 8,param_1[3] + 0xc,puVar1);
  }
  return puVar2;
}

} /* extern "C" */
