/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d2628` (_code @ 0x4d2628, 0x2e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00317464(...);
int FUN_00340edc(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int *FUN_00317450(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00317464. */
extern unsigned int *FUN_00340ec8(unsigned int);
/* Supplied declaration required: FUN_00340edc. */
extern unsigned int FUN_003874fc(unsigned int);


void FUN_004d2628(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_003874fc(*(unsigned int *)(param_1 + 0x10));
  switch(temp_v0) {
  case 0:
    puVar2 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_1 + 0x1c) = *puVar2;
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),1,0xffffff01,0xff);
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),2,0xffffff01,0xff);
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),3,0xffffff01,0xff);
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),4,0,0x168);
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),5,0,0x168);
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),6,0,0x168);
    FUN_00340edc(*(unsigned int *)(param_1 + 0x10),7,0,10);
    FUN_00317464(*(unsigned int *)(param_1 + 0x10),8,
                 (int)*(short *)(param_2 + *(int *)(param_1 + 0x1c) * 2 + 0x2344),0xffffffff,0xff,0)
    ;
    break;
  case 1:
    puVar2 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + *(int *)(param_1 + 0x1c) * 0xc + 0x22d0) = *puVar2;
    return;
  case 2:
    puVar2 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + *(int *)(param_1 + 0x1c) * 0xc + 0x22d4) = *puVar2;
    return;
  case 3:
    puVar2 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + *(int *)(param_1 + 0x1c) * 0xc + 0x22d8) = *puVar2;
    return;
  case 4:
    puVar2 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + *(int *)(param_1 + 0x1c) * 0xc + 0x2300) = *puVar2;
    return;
  case 5:
    puVar2 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + *(int *)(param_1 + 0x1c) * 0xc + 0x2304) = *puVar2;
    return;
  case 6:
    puVar2 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + *(int *)(param_1 + 0x1c) * 0xc + 0x2308) = *puVar2;
    return;
  case 7:
    puVar2 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + *(int *)(param_1 + 0x1c) * 4 + 0x2330) = *puVar2;
    return;
  case 8:
    puVar2 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(short *)(param_2 + *(int *)(param_1 + 0x1c) * 2 + 0x2344) = (short)*puVar2;
    return;
  }
  return;
}

} /* extern "C" */
