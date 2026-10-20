/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002feb80` (_code @ 0x2feb80, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c564c(int);
int FUN_002c57c8(int, int *, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_002c564c. */
/* Supplied declaration required: FUN_002c57c8. */


unsigned int FUN_002feb80(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int uStack_14;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  FUN_002c564c(0);
  temp_v3 = 0;
  temp_v2 = temp_v0;
  uStack_14 = temp_v1;
  FUN_002c57c8(0x10,&temp_v2,0xc);
  return 1;
}

} /* extern "C" */
