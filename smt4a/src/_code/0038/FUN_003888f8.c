/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003888f8` (_code @ 0x3888f8, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_0020ea90. */
/* Supplied declaration required: FUN_0021bdac. */
/* Supplied declaration required: FUN_002c76c0. */
/* Supplied declaration required: FUN_002deb84. */
/* Supplied declaration required: FUN_003c1060. */
extern unsigned int FUN_00496674(void);


void FUN_003888f8(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_0020ea90();
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    FUN_003c1060();
  }
  FUN_0020ea90();
  temp_v2 = FUN_00496674();
  FUN_002c76c0(0);
  temp_v3 = FUN_002deb84();
  FUN_0021bdac(temp_v0 + 0x194,0,temp_v3,0x10,0,temp_v2);
  return;
}
