/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b1cc` (_code @ 0x38b1cc, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00137ee0(int, int *, int);
int FUN_00180008(int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_00137ee0. */
/* Supplied declaration required: FUN_00180008. */
extern unsigned int FUN_00236038(unsigned int);


unsigned int FUN_0038b1cc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int uStack_14;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  FUN_00180008(0);
  temp_v3 = 0;
  temp_v2 = temp_v0;
  uStack_14 = temp_v1;
  FUN_00137ee0(0x10,&temp_v2,0xc);
  return 1;
}

} /* extern "C" */
