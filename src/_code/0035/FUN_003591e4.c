/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003591e4` (_code @ 0x3591e4, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_00473848; /* 0x473848 */

/* Supplied declaration required: FUN_002c153c. */
extern int FUN_002c1570(void);
extern unsigned int FUN_002c3290(char *);


void FUN_003591e4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002c1570();
  if (-1 < temp_v0) {
    temp_v1 = FUN_002c3290("cecd:u");
    FUN_002c153c(&DAT_00473848,"cecd:u",temp_v1,0);
    return;
  }
  return;
}
