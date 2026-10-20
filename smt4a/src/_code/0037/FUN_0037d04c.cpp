/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d04c` (_code @ 0x37d04c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [68], unsigned char *, unsigned int);
int FUN_003283ac(unsigned int);

extern unsigned char LAB_0037d0a0; /* 0x37d0a0 */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_00162ea4(void);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
extern unsigned int FUN_0034813c(unsigned char *);


unsigned int FUN_0037d04c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [68];
  
  temp_v0 = FUN_00236038(0);
  temp_v2 = 0;
  temp_v1 = FUN_00162ea4();
  if (temp_v1 == 0) {
    FUN_00100388(temp_v3,&LAB_0037d0a0,temp_v0);
    temp_v2 = FUN_0034813c(temp_v3);
  }
  FUN_003283ac(temp_v2);
  return 1;
}

} /* extern "C" */
