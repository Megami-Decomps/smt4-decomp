/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104ebc` (_code @ 0x104ebc, 0x9e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], unsigned int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002eb390(int *, int, int *);
int FUN_002eb3f2(int, int [2]);
int FUN_002eb414(int *, int *, int *);
int FUN_002eb422(int *);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int FUN_002ea714(void);
/* Supplied declaration required: FUN_002eb390. */
/* Supplied declaration required: FUN_002eb3f2. */
extern int FUN_002eb404(unsigned int *);
/* Supplied declaration required: FUN_002eb414. */
/* Supplied declaration required: FUN_002eb422. */
extern int wordRefsDiffer_002eb452(int *, unsigned int *);


unsigned int FUN_00104ebc(int param_1,int param_2,int param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2 [2];
  unsigned char temp_v3 [12];
  int temp_v4;
  unsigned int temp_v5 [3];
  int iStack_1c;
  int temp_v6;
  int iStack_14;
  
  iStack_1c = param_1;
  temp_v6 = param_2;
  iStack_14 = param_3;
  temp_v0 = FUN_002ea714();
  FUN_002e6e34(temp_v3,temp_v0);
  FUN_002eb390(&temp_v4,param_1 + 200,&temp_v6);
  while( 1 ) {
    temp_v5[0] = *(unsigned int *)(param_1 + 0xd8);
    temp_v1 = wordRefsDiffer_002eb452(&temp_v4,temp_v5);
    if ((temp_v1 == 0) || (*(int *)(temp_v4 + 0x10) != temp_v6)) break;
    if (*(int *)(temp_v4 + 0x14) == param_3) {
      temp_v1 = *(int *)(temp_v4 + 0x10);
      temp_v2[0] = temp_v4;
      FUN_002eb3f2(param_1 + 200,temp_v2);
      for (piVar3 = *(int **)(param_1 + 0xe4);
          (piVar3 != *(int **)(param_1 + 0xe8) && (*piVar3 != temp_v1)); piVar3 = piVar3 + 1) {
      }
      temp_v1 = FUN_002eb404((unsigned int *)(param_1 + 0xe4));
      if (temp_v1 == 0) {
        if (*(int **)(param_1 + 0xe8) != piVar3 + 1) {
          FUN_002eb414(piVar3 + 1,*(int **)(param_1 + 0xe8),piVar3);
        }
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) - 4;
      }
      FUN_002e6e5c(temp_v3);
      return 1;
    }
    FUN_002eb422(&temp_v4);
  }
  FUN_002e6e5c(temp_v3);
  return 0;
}

} /* extern "C" */
