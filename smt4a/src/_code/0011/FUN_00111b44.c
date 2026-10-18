/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111b44` (_code @ 0x111b44, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_00111b90; /* 0x111b90 */

extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int FUN_002fd432(int, unsigned int **);


void FUN_00111b44(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *temp_v2;
  unsigned char temp_v3 [20];
  
  temp_v2 = *(unsigned int **)(param_1 + 0x1a0);
  *(unsigned int *)(param_1 + 0x1ac) = *temp_v2;
  *(unsigned char *)(param_1 + 0x1a8) = 0;
  temp_v0 = FUN_002fd432(param_1 + 0x1ac,&temp_v2);
  if (temp_v0 == 0) {
    temp_v1 = 0x111a09;
  }
  else {
    temp_v1 = 0x112049;
  }
  temp_v1 = FUN_002ea3c0(temp_v3,temp_v1,0,&LAB_00111b90);
  FUN_002ea3d0(param_1,temp_v1);
  return;
}
