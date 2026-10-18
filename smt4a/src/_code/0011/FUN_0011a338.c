/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a338` (_code @ 0x11a338, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_001039fc. */
/* Supplied declaration required: FUN_002ea9dc. */
/* Supplied declaration required: FUN_002fbac6. */
/* Supplied declaration required: FUN_002fd5d4. */
extern int FUN_00306e60(unsigned int **, unsigned int *);


void FUN_0011a338(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [104];
  unsigned int *temp_v2;
  unsigned int temp_v3 [2];
  
  temp_v2 = (unsigned int *)**(unsigned int **)(param_1 + 0x1b8);
  while( 1 ) {
    temp_v3[0] = *(unsigned int *)(param_1 + 0x1b8);
    temp_v0 = FUN_00306e60(&temp_v2,temp_v3);
    if (temp_v0 == 0) break;
    FUN_002fd5d4(temp_v1,temp_v2 + 4);
    FUN_001039fc(temp_v1,temp_v2[0x1e]);
    FUN_002fbac6(param_2,temp_v1);
    temp_v2 = (unsigned int *)*temp_v2;
    FUN_002ea9dc(temp_v1);
  }
  return;
}
