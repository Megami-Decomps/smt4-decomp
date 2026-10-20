/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c194` (_code @ 0x11c194, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002ecf70(int *, int, int *);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_2_stack;

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002ecf70. */
extern int FUN_002ecfd2(int *, unsigned int *);


unsigned int FUN_0011c194(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int iStack_10;
  int uStack_c;
  
  iStack_10 = param_1;
  uStack_c = param_2;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  FUN_002ecf70(&temp_v4,param_1 + 0x60,&uStack_c);
  temp_v3 = temp_v4;
  temp_v5 = *(unsigned int *)(param_1 + 0x70);
  temp_v0 = FUN_002ecfd2(&temp_v3,(unsigned int *)&temp_v5);
  if (temp_v0 != 0) {
    FUN_002e6e5c(temp_v2);
    temp_v1 = 0;
  }
  else {
    temp_v1 = *(unsigned int *)(temp_v3 + 0x14);
    FUN_002e6e5c(temp_v2);
  }
  return temp_v1;
}

} /* extern "C" */
