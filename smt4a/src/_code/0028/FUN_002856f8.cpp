/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002856f8` (_code @ 0x2856f8, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010063a(unsigned int, unsigned int, int, unsigned char *);
int FUN_0014384c(int);
int FUN_0014afd0(int, int);
int FUN_003f86f8(int);

extern unsigned char LAB_002b2b24; /* 0x2b2b24 */
extern signed char DAT_0057f27d; /* 0x57f27d */

/* Supplied declaration required: FUN_0010063a. */
/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_0014afd0. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
/* Supplied declaration required: FUN_003f86f8. */


void FUN_002856f8(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_0057f27d < '\x01') {
    FUN_0014384c(0x15);
    FUN_0014afd0(0x15,0);
    FUN_003f86f8(0x38);
    temp_v0 = FUN_00187180(0x38,0);
    temp_v1 = FUN_00192798();
    temp_v0 = FUN_00192748(temp_v0);
    FUN_0010063a(temp_v1,temp_v0,0x68,&LAB_002b2b24);
  }
  DAT_0057f27d = DAT_0057f27d + '\x01';
  return;
}

} /* extern "C" */
