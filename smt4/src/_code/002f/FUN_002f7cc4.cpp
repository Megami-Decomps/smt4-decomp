/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7cc4` (_code @ 0x2f7cc4, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027e928(unsigned int);
int FUN_00282924(int, int);
int FUN_0028dcb0(int);
int FUN_00296cc8(int);

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_0027e928. */
/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
/* Supplied declaration required: FUN_00296cc8. */
extern unsigned int FUN_0029ebac(unsigned int, unsigned int);
extern unsigned int FUN_002a8740(int);


unsigned int FUN_002f7cc4(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  FUN_0027e928(DAT_0043427c);
  if (temp_v0 < 0x6d) {
    temp_v2 = FUN_002939f4();
    FUN_00282924(temp_v2,temp_v0);
    if (temp_v2 == 0) {
      FUN_0028dcb0(0);
      return 1;
    }
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 0x1c6) & (1 << (temp_v1 & 0xff));
  }
  else {
    temp_v3 = FUN_002a8740(temp_v0 - 0x6d);
    temp_v1 = FUN_0029ebac(temp_v3,temp_v1 & 0xffff);
  }
  FUN_0028dcb0(temp_v1 != 0);
  return 1;
}

} /* extern "C" */
