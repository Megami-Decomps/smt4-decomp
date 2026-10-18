/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cdbe8` (_code @ 0x3cdbe8, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00318544. */
/* Supplied declaration required: FUN_0038791c. */
extern int FUN_003ae988(unsigned int);


unsigned int FUN_003cdbe8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  temp_v3 = FUN_00236038(3);
  temp_v4 = FUN_00236038(4);
  temp_v5 = FUN_003ae988(temp_v0);
  temp_v6 = FUN_003ae988(temp_v1);
  if (temp_v5 < 0) {
    if (temp_v6 < 0) {
      FUN_00318544(temp_v0,2,0,0,0);
      FUN_00318544(temp_v1,1,0,0,0);
      return 1;
    }
  }
  else if (0 < temp_v5) {
    if (temp_v6 < 1) {
      FUN_00318544(temp_v0,2,0,0,0);
      FUN_0038791c(temp_v1,1,3,temp_v2,temp_v3,temp_v4);
      return 1;
    }
    FUN_00318544(temp_v0,2,0,0,0);
    FUN_00318544(temp_v1,1,0,0,0);
    return 1;
  }
  FUN_00318544(temp_v1,1,0,0,0);
  FUN_0038791c(temp_v0,2,3,temp_v2,temp_v3,temp_v4);
  return 1;
}
