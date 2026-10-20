/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5c04` (_code @ 0x2c5c04, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001182ac(unsigned char *);
int FUN_0014e834(unsigned char *, int);
int FUN_002b0174(unsigned char *);
int FUN_002b0184(void);
int FUN_002b01a0(unsigned char [256], int);
int FUN_002be624(...);
int FUN_002c3940(unsigned char [256], int);

extern signed char DAT_00465040; /* 0x465040 */

/* Supplied declaration required: FUN_001182ac. */
extern int FUN_0014e724(unsigned char *);
/* Supplied declaration required: FUN_0014e834. */
/* Supplied declaration required: FUN_002b0174. */
/* Supplied declaration required: FUN_002b0184. */
/* Supplied declaration required: FUN_002b01a0. */
extern int FUN_002b0404(unsigned int);
extern int FUN_002b045c(unsigned int);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c3940. */


/* WARNING: Removing unreachable block (ram,0x002c5d2c) */
/* WARNING: Removing unreachable block (ram,0x002c5ccc) */
/* WARNING: Removing unreachable block (ram,0x002c5cc0) */
/* WARNING: Removing unreachable block (ram,0x002c5d24) */
/* WARNING: Removing unreachable block (ram,0x002c5d08) */

unsigned int FUN_002c5c04(unsigned int param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned char temp_v2 [256];
  
  puVar2 = temp_v2;
  FUN_002c3940(temp_v2,0x100);
  if ((DAT_00465040 != '\0') || (temp_v0 = FUN_002b045c(param_1), temp_v0 != 0)) {
    FUN_002be624(temp_v2,param_1);
  }
  else {
    temp_v0 = FUN_002b0404(param_1);
    if (temp_v0 != 0) {
      FUN_002be624(temp_v2,"patch:/%s",param_1);
    }
    else {
      FUN_002be624(temp_v2,"rom:/%s",param_1);
    }
  }
  FUN_002b01a0(temp_v2,0);
  FUN_002b0184();
  FUN_0014e834(puVar2,4);
  FUN_001182ac(puVar2);
  temp_v0 = FUN_0014e724(puVar2);
  if (temp_v0 == 0) {
    temp_v1 = *(unsigned int *)(puVar2 + 0xc);
    *(unsigned int *)(puVar2 + 0xc) = 0;
    FUN_002b0174(puVar2);
    return temp_v1;
  }
  FUN_002b0174(puVar2);
  return 0;
}

} /* extern "C" */
