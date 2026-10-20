/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_FrameHeap_NewSection` (_code @ 0x2ac1a0, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_ut_internal_LinkListImpl_erase_2AC900(unsigned int *, unsigned int, unsigned int *);
int nw_ut_internal_LinkListImpl_insert(unsigned int *, unsigned int *, unsigned int *);

extern unsigned int *nw_ut_FrameHeap_Alloc(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2AC900. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


unsigned char nw_snd_internal_FrameHeap_NewSection(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)nw_ut_FrameHeap_Alloc(*param_1,0x18,4);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = (unsigned int)(puVar1 + 3);
    puVar1[4] = (unsigned int)(puVar1 + 3);
    *(unsigned char *)(puVar1 + 5) = 1;
    nw_ut_internal_LinkListImpl_erase_2AC900(puVar1 + 2,puVar1[3],puVar1 + 3);
    nw_ut_internal_LinkListImpl_insert(param_1 + 1,param_1 + 2,puVar1);
  }
  return puVar1 != (unsigned int *)0x0;
}

} /* extern "C" */
