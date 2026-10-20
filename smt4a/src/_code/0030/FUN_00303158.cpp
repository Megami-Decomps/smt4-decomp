/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303158` (_code @ 0x303158, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ec70c(unsigned char [176]);
int FUN_002ec9f4(unsigned char [32]);
int FUN_002ecd54(unsigned char [560]);
int FUN_002ece14(unsigned char [32], unsigned int);
int FUN_002f31cc(unsigned char [560]);
int FUN_002f7a28(unsigned char [176]);

/* Supplied declaration required: FUN_002ec70c. */
/* Supplied declaration required: FUN_002ec9f4. */
extern int FUN_002ecb04(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002ecd54. */
/* Supplied declaration required: FUN_002ece14. */
/* Supplied declaration required: FUN_002f31cc. */
/* Supplied declaration required: FUN_002f7a28. */
extern int FUN_002f7ac4(unsigned char *, unsigned int);
extern int FUN_002fdef8(unsigned char *, unsigned char *);
extern int FUN_002fdfa6(unsigned char *, unsigned char *, unsigned int);


unsigned char FUN_00303158(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [560];
  unsigned char temp_v2 [176];
  unsigned char temp_v3 [32];
  
  FUN_002f7a28(temp_v2);
  temp_v0 = FUN_002f7ac4(temp_v2,param_4);
  if (temp_v0 != 0) {
    FUN_002ece14(temp_v3,param_2);
    temp_v0 = FUN_002fdef8(temp_v2,temp_v3);
    if (temp_v0 != 0) {
      FUN_002ecd54(temp_v1);
      temp_v0 = FUN_002ecb04(temp_v1,param_4);
      if (temp_v0 != 0) {
        temp_v0 = FUN_002fdfa6(temp_v1,temp_v3,param_3);
        FUN_002f31cc(temp_v1);
        FUN_002ec9f4(temp_v3);
        FUN_002ec70c(temp_v2);
        return temp_v0 == 0;
      }
      FUN_002f31cc(temp_v1);
    }
    FUN_002ec9f4(temp_v3);
  }
  FUN_002ec70c(temp_v2);
  return 0;
}

} /* extern "C" */
