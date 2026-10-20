#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_0058069c; /* 0x58069c */


void FUN_002019b8(void)

{
  unsigned int *puVar1;
  
  puVar1 = DAT_0058069c;
  *DAT_0058069c = 0;
  *(unsigned short *)(puVar1 + 1) = 0;
  *(unsigned short *)((int)puVar1 + 6) = 0;
  *(unsigned short *)(puVar1 + 2) = 0;
  return;
}

} /* extern "C" */
