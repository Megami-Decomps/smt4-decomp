/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2834` (_code @ 0x2f2834, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7232(unsigned int);
int FUN_00300376(int *, int *, int);
int FUN_00300386(unsigned char [4], int, int *);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_002e7232. */
extern int FUN_00300366(int *, unsigned int *);
/* Supplied declaration required: FUN_00300376. */
/* Supplied declaration required: FUN_00300386. */


void FUN_002f2834(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [4];
  
  temp_v1 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  while( 1 ) {
    temp_v2 = *(unsigned int *)(param_1 + 0x14);
    temp_v0 = FUN_00300366(&temp_v1,(unsigned int *)&temp_v2);
    if (temp_v0 == 0) break;
    FUN_002e7232(*(unsigned int *)(temp_v1 + 0x18));
    FUN_00300376(&temp_v3,&temp_v1,0);
    temp_v4 = temp_v3;
    FUN_00300386(temp_v5,param_1 + 4,&temp_v4);
  }
  return;
}

} /* extern "C" */
