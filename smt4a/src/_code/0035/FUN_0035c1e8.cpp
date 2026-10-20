/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c1e8` (_code @ 0x35c1e8, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275b10(int);
int FUN_00283480(void);
int FUN_003283ac(unsigned int);
int FUN_00389f60(unsigned int);
int FUN_0039b0f8(unsigned int);

extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00275b10. */
/* Supplied declaration required: FUN_00283480. */
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_00389f60. */
/* Supplied declaration required: FUN_0039b0f8. */
extern int FUN_003afde8(void);


unsigned int FUN_0035c1e8(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  FUN_00275b10(1);
  temp_v1 = FUN_003afde8();
  temp_v2 = 0;
  if (temp_v1 != 0) {
    FUN_0039b0f8(temp_v0);
    FUN_00283480();
    FUN_00389f60(temp_v0);
    temp_v2 = temp_v0;
  }
  FUN_003283ac(temp_v2);
  return 1;
}

} /* extern "C" */
