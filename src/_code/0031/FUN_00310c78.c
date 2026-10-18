/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310c78` (_code @ 0x310c78, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_002bf8d4. */
extern unsigned int *FUN_002c0ac8(void);


unsigned int FUN_00310c78(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_00296f60(0);
  puVar1 = (unsigned int *)FUN_002c0ac8();
  temp_v1 = *puVar1;
  temp_v0 = FUN_00296f60(1);
  FUN_002bf8d4(temp_v1,temp_v0,1,1,1);
  return 1;
}
