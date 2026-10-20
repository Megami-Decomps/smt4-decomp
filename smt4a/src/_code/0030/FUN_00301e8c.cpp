/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301e8c` (_code @ 0x301e8c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strDestroy(unsigned char [36]);
int FUN_002ece14(unsigned char [36]);

/* Supplied declaration required: strDestroy. */
/* Supplied declaration required: FUN_002ece14. */
extern int FUN_002fdef8(int, unsigned char *);
extern int FUN_002fdfa6(int, unsigned char *, unsigned int);


unsigned char FUN_00301e8c(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2 [36];
  
  FUN_002ece14(temp_v2);
  temp_v0 = FUN_002fdef8(param_1 + 0x234,temp_v2);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002fdfa6(param_1 + 4,temp_v2,param_3);
    temp_v1 = temp_v0 == 0;
    strDestroy(temp_v2);
  }
  else {
    strDestroy(temp_v2);
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
