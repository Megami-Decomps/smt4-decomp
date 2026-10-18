/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aa144` (_code @ 0x1aa144, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int FUN_0028686c(void);
extern int FUN_00286880(void);
/* Supplied declaration required: FUN_00286928. */
extern unsigned int FUN_00289640(void);
extern unsigned int FUN_00296f60(unsigned int);


void FUN_001aa144(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00286880();
  if (temp_v0 == 0x14) {
    temp_v0 = 5;
  }
  temp_v1 = FUN_0028686c();
  temp_v2 = FUN_00296f60(0);
  temp_v3 = FUN_00289640();
  FUN_00286928(temp_v1,temp_v2,temp_v3,temp_v0,0,0);
  return;
}
