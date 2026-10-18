/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328dec` (_code @ 0x328dec, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int FUN_00244dcc(unsigned int);
/* Supplied declaration required: FUN_00249c4c. */
extern unsigned int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_002fc5f8. */


unsigned int FUN_00328dec(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(2);
  temp_v3 = FUN_00296cc8(3);
  temp_v4 = FUN_00296cc8(4);
  temp_v5 = FUN_00244dcc(temp_v0);
  temp_v6 = FUN_00244dcc(temp_v1);
  if (temp_v5 < 0) {
    if (temp_v6 < 0) {
      FUN_00249c4c(temp_v0,2,0);
      FUN_00249c4c(temp_v1,1,0);
      return 1;
    }
  }
  else if (0 < temp_v5) {
    if (temp_v6 < 1) {
      FUN_00249c4c(temp_v0,2,0);
      FUN_002fc5f8(temp_v1,1,3,temp_v2,temp_v3,temp_v4);
      return 1;
    }
    FUN_00249c4c(temp_v0,2,0);
    FUN_00249c4c(temp_v1,1,0);
    return 1;
  }
  FUN_00249c4c(temp_v1,1,0);
  FUN_002fc5f8(temp_v0,2,3,temp_v2,temp_v3,temp_v4);
  return 1;
}
