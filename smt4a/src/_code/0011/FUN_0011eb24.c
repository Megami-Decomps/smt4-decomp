/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011eb24` (_code @ 0x11eb24, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002e9ff5; /* 0x2e9ff5 */
extern unsigned char LAB_002ea975; /* 0x2ea975 */
extern unsigned char LAB_002ea9dd; /* 0x2ea9dd */

/* Supplied declaration required: FUN_002e5700. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_00300934. */
/* Supplied declaration required: FUN_0030093c. */
/* Supplied declaration required: FUN_00304d10. */
/* Supplied declaration required: FUN_00310ff2. */


void FUN_0011eb24(int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned char *puVar3;
  unsigned char temp_v1 [108];
  
  puVar3 = temp_v1;
  puVar1 = (unsigned char *)FUN_00304d10(param_2,0);
  if (puVar1 == (unsigned char *)0x0) {
    FUN_002f5020(temp_v1,&LAB_002e9ff5,0xc,1);
    puVar1 = temp_v1;
  }
  FUN_00310ff2(param_1,puVar1);
  if (*(char *)(param_1 + 4) == '\0') {
    puVar1 = (unsigned char *)FUN_00304d10(param_2,1);
    if (puVar1 != (unsigned char *)0x0) {
      puVar3 = puVar1;
    }
    FUN_00300934(param_1,puVar3);
    if (*(char *)(param_1 + 4) == '\0') {
      temp_v0 = FUN_00304d10(param_2,2);
      if (temp_v0 != 0) {
        FUN_0030093c(param_1,temp_v0);
      }
      else {
        FUN_002f5020(temp_v1,&LAB_002ea975,0x68,1);
        FUN_0030093c(param_1,temp_v1);
        FUN_002e5700(temp_v1,&LAB_002ea9dd,0x68,1);
      }
    }
  }
  return;
}
