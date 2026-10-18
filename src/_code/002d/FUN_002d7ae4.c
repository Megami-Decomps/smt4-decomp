/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d7ae4` (_code @ 0x2d7ae4, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int FUN_0028686c(void);
/* Supplied declaration required: FUN_00286928. */
/* Supplied declaration required: FUN_002892a0. */
extern unsigned int FUN_00289640(void);
extern unsigned int FUN_00296f60(unsigned int);
extern unsigned char FUN_003823c8(void);


void FUN_002d7ae4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int unaff_r4;
  
  FUN_002892a0();
  temp_v0 = FUN_003823c8();
  temp_v1 = FUN_0028686c();
  temp_v2 = FUN_00296f60(0);
  temp_v3 = FUN_00289640();
  FUN_00286928(temp_v1,temp_v2,temp_v3,temp_v0,0,0,unaff_r4);
  return;
}
