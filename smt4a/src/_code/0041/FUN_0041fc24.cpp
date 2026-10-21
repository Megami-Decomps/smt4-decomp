/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041fc24` (_code @ 0x41fc24, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023b45c(int);
int FUN_002c8538(int);
int libc_strcpy(...);
int FUN_0033440c(int);
int FUN_0033449c(int);
int FUN_0034aac8(int);
int gameGlobalsQueueValues(unsigned int, int);
int rt_memcpy_w(unsigned int *, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: FUN_0023b45c. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_0033440c. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_0034aac8. */
/* Supplied declaration required: gameGlobalsQueueValues. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0041fc24(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  temp_v0 = *(int *)(param_1 + 0x2f8);
  if (temp_v0 == *(int *)(param_1 + 100)) {
    return;
  }
  *(int *)(param_1 + 100) = temp_v0;
  if (*(char *)(temp_v0 + param_1 + 0x2ec) != '\0') {
    FUN_0023b45c(1);
    FUN_002c8538(1);
    puVar3 = *(unsigned int **)(param_1 + 0x54);
    temp_v0 = param_1 + *(int *)(param_1 + 100) * 0x80;
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
    libc_strcpy(puVar3 + 0x13,temp_v0 + 0x6c);
    *(unsigned short *)((int)puVar3 + 0x62) = *(unsigned short *)(temp_v0 + 0xd0);
    temp_v1 = gameDataBlocksGetSaveData();
    libc_strcpy(temp_v1 + 0x54,temp_v0 + 0x6c);
    gameGlobalsQueueValues(*(unsigned int *)(param_1 + 0x54),0);
    FUN_0033440c(*(unsigned char *)(param_1 + *(int *)(param_1 + 100) * 0x80 + 0xd6));
    param_1 = param_1 + *(int *)(param_1 + 100) * 0x80;
    if (param_1 != -0x6c) {
      FUN_0034aac8(*(char *)(param_1 + 0xb8) != '\0');
    }
    FUN_0033449c(0);
    return;
  }
  FUN_0023b45c(0);
  FUN_002c8538(1);
  return;
}

} /* extern "C" */
