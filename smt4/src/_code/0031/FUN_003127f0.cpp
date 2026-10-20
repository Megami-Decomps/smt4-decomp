/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003127f0` (_code @ 0x3127f0, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(unsigned int);
int FUN_00296cc8(int);

/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_002939f4(void);
/* Supplied declaration required: FUN_00296cc8. */
extern int FUN_00338278(unsigned int, unsigned short);


unsigned int FUN_003127f0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_002939f4();
  temp_v3 = FUN_00338278(temp_v2,temp_v0);
  if (temp_v3 == 0) {
    temp_v4 = 0xffffffff;
  }
  else {
    temp_v4 = 0xffffffff;
    if (temp_v1 == 0) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 2);
    }
    else if (temp_v1 == 1) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 4);
    }
    else if (temp_v1 == 2) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 6);
    }
    else if (temp_v1 == 3) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 8);
    }
  }
  FUN_0028dcb0(temp_v4);
  return 1;
}

} /* extern "C" */
