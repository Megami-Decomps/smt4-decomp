/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129316` (_code @ 0x129316, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e5c(unsigned char [12]);
int FUN_002f1468(unsigned int *, unsigned int **);
int FUN_002f3e6a(int *, unsigned int *, int *);
int FUN_002fb208(void);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

extern unsigned int FUN_002e6e34(unsigned char *, int);
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002f1468. */
/* Supplied declaration required: FUN_002f3e6a. */
/* Supplied declaration required: FUN_002fb208. */
extern unsigned int *wordRefsEqual_0030cd14(int *, unsigned int *);


unsigned int * FUN_00129316(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned char temp_v1 [12];
  unsigned int *temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v0 = FUN_002e6e34(temp_v1,param_1 + 0x10);
  FUN_002fb208();
  puVar4 = (unsigned int *)(param_1 + 0x40);
  temp_v4 = temp_v0;
  FUN_002f3e6a(&temp_v3,puVar4,&temp_v4);
  temp_v5 = *(unsigned int *)(param_1 + 0x50);
  puVar2 = (unsigned int *)wordRefsEqual_0030cd14(&temp_v3,(unsigned int *)&temp_v5);
  if (puVar2 != (unsigned int *)0x0) {
    FUN_002fb208();
    puVar3 = puVar4;
    temp_v2 = puVar2;
    FUN_002f1468(puVar4,&temp_v2);
    *puVar3 = *(unsigned int *)(param_1 + 0xc);
    FUN_002fb208();
    temp_v2 = puVar3;
    FUN_002f1468(puVar4,&temp_v2);
  }
  else {
    puVar4 = (unsigned int *)(temp_v3 + 0x14);
  }
  FUN_002e6e5c(temp_v1);
  return puVar4;
}

} /* extern "C" */
