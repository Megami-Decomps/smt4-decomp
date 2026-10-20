/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001241e8` (_code @ 0x1241e8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00119ee6(unsigned int *, unsigned int);
int FUN_002f76ca(int, unsigned char *);

extern unsigned char LAB_00124238; /* 0x124238 */
extern unsigned char DAT_00559534; /* 0x559534 */
extern unsigned char DAT_0055a25c; /* 0x55a25c */

/* Supplied declaration required: FUN_00119ee6. */
extern int FUN_002e760a(unsigned int);
extern int FUN_002ea0e4(unsigned int *);
/* Supplied declaration required: FUN_002f76ca. */
extern unsigned int *FUN_002fb018(void);


unsigned int * FUN_001241e8(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002e760a(0x1c);
  if (temp_v0 != 0) {
    puVar2 = (unsigned int *)FUN_002fb018();
    *puVar2 = (unsigned int)&DAT_0055a25c;
    *(unsigned char *)((int)puVar2 + 5) = 0;
    temp_v0 = FUN_002ea0e4(puVar2 + 2);
    puVar2 = (unsigned int *)(temp_v0 - 8);
    *puVar2 = (unsigned int)&DAT_00559534;
    FUN_002f76ca(temp_v0,&LAB_00124238);
    *(unsigned int *)(temp_v0 + 8) = 3;
    *(unsigned int *)(temp_v0 + 0x10) = 0x7d4;
    *(unsigned char *)(temp_v0 + 0xc) = 0;
  }
  else {
    puVar2 = (unsigned int *)0x0;
  }
  FUN_00119ee6(puVar2,param_1);
  return puVar2;
}

} /* extern "C" */
