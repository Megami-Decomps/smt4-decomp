/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029bddc` (_code @ 0x29bddc, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int DAT_004dad60; /* 0x4dad60 */

/* Supplied declaration required: FUN_001181b0. */
extern unsigned int FUN_00138330(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002a135c. */
/* Supplied declaration required: FUN_002a9498. */
/* Supplied declaration required: FUN_002b0418. */
/* Supplied declaration required: FUN_002b0434. */
/* Supplied declaration required: FUN_002b2814. */
/* Supplied declaration required: FUN_002b2928. */
extern unsigned int FUN_002b2b78(unsigned int, unsigned int);


int FUN_0029bddc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = param_1;
  temp_v2 = param_4;
  FUN_002a135c();
  *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = param_2;
  FUN_002b0434(param_1,0);
  *(int *)(temp_v0 + 4) = param_1;
  FUN_002b0418();
  FUN_001181b0(*(unsigned int *)(temp_v0 + 4));
  temp_v1 = FUN_00138330(*(unsigned int *)(temp_v0 + 4),(unsigned int *)&temp_v2);
  temp_v1 = FUN_002b2b78(temp_v1,temp_v2);
  *(unsigned int *)(*(int *)(temp_v0 + 8) + 4) = temp_v1;
  FUN_002a9498(*(unsigned int *)(temp_v0 + 8),param_2);
  FUN_002b2928(temp_v0);
  FUN_002b2814(&DAT_004dad60,temp_v0,0);
  return temp_v0;
}
