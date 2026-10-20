/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7c94` (_code @ 0x2f7c94, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ff588(unsigned char [8], int, int *);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_002ff588. */


void FUN_002f7c94(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [8];
  int iStack_10;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = param_2;
  temp_v1 = param_3;
  iStack_10 = param_1;
  temp_v3 = param_2;
  temp_v4 = param_3;
  FUN_002ff588(temp_v2,param_1 + 0x3c,&temp_v0);
  return;
}

} /* extern "C" */
