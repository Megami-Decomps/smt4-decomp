/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5c14` (_code @ 0x2c5c14, 0x134 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00465040; /* 0x465040 */

/* Supplied declaration required: FUN_001182ac. */
extern unsigned long long FUN_0014e724(unsigned char *);
/* Supplied declaration required: FUN_0014e834. */
/* Supplied declaration required: FUN_002b0174. */
/* Supplied declaration required: FUN_002b0184. */
/* Supplied declaration required: FUN_002b01a0. */
extern int FUN_002b0404(unsigned int);
extern int FUN_002b045c(unsigned int);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c3940. */


unsigned int
FUN_002c5c14(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned long long temp_v3;
  unsigned char temp_v4 [256];
  
  puVar2 = temp_v4;
  FUN_002c3940(temp_v4,0x100);
  if ((DAT_00465040 != '\0') || (temp_v0 = FUN_002b045c(param_1), temp_v0 != 0)) {
    FUN_002be624(temp_v4,param_1);
  }
  else {
    temp_v0 = FUN_002b0404(param_1);
    if (temp_v0 != 0) {
      FUN_002be624(temp_v4,"patch:/%s",param_1);
    }
    else {
      FUN_002be624(temp_v4,"rom:/%s",param_1);
    }
  }
  FUN_002b01a0(temp_v4,0);
  FUN_002b0184();
  FUN_0014e834(puVar2,param_4);
  FUN_001182ac(puVar2);
  temp_v3 = FUN_0014e724(puVar2);
  temp_v1 = (unsigned int)((unsigned long long)temp_v3 >> 0x20);
  if ((int)temp_v3 != 0) {
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = 0;
    }
    FUN_002b0174(puVar2);
    return 0;
  }
  if (param_2 != (unsigned int *)0x0) {
    temp_v1 = *(unsigned int *)(puVar2 + 0x18);
  }
  temp_v2 = *(unsigned int *)(puVar2 + 0xc);
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = temp_v1;
  }
  *(unsigned int *)(puVar2 + 0xc) = 0;
  FUN_002b0174(puVar2);
  return temp_v2;
}
