/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed480` (_code @ 0x2ed480, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int FUN_0028686c(void);
extern int FUN_00286880(void);
/* Supplied declaration required: FUN_00286928. */
/* Supplied declaration required: FUN_00289640. */
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_002b8574. */


unsigned int FUN_002ed480(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v4 = *(int *)(param_1 + 4);
  temp_v0 = FUN_00286880();
  if (temp_v0 == 0x14) {
    temp_v0 = 5;
  }
  temp_v1 = FUN_0028686c();
  temp_v2 = FUN_00296f60(0);
  temp_v3 = FUN_00289640();
  FUN_00286928(temp_v1,temp_v2,temp_v3,temp_v0,0,0);
  temp_v0 = FUN_00289640();
  if (temp_v0 == 0) {
    FUN_002b8574(*(unsigned int *)(temp_v4 + 4));
    *(unsigned char *)(temp_v4 + 0xa10) = 0;
    *(unsigned int *)(temp_v4 + 0xc) = *(unsigned int *)(temp_v4 + 0xc) | 0x20;
  }
  return temp_v1;
}
