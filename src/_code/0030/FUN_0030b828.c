/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b828` (_code @ 0x30b828, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0043e194; /* 0x43e194 */

extern unsigned int FUN_0024bb80(void);
extern unsigned int FUN_0028686c(void);
/* Supplied declaration required: FUN_00286928. */
extern unsigned int FUN_00289640(void);
extern unsigned int FUN_00296f60(unsigned int);


void FUN_0030b828(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = FUN_0024bb80();
  temp_v0 = FUN_0028686c();
  *(unsigned int *)(DAT_0043e194 + 0x24) = temp_v2;
  temp_v2 = FUN_00296f60(0);
  temp_v1 = FUN_00289640();
  FUN_00286928(temp_v0,temp_v2,temp_v1,0xc,0,0);
  return;
}
