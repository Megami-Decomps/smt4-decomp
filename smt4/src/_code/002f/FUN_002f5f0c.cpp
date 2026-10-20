/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5f0c` (_code @ 0x2f5f0c, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(unsigned int);
int FUN_002be624(unsigned char [68], unsigned char *, unsigned int);

extern unsigned char LAB_002f5f60; /* 0x2f5f60 */

/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002c1d5c(void);
extern unsigned int FUN_002d848c(unsigned char *);


unsigned int FUN_002f5f0c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [68];
  
  temp_v0 = FUN_00296cc8(0);
  temp_v2 = 0;
  temp_v1 = FUN_002c1d5c();
  if (temp_v1 == 0) {
    FUN_002be624(temp_v3,&LAB_002f5f60,temp_v0);
    temp_v2 = FUN_002d848c(temp_v3);
  }
  FUN_0028dcb0(temp_v2);
  return 1;
}

} /* extern "C" */
