/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8404` (_code @ 0x3b8404, 0x17c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022b29c(int, int, int);
int FUN_0022b684(int);
int FUN_002bd808(int, unsigned short *);

/* stack frame of param_2: 3 slot(s), 6 byte(s) */
typedef struct {
    unsigned short spC; /* 0xc: local_c */
    unsigned short spE; /* 0xe: local_e */
    unsigned short sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0022b29c. */
/* Supplied declaration required: FUN_0022b684. */
/* Supplied declaration required: FUN_002bd808. */


void FUN_003b8404(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x28) = 5;
  temp_v1 = 0;
  temp_v2 = 0;
  temp_v3 = 0;
  switch(*(unsigned char *)(param_2 + 0x21)) {
  default:
    return;
  case 1:
    temp_v1 = *(unsigned short *)(param_2 + 0x54);
    FUN_002bd808(param_1 + 0x42,&temp_v1);
    temp_v0 = *(unsigned int *)(param_1 + 0x20) | 0x10;
    break;
  case 2:
    temp_v1 = *(unsigned short *)(param_2 + 0x54);
    temp_v2 = *(unsigned short *)(param_2 + 0x56);
    temp_v3 = *(unsigned short *)(param_2 + 0x58);
    FUN_002bd808(param_1 + 0x42,&temp_v1);
    *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0x100010;
    *(unsigned int *)(param_1 + 0x28) = 5;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    return;
  case 3:
    FUN_0022b684(param_1);
    temp_v0 = *(unsigned int *)(param_1 + 0x20) | 0x1000000;
    break;
  case 4:
    FUN_0022b684(param_1);
    temp_v0 = *(unsigned int *)(param_1 + 0x20) | 0x2000000;
    break;
  case 5:
    FUN_0022b684(param_1);
    temp_v0 = *(unsigned int *)(param_1 + 0x20) | 0x4000000;
    break;
  case 6:
    temp_v0 = *(unsigned int *)(param_1 + 0x20) | 0x800000;
    break;
  case 7:
    FUN_0022b684(param_1);
    temp_v0 = *(unsigned int *)(param_1 + 0x20) | 0x200000;
    break;
  case 8:
    FUN_0022b29c(param_1,(int)*(short *)(param_1 + 0x3c),*(unsigned short *)(param_2 + 0x54));
    *(unsigned int *)(param_1 + 0x28) = 4;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    return;
  case 9:
    FUN_0022b684(param_1);
    temp_v0 = *(unsigned int *)(param_1 + 0x20) | 0x8000000;
    break;
  case 10:
    FUN_0022b684(param_1);
    temp_v0 = *(unsigned int *)(param_1 + 0x20) | 0x20000000;
  }
  *(unsigned int *)(param_1 + 0x20) = temp_v0;
  return;
}

} /* extern "C" */
