/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282a6c` (_code @ 0x282a6c, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(void);
int FUN_0035c3d0(unsigned int, unsigned int, unsigned int, unsigned int);

extern unsigned int FUN_00236038(unsigned int);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_0035c3d0. */
extern int FUN_0035c688(unsigned int);


unsigned char FUN_00282a6c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_002deb84();
  if (temp_v1 != 0) {
    temp_v1 = FUN_0035c688(temp_v0);
    return temp_v1 != 0;
  }
  temp_v2 = FUN_00236038(1);
  temp_v3 = FUN_00236038(2);
  temp_v4 = FUN_00236038(3);
  FUN_0035c3d0(temp_v0,temp_v2,temp_v3,temp_v4);
  FUN_003283ac();
  return 0;
}

} /* extern "C" */
