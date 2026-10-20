/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3bd4` (_code @ 0x2a3bd4, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275b10(int);
int FUN_00283480(void);
int FUN_003283ac(unsigned int);
int FUN_0036f298(unsigned int);
int FUN_0039af48(unsigned int, unsigned int, unsigned int, unsigned int);

extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00275b10. */
/* Supplied declaration required: FUN_00283480. */
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_0036f298. */
extern int FUN_0039af04(void);
/* Supplied declaration required: FUN_0039af48. */


unsigned int FUN_002a3bd4(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  FUN_00275b10(3);
  temp_v3 = FUN_00236038(4);
  temp_v4 = FUN_0039af04();
  temp_v5 = 0;
  if (temp_v4 != 0) {
    FUN_0039af48(temp_v0,temp_v3,temp_v1,temp_v2);
    FUN_00283480();
    FUN_0036f298(temp_v0);
    temp_v5 = temp_v0;
  }
  FUN_003283ac(temp_v5);
  return 1;
}

} /* extern "C" */
