/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359608` (_code @ 0x359608, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013ebd8(...);
int FUN_00158844(unsigned char [496], unsigned int, unsigned int, int);
int FUN_001883b0(unsigned char *, unsigned char [496], int);
int FUN_001886bc(void);
int FUN_002e0e04(int, unsigned char [496], int);

/* Supplied declaration required: FUN_0013ebd8. */
/* Supplied declaration required: FUN_00158844. */
/* Supplied declaration required: FUN_001883b0. */
/* Supplied declaration required: FUN_001886bc. */
/* Supplied declaration required: FUN_002e0e04. */


unsigned char * FUN_00359608(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar1;
  unsigned char temp_v1 [496];
  
  puVar1 = temp_v1;
  FUN_002e0e04(param_2,temp_v1,2);
  if (param_2 == 0) {
    FUN_0013ebd8();
    return (unsigned char *)0xe0e046bc;
  }
  FUN_001886bc();
  FUN_00158844(temp_v1,temp_v0,param_3,0);
  if ((int)puVar1 < 0) {
    FUN_0013ebd8();
    return puVar1;
  }
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  puVar1 = (unsigned char *)(param_1 + 8);
  *(unsigned int *)(param_1 + 0x10) = 0;
  FUN_001883b0(puVar1,temp_v1,2);
  if ((int)puVar1 < 0) {
    FUN_0013ebd8(puVar1);
    return puVar1;
  }
  FUN_0013ebd8();
  return (unsigned char *)0x0;
}

} /* extern "C" */
