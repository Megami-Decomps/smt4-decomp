/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f14b2` (_code @ 0x2f14b2, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int *FUN_001117d4(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int FUN_002ea714(void);


void FUN_002f14b2(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned char temp_v2 [16];
  
  puVar3 = &temp_v1;
  if ((int)((unsigned int)*(unsigned short *)(param_3 + 0x3c) * 0x100000) < 0) {
    temp_v0 = FUN_002ea714();
    FUN_002e6e34(temp_v2,temp_v0);
    piVar2 = (int *)FUN_001117d4();
    if (piVar2 != (int *)0x0) {
      temp_v1 = (unsigned int)*(unsigned char *)(param_3 + 0x84);
      (**(romwright_code **)(*piVar2 + 0x14))(piVar2,param_1,param_2,*(unsigned short *)(param_3 + 0x3c));
    }
    puVar3 = (unsigned int *)temp_v2;
  }
  else {
    if (*(int *)(param_1 + 0x70) == 0) {
      return;
    }
    temp_v0 = FUN_002ea714();
    FUN_002e6e34(&temp_v1,temp_v0);
    (**(romwright_code **)(**(int **)(param_1 + 0x70) + 8))
              (*(int **)(param_1 + 0x70),param_1,param_2,*(unsigned char *)(param_3 + 0x84));
  }
  FUN_002e6e5c(puVar3);
  return;
}
