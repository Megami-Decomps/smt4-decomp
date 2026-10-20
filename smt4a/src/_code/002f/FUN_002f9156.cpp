/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9156` (_code @ 0x2f9156, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7232(int *);
int FUN_002e995c(unsigned char [32]);
int FUN_002eb17c(int *, unsigned char [32]);
int FUN_002f3624(int *, int, unsigned int);
int FUN_002fd394(int, unsigned int, unsigned char [32]);

typedef int romwright_code(...);
/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002e995c. */
/* Supplied declaration required: FUN_002eb17c. */
extern int FUN_002eb83c(void);
/* Supplied declaration required: FUN_002f3624. */
/* Supplied declaration required: FUN_002fd394. */


unsigned int FUN_002f9156(int param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int *piVar4;
  unsigned char temp_v2 [32];
  
  FUN_002e995c(temp_v2);
  FUN_002fd394(*(int *)(param_1 + 0xc) + 0x80,param_3,temp_v2);
  piVar1 = param_2;
  FUN_002f3624(param_2,6,param_3);
  if (piVar1 != (int *)0x0) {
    temp_v0 = FUN_002eb83c();
    if (temp_v0 != 0) {
      FUN_002e7232(param_2);
      FUN_002eb17c(piVar1,temp_v2);
      piVar4 = *(int **)(*(int *)(param_1 + 0xc) + 0xb0);
      temp_v1 = (**(romwright_code **)(*piVar4 + 0x20))
                        (piVar4,param_4,*(unsigned char *)(*(int *)(param_1 + 0xc) + 4),1,1,piVar1,1);
      FUN_002e7232(piVar1);
      return temp_v1;
    }
    FUN_002e7232(param_2);
    (**(romwright_code **)(*piVar1 + 4))(piVar1);
  }
  else {
    FUN_002e7232(param_2);
  }
  return 0;
}

} /* extern "C" */
