/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d25c8` (_code @ 0x1d25c8, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int taskCreateDraw(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_001b5154(...); /* 0x1b5154 */
extern unsigned char LAB_001d2618; /* 0x1d2618 */
extern int FUN_0020ed98(...); /* 0x20ed98 */

/* Supplied declaration required: taskCreateDraw. */


void FUN_001d25c8(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  
  puVar1 = &LAB_001d2618;
  taskCreateDraw(&LAB_001d2618,2,0,0,FUN_001b5154,FUN_0020ed98,param_1,*param_1);
  param_1[9] = (unsigned int)puVar1;
  return;
}

} /* extern "C" */
