/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN9Obj421d74C1Ev` (_code @ 0x14c900, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_CurveLfoParam_Initialize(unsigned int *);

extern unsigned char DAT_00421d7c; /* 0x421d7c */
extern unsigned char DAT_00421dac; /* 0x421dac */
extern unsigned char DAT_00421dc0; /* 0x421dc0 */

extern unsigned int *FUN_001512e0(void);
/* Supplied declaration required: nw_snd_internal_CurveLfoParam_Initialize. */


unsigned int * _ZN9Obj421d74C1Ev(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_001512e0();
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x15] = 0;
  puVar1[0x11] = (unsigned int)&DAT_00421dac;
  puVar1[0x14] = (unsigned int)&DAT_00421dc0;
  *puVar1 = (unsigned int)&DAT_00421d7c;
  puVar1[0x16] = 0;
  nw_snd_internal_CurveLfoParam_Initialize(puVar1 + 0x1e);
  *(unsigned char *)(puVar1 + 0x23) = 0;
  *(unsigned char *)((int)puVar1 + 0x8d) = 0;
  *(unsigned char *)((int)puVar1 + 0x8e) = 0;
  *(unsigned char *)((int)puVar1 + 0x8f) = 0;
  *(unsigned char *)(puVar1 + 0x24) = 0;
  return puVar1;
}

} /* extern "C" */
