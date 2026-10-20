/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028cae8` (_code @ 0x28cae8, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010063a(unsigned int, unsigned int, int, unsigned char *);


/* Supplied declaration required: FUN_0010063a. */
extern unsigned char LAB_003d4e88; /* 0x3d4e88 */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
extern unsigned int FUN_003f86f8(unsigned int);


unsigned int FUN_0028cae8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_003f86f8(0x16);
  temp_v1 = FUN_00187180(0x16,0);
  temp_v2 = FUN_00192798();
  temp_v1 = FUN_00192748(temp_v1);
  FUN_0010063a(temp_v2,temp_v1,100,&LAB_003d4e88);
  temp_v1 = FUN_00187180(0x16,1);
  temp_v2 = FUN_00192798();
  temp_v1 = FUN_00192748(temp_v1);
  FUN_0010063a(temp_v2,temp_v1,100,&LAB_003d4e88);
  return temp_v0;
}

} /* extern "C" */
