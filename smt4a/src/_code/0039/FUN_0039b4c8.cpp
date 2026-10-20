/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039b4c8` (_code @ 0x39b4c8, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00153630(unsigned int, unsigned int, int, int, unsigned int);
int FUN_00236038(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_0057f548; /* 0x57f548 */
extern unsigned int DAT_0057f54c; /* 0x57f54c */
extern unsigned int DAT_0057f550; /* 0x57f550 */

/* Supplied declaration required: FUN_00153630. */
extern unsigned int *FUN_00164a9c(void);
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_00236038. */


unsigned int FUN_0039b4c8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  FUN_00236038(0);
  puVar1 = (unsigned int *)FUN_00164a9c();
  temp_v2 = *puVar1;
  temp_v0 = FUN_00236038(1);
  FUN_00153630(temp_v2,temp_v0,1,1,0xffffffff);
  temp_v1 = FUN_0018719c(0x522);
  if (temp_v1 != 0) {
    DAT_0057f54c = 1;
    DAT_0057f550 = 1;
    DAT_0057f548 = temp_v0;
  }
  return 1;
}

} /* extern "C" */
