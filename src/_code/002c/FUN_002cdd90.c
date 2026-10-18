/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cdd90` (_code @ 0x2cdd90, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_0025506c. */
extern unsigned int FUN_00289640(void);
extern unsigned int FUN_00296f60(unsigned int);
extern unsigned int FUN_002b49d8(unsigned int);
/* Supplied declaration required: FUN_002c0128. */


void FUN_002cdd90(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_002b49d8(0x1e);
  temp_v2 = FUN_00289640();
  FUN_002c0128();
  FUN_0025506c(temp_v1,temp_v0,temp_v2,6,0);
  return;
}
