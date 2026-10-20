/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf09c` (_code @ 0x2bf09c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00507c74(unsigned char *, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_0063e1e8; /* 0x63e1e8 */

extern int FUN_0015fe30(unsigned char *);
/* Supplied declaration required: FUN_00507c74. */


unsigned char * FUN_002bf09c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  puVar2 = &DAT_0063e1e8;
  temp_v0 = FUN_0015fe30(&DAT_0063e1e8);
  if (temp_v0 != 0) {
    FUN_00507c74(&DAT_0063e1e8,param_1);
    return puVar2;
  }
  return (unsigned char *)0xffffffff;
}

} /* extern "C" */
