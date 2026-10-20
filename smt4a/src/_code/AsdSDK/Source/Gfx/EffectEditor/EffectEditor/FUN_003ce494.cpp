/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ce494` (_code @ 0x3ce494, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003c378c(unsigned char [64], int);
int rt_memcpy_w(unsigned char [64], unsigned int *, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern unsigned int DAT_00634ca0; /* 0x634ca0 */
extern unsigned int DAT_00634ca4; /* 0x634ca4 */
extern unsigned int DAT_00634ca8; /* 0x634ca8 */
extern unsigned int DAT_00634cac; /* 0x634cac */

/* Supplied declaration required: FUN_003c378c. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003ce494(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [64];
  unsigned int temp_v1;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  
  rt_memcpy_w(temp_v0,&DAT_00634ca0,0x80);
  temp_v1 = DAT_00634ca0;
  uStack_4c = DAT_00634ca4;
  uStack_48 = DAT_00634ca8;
  uStack_44 = DAT_00634cac;
  FUN_003c378c(temp_v0,0);
  DAT_00634ca0 = temp_v1;
  DAT_00634ca4 = uStack_4c;
  DAT_00634ca8 = uStack_48;
  DAT_00634cac = uStack_44;
  return;
}

} /* extern "C" */
