/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113612` (_code @ 0x113612, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00111378(unsigned char *, unsigned int);
int FUN_002ec70c(unsigned char [176]);
int FUN_002ecd54(unsigned char [560]);
int FUN_002f31cc(unsigned char [560]);
int FUN_002f7a28(unsigned char [176]);

extern int FUN_0010a01c(unsigned char *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00111378. */
/* Supplied declaration required: FUN_002ec70c. */
extern int FUN_002ecb04(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002ecd54. */
/* Supplied declaration required: FUN_002f31cc. */
/* Supplied declaration required: FUN_002f7a28. */
extern int FUN_002f7ac4(unsigned char *, unsigned int);


unsigned char *
FUN_00113612(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned char temp_v1 [560];
  unsigned char temp_v2 [176];
  
  FUN_002ecd54(temp_v1);
  FUN_002f7a28(temp_v2);
  temp_v0 = FUN_002f7ac4(temp_v2,param_4);
  if (((temp_v0 == 0) || (temp_v0 = FUN_002ecb04(temp_v1,param_4), temp_v0 == 0)) ||
     (temp_v0 = FUN_0010a01c(temp_v1,param_2,param_3), temp_v0 != 0)) {
    FUN_002ec70c(temp_v2);
    FUN_002f31cc(temp_v1);
    puVar2 = (unsigned char *)0x0;
  }
  else {
    puVar2 = temp_v2;
    FUN_00111378(puVar2,param_3);
    FUN_002ec70c(temp_v2);
    FUN_002f31cc(temp_v1);
  }
  return puVar2;
}

} /* extern "C" */
