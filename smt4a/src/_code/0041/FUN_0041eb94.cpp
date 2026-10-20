/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041eb94` (_code @ 0x41eb94, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023b45c(int);
int FUN_002c8538(int);
int FUN_002e342c(...);
int FUN_002f0384(int);
int FUN_0033440c(int);
int FUN_0033449c(int);
int FUN_0034aa94(int, int);
int FUN_0034aac8(int);
int FUN_003720a0(unsigned int, int);
int FUN_003fd7b4(unsigned int);
int rt_memcpy_w(unsigned int *, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_0014af84(void);
/* Supplied declaration required: FUN_0023b45c. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002f0384. */
/* Supplied declaration required: FUN_0033440c. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_0034aa94. */
/* Supplied declaration required: FUN_0034aac8. */
/* Supplied declaration required: FUN_003720a0. */
/* Supplied declaration required: FUN_003fd7b4. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0041eb94(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned char temp_v2;
  
  FUN_003fd7b4(*(unsigned int *)(*(int *)(param_1 + 0x58) + 4));
  *(int *)(param_1 + 100) = *(int *)(param_1 + 0x2f8);
  temp_v0 = param_1 + *(int *)(param_1 + 0x2f8) * 0x80;
  puVar3 = *(unsigned int **)(param_1 + 0x54);
  *puVar3 = *(unsigned int *)(temp_v0 + 0x7e);
  puVar3[1] = *(unsigned int *)(temp_v0 + 0x82);
  puVar3[2] = *(unsigned int *)(temp_v0 + 0x86);
  *(unsigned short *)(puVar3 + 3) = *(unsigned short *)(temp_v0 + 0x8a);
  *(unsigned int *)((int)puVar3 + 0xe) = *(unsigned int *)(temp_v0 + 0xaa);
  *(unsigned int *)((int)puVar3 + 0x12) = *(unsigned int *)(temp_v0 + 0xae);
  *(unsigned int *)((int)puVar3 + 0x16) = *(unsigned int *)(temp_v0 + 0xb2);
  *(unsigned short *)((int)puVar3 + 0x1a) = *(unsigned short *)(temp_v0 + 0xb6);
  rt_memcpy_w(puVar3 + 7,temp_v0 + 0x9c,0xe);
  *(unsigned short *)((int)puVar3 + 0x2a) = *(unsigned short *)(temp_v0 + 0x90);
  *(unsigned short *)(puVar3 + 0xb) = *(unsigned short *)(temp_v0 + 0x92);
  puVar3[0xc] = *(unsigned int *)(temp_v0 + 0x8c);
  FUN_002e342c(puVar3 + 0x13,temp_v0 + 0x6c);
  *(unsigned short *)((int)puVar3 + 0x62) = *(unsigned short *)(temp_v0 + 0xd0);
  temp_v1 = FUN_0014af84();
  FUN_002e342c(temp_v1 + 0x54,temp_v0 + 0x6c);
  FUN_0033440c(*(unsigned char *)(param_1 + *(int *)(param_1 + 0x2f8) * 0x80 + 0xd6));
  FUN_003720a0(*(unsigned int *)(param_1 + 0x54),0);
  temp_v0 = param_1 + *(int *)(param_1 + 0x2f8) * 0x80;
  if (temp_v0 != -0x6c) {
    FUN_0034aac8(*(char *)(temp_v0 + 0xb8) != '\0');
  }
  temp_v2 = *(char *)(*(int *)(param_1 + 0x2f8) + param_1 + 0x2ec) == '\0';
  if (!temp_v2) {
    FUN_0033449c(0);
    FUN_0023b45c(1);
    FUN_002c8538(1);
    FUN_002f0384(1);
  }
  else {
    FUN_0033449c(0);
    FUN_0023b45c(0);
    FUN_002c8538(1);
    FUN_002f0384(0);
  }
  *(unsigned char *)(param_1 + 0x68) = !temp_v2;
  FUN_0034aa94(1,*(unsigned short *)(*(int *)(param_1 + 0x54) + 8));
  FUN_0034aa94(2,*(unsigned short *)(*(int *)(param_1 + 0x54) + 10));
  FUN_0034aa94(0,*(unsigned short *)(*(int *)(param_1 + 0x54) + 6));
  return;
}

} /* extern "C" */
