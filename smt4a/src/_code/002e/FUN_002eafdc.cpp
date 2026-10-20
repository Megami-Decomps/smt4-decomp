/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eafdc` (_code @ 0x2eafdc, 0x6a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00107298(int *, unsigned int);
int FUN_002eb368(unsigned int *[4], int, unsigned int **);

typedef int romwright_code(...);
/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_00107298. */
extern unsigned int FUN_002e7908(unsigned int **, unsigned int **);
extern int FUN_002eb358(unsigned int **, unsigned int *);
/* Supplied declaration required: FUN_002eb368. */


void FUN_002eafdc(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int *temp_v2;
  unsigned int *temp_v3;
  int temp_v4;
  unsigned int *temp_v5 [4];
  
  temp_v3 = *(unsigned int **)(param_1 + 0x80);
  do {
    temp_v3 = (unsigned int *)*temp_v3;
    while( 1 ) {
      temp_v4 = *(unsigned int *)(param_1 + 0x80);
      temp_v1 = FUN_002eb358(&temp_v3,(unsigned int *)&temp_v4);
      if (temp_v1 == 0) {
        return;
      }
      piVar3 = (int *)temp_v3[2];
      if ((param_2 == 0) && ((char)piVar3[0x23] != '\0')) break;
      if (piVar3 != (int *)0x0) {
        (**(romwright_code **)(*piVar3 + 4))(piVar3);
      }
      temp_v2 = temp_v3;
      FUN_002eb368(temp_v5,param_1 + 0x70,&temp_v2);
      temp_v3 = temp_v5[0];
    }
    temp_v2 = (unsigned int *)0x80050007;
    temp_v0 = FUN_002e7908(temp_v5,&temp_v2);
    FUN_00107298(piVar3,temp_v0);
  } while( 1 );
}

} /* extern "C" */
