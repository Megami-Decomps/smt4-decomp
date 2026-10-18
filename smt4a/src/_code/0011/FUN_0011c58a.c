/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c58a` (_code @ 0x11c58a, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_2_stack;

/* Supplied declaration required: FUN_0013232a. */
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002ecf70. */
extern int FUN_003112cc(unsigned int *, unsigned int *);


unsigned int FUN_0011c58a(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [12];
  int temp_v2;
  int temp_v3;
  int iStack_14;
  int uStack_10;
  
  iStack_14 = param_1;
  uStack_10 = param_2;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v1,temp_v0 + 0x58);
  FUN_002ecf70(&temp_v3,param_1 + 0x60,&uStack_10);
  temp_v2 = *(unsigned int *)(param_1 + 0x70);
  temp_v0 = FUN_003112cc((unsigned int *)&temp_v3,(unsigned int *)&temp_v2);
  if (temp_v0 == 0) {
    temp_v2 = temp_v3;
    FUN_0013232a(param_1 + 0x60,&temp_v2);
  }
  FUN_002e6e5c(temp_v1);
  return 1;
}
