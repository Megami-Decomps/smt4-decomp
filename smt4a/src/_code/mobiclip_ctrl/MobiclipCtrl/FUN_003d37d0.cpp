/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d37d0` (_code @ 0x3d37d0, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001884b0(unsigned int);
int FUN_00195fc8(void);
int FUN_00422654(unsigned int *);
int FUN_00423c0c(unsigned int *);
int FUN_00423cfc(unsigned int *);
int FUN_00423d94(unsigned char *);
int FUN_00424018(unsigned char *);
int FUN_00425cd8(unsigned char *);
int FUN_005143ac(unsigned int);

extern unsigned int DAT_00588024; /* 0x588024 */
extern unsigned char DAT_00617e70; /* 0x617e70 */
extern unsigned int DAT_00617f18; /* 0x617f18 */
extern unsigned char DAT_00617f40; /* 0x617f40 */
extern unsigned int DAT_006184a0; /* 0x6184a0 */
extern unsigned int DAT_00618504; /* 0x618504 */

/* Supplied declaration required: FUN_001884b0. */
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_00422654. */
/* Supplied declaration required: FUN_00423c0c. */
/* Supplied declaration required: FUN_00423cfc. */
/* Supplied declaration required: FUN_00423d94. */
/* Supplied declaration required: FUN_00424018. */
/* Supplied declaration required: FUN_00425cd8. */
/* Supplied declaration required: FUN_005143ac. */


void FUN_003d37d0(void)

{
/* irregular: 9 native warning(s); review required */
  FUN_00423c0c(&DAT_00617f18);
  FUN_00424018(&DAT_00617f40);
  FUN_00425cd8(&DAT_00617f40);
  FUN_00423d94(&DAT_00617e70);
  FUN_00423cfc(&DAT_00617f18);
  FUN_005143ac(DAT_00588024);
  DAT_00588024 = 0;
  FUN_00422654(&DAT_006184a0);
  if ((DAT_00618504 & 0xfffffffe) != 0) {
    if ((DAT_00618504 & 1) != 0) {
      FUN_00195fc8();
    }
    FUN_001884b0(DAT_00618504 & 0xfffffffe);
    DAT_00618504 = 0;
  }
  return;
}

} /* extern "C" */
