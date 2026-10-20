/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c4f38` (_code @ 0x3c4f38, 0x214 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_004398d4; /* 0x4398d4 */

extern unsigned int *asdListBoxGetItemText(unsigned int);
extern unsigned int *asdListBoxGetItemValuePtr(unsigned int);
extern unsigned int FUN_0025628c(unsigned int);


void FUN_003c4f38(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  temp_v1 = FUN_0025628c(*(unsigned int *)(param_1 + 0x10));
  temp_v0 = DAT_004398d4;
  puVar4 = (unsigned int *)(DAT_004398d4 + 0x90);
  switch(temp_v1) {
  case 0:
    puVar3 = (unsigned int *)asdListBoxGetItemText(*(unsigned int *)(param_1 + 0x10));
    *puVar4 = *puVar3;
    return;
  case 1:
    puVar4 = (unsigned int *)asdListBoxGetItemText(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(temp_v0 + 0x94) = *puVar4;
    return;
  case 2:
    puVar4 = (unsigned int *)asdListBoxGetItemText(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(temp_v0 + 0x98) = *puVar4;
    return;
  case 3:
    puVar4 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_004398d4 + 0x40) = *puVar4;
    return;
  case 4:
    puVar4 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_004398d4 + 0x44) = *puVar4;
    return;
  case 5:
    puVar4 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_004398d4 + 0x48) = *puVar4;
    return;
  case 6:
    puVar4 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_004398d4 + 0x4c) = *puVar4;
    return;
  case 7:
    puVar4 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_004398d4 + 0x50) = *puVar4;
    return;
  case 8:
    puVar4 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_004398d4 + 0x54) = *puVar4;
    return;
  case 9:
    puVar4 = (unsigned int *)asdListBoxGetItemText(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_004398d4 + 0x58) = *puVar4;
    return;
  case 10:
    puVar4 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_004398d4 + 0x5c) = *puVar4;
    return;
  case 0xb:
    puVar4 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_004398d4 + 0x60) = *puVar4;
    return;
  case 0xc:
    puVar4 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_004398d4 + 100) = *puVar4;
    return;
  case 0xd:
    puVar4 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_004398d4 + 0x68) = *puVar4;
    return;
  case 0xe:
    puVar4 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_004398d4 + 0x6c) = *puVar4;
    return;
  case 0xf:
    puVar4 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_004398d4 + 0x70) = *puVar4;
    return;
  default:
    return;
  }
}

} /* extern "C" */
