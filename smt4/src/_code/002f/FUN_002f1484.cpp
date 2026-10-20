/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1484` (_code @ 0x2f1484, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282924(int, int);
int FUN_002939f4(void);
int FUN_002954bc(unsigned int);
int FUN_00296cc8(int);
int FUN_003bc8f8(unsigned int, unsigned int);

/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_002939f4. */
/* Supplied declaration required: FUN_002954bc. */
/* Supplied declaration required: FUN_00296cc8. */
extern unsigned int FUN_002a8740(int);
/* Supplied declaration required: FUN_003bc8f8. */


unsigned int FUN_002f1484(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  if (temp_v0 < 0x6d) {
    FUN_002939f4();
    temp_v2 = FUN_002939f4();
    FUN_00282924(temp_v2,temp_v0);
    temp_v3 = *(unsigned int *)(temp_v2 + 0x27c);
  }
  else {
    temp_v3 = FUN_002a8740(temp_v0 - 0x6d);
  }
  FUN_003bc8f8(temp_v3,temp_v1);
  FUN_002954bc(temp_v3);
  return 1;
}

} /* extern "C" */
