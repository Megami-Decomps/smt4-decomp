/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002681b0` (_code @ 0x2681b0, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_002e3328(void);
int FUN_004188ec(unsigned int *);

typedef int romwright_code(...);
extern unsigned int *DAT_00588e2c; /* 0x588e2c */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_004188ec. */


unsigned int FUN_002681b0(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = DAT_00588e2c;
  if (DAT_00588e2c != (unsigned int *)0x0) {
    FUN_004188ec(DAT_00588e2c);
    puVar2 = DAT_00588e2c;
    if (*(char *)(puVar1 + 1) == '\0') {
      return 0;
    }
    if (DAT_00588e2c != (unsigned int *)0x0) {
      if ((int *)DAT_00588e2c[2] != (int *)0x0) {
        (**(romwright_code **)(*(int *)DAT_00588e2c[2] + 0x10))();
        if ((int *)puVar2[2] != (int *)0x0) {
          (**(romwright_code **)(*(int *)puVar2[2] + 4))();
        }
        puVar2[2] = 0;
      }
      *(unsigned char *)(puVar2 + 1) = 1;
      FUN_001631d0(*puVar2,0);
      if (DAT_00588e2c != (unsigned int *)0x0) {
        FUN_002e3328();
        DAT_00588e2c = (unsigned int *)0x0;
      }
    }
  }
  return 0xffffffff;
}

} /* extern "C" */
