/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106f6c` (_code @ 0x106f6c, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9768(int, int, unsigned char *);
int FUN_002ee796(int, int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_002ee7c4(int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char LAB_00106f9c; /* 0x106f9c */

/* Supplied declaration required: FUN_002e9768. */
/* Supplied declaration required: FUN_002ee796. */
/* Supplied declaration required: FUN_002ee7c4. */


int FUN_00106f6c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_002ee796(param_1,0x20,param_3,param_4,param_3,param_4);
  FUN_002ee7c4(param_1);
  temp_v0 = *(int *)(param_1 + 0xc);
  FUN_002e9768(temp_v0,0x20,&LAB_00106f9c);
  *(int *)(param_1 + 0xc) = temp_v0 * 2 + *(int *)(param_1 + 0xc);
  return param_1;
}

} /* extern "C" */
