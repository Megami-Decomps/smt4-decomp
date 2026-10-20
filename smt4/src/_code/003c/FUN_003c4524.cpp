/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c4524` (_code @ 0x3c4524, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0022a444(unsigned int, unsigned int);
extern unsigned int *FUN_0022a464(unsigned int);
extern unsigned int FUN_0025628c(unsigned int);


void FUN_003c4524(int param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  
  temp_v0 = FUN_0025628c(*(unsigned int *)(param_1 + 0x10));
  puVar5 = (unsigned int *)(param_2 + 0x44a8);
  switch(temp_v0) {
  case 0:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *puVar5 | 0x1000;
    }
    else {
      temp_v2 = *puVar5 & 0xffffefff;
    }
    break;
  case 1:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *puVar5 | 0x2000;
    }
    else {
      temp_v2 = *puVar5 & 0xffffdfff;
    }
    break;
  case 2:
    puVar2 = (unsigned int *)FUN_0022a464(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x2268) = *puVar2;
    return;
  case 3:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *puVar5 | 0x40000;
    }
    else {
      temp_v2 = *puVar5 & 0xfffbffff;
    }
    break;
  case 4:
    temp_v1 = FUN_0022a444(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *puVar5 | 0x200000;
    }
    else {
      temp_v2 = *puVar5 & 0xffdfffff;
    }
    break;
  default:
    return;
  }
  *puVar5 = temp_v2;
  return;
}

} /* extern "C" */
