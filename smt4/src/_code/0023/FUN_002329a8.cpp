/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002329a8` (_code @ 0x2329a8, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025beb8(unsigned int, int);
int FUN_0028c618(unsigned int, int);
int FUN_0028c640(unsigned int, int, int *);
int FUN_002a0428(unsigned int, int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_0025beb8. */
extern unsigned int asdMdlManagerClone(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: FUN_0028c640. */
/* Supplied declaration required: FUN_002a0428. */


void FUN_002329a8(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = asdMdlManagerClone(param_2,0);
  *(unsigned int *)(param_1 + 0x6c) = temp_v0;
  FUN_002a0428(temp_v0,1);
  puVar2 = *(unsigned int **)(param_1 + 0x6c);
  *puVar2 = *puVar2 & 0xfffffffd;
  *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 1;
  *(unsigned char *)(param_1 + 8) = *(unsigned char *)(param_1 + 8) | 2;
  temp_v1 = 0;
  temp_v2 = 0;
  temp_v3 = 0;
  FUN_0028c640(*(unsigned int *)(*(int *)(param_1 + 0x6c) + 8),0,&temp_v1);
  FUN_0028c618(*(unsigned int *)(*(int *)(param_1 + 0x6c) + 8),0);
  FUN_0025beb8(*(unsigned int *)(*(int *)(param_1 + 0x6c) + 8),0);
  return;
}

} /* extern "C" */
