/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec774` (_code @ 0x2ec774, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002ec728(unsigned int, unsigned int *);
int FUN_002f44ec(...);

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002ec728. */
/* Supplied declaration required: FUN_002f44ec. */
extern int FUN_002fd078(int, unsigned int);
extern int FUN_0030fbec(unsigned int **, int *);
extern int FUN_0030fbfc(int *, unsigned int *);


unsigned int FUN_002ec774(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *temp_v3;
  int temp_v4;
  unsigned char temp_v5 [12];
  int temp_v6;
  int temp_v7;
  int iStack_24;
  int uStack_20;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  iStack_24 = param_1;
  uStack_20 = param_2;
  temp_v8 = param_3;
  temp_v9 = param_4;
  FUN_002e6e34(temp_v5,param_1 + 0x3c);
  temp_v3 = (unsigned int *)&uStack_20;
  temp_v4 = param_1 + 0x1d;
  temp_v0 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  temp_v6 = *(int *)(param_1 + 0x14);
  while (temp_v1 = temp_v0, temp_v1 != 0) {
    temp_v0 = FUN_002f44ec(temp_v4,temp_v1 + 0x10,temp_v3);
    if (temp_v0 != 0) {
      temp_v0 = *(int *)(temp_v1 + 0xc);
    }
    else {
      temp_v0 = *(int *)(temp_v1 + 8);
      temp_v6 = temp_v1;
    }
  }
  temp_v7 = *(unsigned int *)(param_1 + 0x14);
  temp_v0 = FUN_0030fbfc(&temp_v6,(unsigned int *)&temp_v7);
  if ((temp_v0 != 0) ||
     (temp_v1 = FUN_002f44ec(temp_v4,temp_v3,temp_v6 + 0x10), temp_v0 = temp_v6, temp_v1 != 0)) {
    temp_v0 = *(int *)(param_1 + 0x14);
  }
  if ((temp_v0 != *(int *)(param_1 + 0x14)) &&
     (temp_v0 = FUN_002fd078(temp_v0 + 0x14,temp_v8), temp_v0 != 0)) {
    temp_v4 = param_1 + 0x39;
    puVar4 = (unsigned int *)(*(unsigned int **)(param_1 + 0x30))[1];
    puVar6 = *(unsigned int **)(param_1 + 0x30);
    while (puVar5 = puVar4, puVar5 != (unsigned int *)0x0) {
      temp_v0 = FUN_002f44ec(temp_v4,puVar5 + 4,&uStack_20);
      if (temp_v0 != 0) {
        puVar4 = (unsigned int *)puVar5[3];
      }
      else {
        puVar4 = (unsigned int *)puVar5[2];
        puVar6 = puVar5;
      }
    }
    temp_v6 = *(int *)(param_1 + 0x30);
    temp_v3 = puVar6;
    temp_v0 = FUN_0030fbec(&temp_v3,&temp_v6);
    if ((temp_v0 != 0) ||
       (temp_v0 = FUN_002f44ec(temp_v4,&uStack_20,temp_v3 + 4), puVar4 = temp_v3, temp_v0 != 0)) {
      puVar4 = *(unsigned int **)(param_1 + 0x30);
    }
    FUN_002ec728(temp_v9,puVar4 + 5);
    FUN_002e6e5c(temp_v5);
    temp_v2 = 1;
  }
  else {
    FUN_002e6e5c(temp_v5);
    temp_v2 = 0;
  }
  return temp_v2;
}

} /* extern "C" */
