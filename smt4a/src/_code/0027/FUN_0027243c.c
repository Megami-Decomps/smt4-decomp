/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027243c` (_code @ 0x27243c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_0024b718(); /* 0x24b718 */
extern unsigned char LAB_0027248c; /* 0x27248c */
extern int FUN_002dec74(); /* 0x2dec74 */

/* Supplied declaration required: FUN_0015155c. */


void FUN_0027243c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  
  puVar1 = &LAB_0027248c;
  FUN_0015155c(&LAB_0027248c,4,0,0,FUN_0024b718,FUN_002dec74,param_1,*param_1);
  param_1[0x11] = (unsigned int)puVar1;
  return;
}
