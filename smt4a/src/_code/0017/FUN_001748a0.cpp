/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001748a0` (_code @ 0x1748a0, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int refIsNullOrZero(int *);
int FUN_0016e800(void);
int FUN_001883b0(int, unsigned short [264], int);
int FUN_002e3c44(unsigned short *, int, int, int *);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: refIsNullOrZero. */
extern int FUN_00100836(int, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_0016e800. */
/* Supplied declaration required: FUN_001883b0. */
/* Supplied declaration required: FUN_002e3c44. */


int FUN_001748a0(int param_1,int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  unsigned short *puVar3;
  int temp_v1;
  unsigned short temp_v2 [264];
  int temp_v3;
  unsigned int temp_v4;
  
  puVar3 = temp_v2;
  puVar2 = temp_v2;
  *(char *)(param_1 + 0x1c) = (char)param_3;
  if (param_3 != 0) {
    temp_v1 = param_1 + 4;
    temp_v3 = 0;
    temp_v4 = 0;
    refIsNullOrZero(&temp_v3);
    while ((temp_v0 = FUN_00100836(param_2,0x105,(unsigned int *)&temp_v3), temp_v0 != 0 &&
           (puVar2 = puVar3, FUN_002e3c44(puVar3,param_2,temp_v0,&temp_v3),
           puVar2 != (unsigned short *)0x0))) {
      puVar3 = puVar3 + 1;
      param_2 = param_2 + temp_v0;
    }
    *puVar3 = 0;
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned int *)(param_1 + 0xc) = 0;
    FUN_001883b0(temp_v1,temp_v2,1);
    *(int *)(param_1 + 0x18) = temp_v1;
    return (temp_v1 >> 0x1f) + 1;
  }
  temp_v1 = param_1 + 4;
  temp_v3 = 0;
  temp_v4 = 0;
  refIsNullOrZero(&temp_v3);
  while ((temp_v0 = FUN_00100836(param_2,0x105,(unsigned int *)&temp_v3), temp_v0 != 0 &&
         (puVar3 = puVar2, FUN_002e3c44(puVar2,param_2,temp_v0,&temp_v3), puVar3 != (unsigned short *)0x0
         ))) {
    puVar2 = puVar2 + 1;
    param_2 = param_2 + temp_v0;
  }
  *puVar2 = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  FUN_001883b0(temp_v1,temp_v2,1);
  if ((temp_v1 < 0) && (temp_v1 < 0)) {
    FUN_0016e800();
  }
  return 1;
}

} /* extern "C" */
