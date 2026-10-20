/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c49bc` (_code @ 0x3c49bc, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00435e00; /* 0x435e00 */
extern unsigned char DAT_00435e01; /* 0x435e01 */
extern unsigned char DAT_00435e02; /* 0x435e02 */
extern unsigned char DAT_00435e03; /* 0x435e03 */
extern unsigned int DAT_00435e04; /* 0x435e04 */
extern unsigned int DAT_00435e08; /* 0x435e08 */
extern unsigned int DAT_00435e20; /* 0x435e20 */

extern unsigned int *asdListBoxGetItemText(unsigned int, unsigned int);
extern unsigned int *asdListBoxGetItemValuePtr(unsigned int, unsigned int);
extern unsigned int FUN_0025628c(unsigned int);


void FUN_003c49bc(int param_1)

{
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned char *puVar4;
  
  temp_v1 = FUN_0025628c(*(unsigned int *)(param_1 + 0x10));
  switch(temp_v1) {
  case 0:
    puVar3 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),0);
    temp_v0 = (unsigned char)*puVar3;
    puVar4 = &DAT_00435e00;
    break;
  case 1:
    puVar3 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),1);
    temp_v0 = (unsigned char)*puVar3;
    puVar4 = &DAT_00435e01;
    break;
  case 2:
    puVar3 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),2);
    temp_v0 = (unsigned char)*puVar3;
    puVar4 = &DAT_00435e02;
    break;
  case 3:
    puVar3 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),3);
    temp_v0 = (unsigned char)*puVar3;
    puVar4 = &DAT_00435e03;
    break;
  case 4:
    puVar3 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),4);
    temp_v1 = *puVar3;
    puVar3 = &DAT_00435e04;
    *puVar3 = temp_v1;
    return;
  case 5:
    puVar3 = (unsigned int *)asdListBoxGetItemText(*(unsigned int *)(param_1 + 0x10),5);
    temp_v1 = *puVar3;
    puVar3 = &DAT_00435e08;
    *puVar3 = temp_v1;
    return;
  case 6:
    puVar3 = (unsigned int *)asdListBoxGetItemText(*(unsigned int *)(param_1 + 0x10),6);
    DAT_00435e20 = *puVar3;
    return;
  default:
    return;
  }
  *puVar4 = temp_v0;
  return;
}

} /* extern "C" */
