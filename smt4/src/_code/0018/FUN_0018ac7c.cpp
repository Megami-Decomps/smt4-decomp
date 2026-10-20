#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_004474d8; /* 0x4474d8 */


void FUN_0018ac7c(void)

{
  unsigned int *puVar1;
  
  puVar1 = DAT_004474d8;
  *DAT_004474d8 = 0;
  *(unsigned short *)(puVar1 + 1) = 0;
  *(unsigned short *)((int)puVar1 + 6) = 0;
  *(unsigned short *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}

} /* extern "C" */
