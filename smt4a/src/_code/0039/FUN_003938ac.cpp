/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003938ac` (_code @ 0x3938ac, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00300e5c(void);
int FUN_00322984(void);
int FUN_003380a0(unsigned int, int);
int FUN_003626bc(unsigned int, unsigned char [16], unsigned char [24]);
int quadSourceCopyOut(int, unsigned char [24]);
int quadHolderCopyOut(int, unsigned char [16]);

/* Supplied declaration required: FUN_00300e5c. */
/* Supplied declaration required: FUN_00322984. */
/* Supplied declaration required: FUN_003380a0. */
/* Supplied declaration required: FUN_003626bc. */
/* Supplied declaration required: quadSourceCopyOut. */
/* Supplied declaration required: quadHolderCopyOut. */


void FUN_003938ac(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [16];
  unsigned char temp_v5 [24];
  
  FUN_00300e5c();
  if ((*param_1 != 0) && (temp_v0 = param_1[0xc], *(int *)(temp_v0 + 0x10) >= 2)) {
    temp_v2 = param_1[10];
    temp_v3 = *(int *)(temp_v0 + 0x20);
    if ((*(unsigned int *)(temp_v0 + 0xc) & 1) != 0) {
      quadSourceCopyOut(temp_v0,temp_v5);
      quadHolderCopyOut(param_1[0xc],temp_v4);
      FUN_003626bc(*(unsigned int *)(temp_v2 + 0x10),temp_v4,temp_v5);
      FUN_003626bc(*(unsigned int *)(temp_v2 + 0x14),temp_v4,temp_v5);
    }
    if (param_1[0xb] != 0) {
      FUN_00322984();
    }
    temp_v1 = *(unsigned int *)(temp_v3 + 0x54);
    FUN_003380a0(*(unsigned int *)(temp_v2 + 0x10),temp_v1);
    FUN_003380a0(*(unsigned int *)(temp_v2 + 0x14),temp_v1);
  }
  return;
}

} /* extern "C" */
