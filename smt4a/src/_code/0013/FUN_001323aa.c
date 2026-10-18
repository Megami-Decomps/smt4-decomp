/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001323aa` (_code @ 0x1323aa, 0x86 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_002ee5b8. */
extern int FUN_002ee774(unsigned int **, unsigned int **);
extern int FUN_002fbada(unsigned int **, unsigned int **);
/* Supplied declaration required: FUN_00307e26. */
/* Supplied declaration required: FUN_0031023c. */


int FUN_001323aa(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *temp_v1;
  unsigned int *temp_v2;
  unsigned int *temp_v3;
  unsigned int *temp_v4;
  unsigned int *temp_v5;
  unsigned int *temp_v6;
  unsigned int *temp_v7;
  
  if (param_1 != param_2) {
    temp_v5 = *(unsigned int **)(param_1 + 0x10);
    temp_v3 = (unsigned int *)*temp_v5;
    temp_v4 = (unsigned int *)**(unsigned int **)(param_2 + 0x10);
    temp_v6 = *(unsigned int **)(param_2 + 0x10);
    while ((temp_v0 = FUN_002ee774(&temp_v3,&temp_v5), temp_v0 != 0 &&
           (temp_v0 = FUN_002fbada(&temp_v4,&temp_v6), temp_v0 != 0))) {
      FUN_002ee5b8(temp_v3 + 2,temp_v4 + 2);
      temp_v3 = (unsigned int *)*temp_v3;
      temp_v4 = (unsigned int *)*temp_v4;
    }
    if (temp_v4 == temp_v6) {
      temp_v1 = temp_v5;
      temp_v2 = temp_v3;
      FUN_00307e26(&temp_v7,param_1,&temp_v2,&temp_v1);
    }
    else {
      temp_v7 = temp_v5;
      FUN_0031023c(param_1,&temp_v7);
    }
  }
  return param_1;
}
