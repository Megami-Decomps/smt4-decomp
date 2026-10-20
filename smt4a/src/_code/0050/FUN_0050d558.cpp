#include "romwright_types.h"

extern "C" {

int FUN_001d0b28(unsigned int, int);

extern unsigned int FUN_001b1f04(void);
/* Supplied declaration required: FUN_001d0b28. */


void FUN_0050d558(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  int base;
  
  base = param_1 - 0x44;
  if (((*(char *)(base + 0xc) != '\0') && (param_2 <= *(unsigned int *)(base + 0x64))) &&
     (*(unsigned int *)(base + 0x64) <= param_3)) {
    *(unsigned char *)(base + 0xf) = 1;
    if (*(char *)(base + 0xa2) != '\0') {
      temp_v0 = FUN_001b1f04();
      FUN_001d0b28(temp_v0,base + 0x50);
      *(unsigned char *)(base + 0xa2) = 0;
    }
    if (*(char *)(base + 0xd) != '\0') {
      *(unsigned char *)(base + 0xd) = 0;
    }
  }
  return;
}

} /* extern "C" */
