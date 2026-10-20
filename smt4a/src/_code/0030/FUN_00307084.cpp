/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307084` (_code @ 0x307084, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f6be2(unsigned int, int *);
int operatorDeleteArrayNullable(int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002f6be2. */
/* Supplied declaration required: operatorDeleteArrayNullable. */
extern unsigned int FUN_00302420(unsigned int, unsigned int *, unsigned int);


unsigned int FUN_00307084(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = param_3;
  temp_v2 = param_4;
  FUN_002f6be2(param_1,&temp_v1);
  temp_v2 = 0;
  temp_v0 = FUN_00302420(temp_v1,(unsigned int *)&temp_v2,10);
  operatorDeleteArrayNullable(temp_v1);
  return temp_v0;
}

} /* extern "C" */
