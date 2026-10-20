/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002531bc` (_code @ 0x2531bc, 0x134 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00287098(unsigned int, unsigned int);
int FUN_0028c618(unsigned int, int);
int FUN_0028c640(unsigned int, int, char *);
int FUN_002a5710(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_0049f91c; /* 0x49f91c */

/* Supplied declaration required: FUN_00287098. */
/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: FUN_0028c640. */
/* Supplied declaration required: FUN_002a5710. */


void FUN_002531bc(char *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  
  if (*param_1 != '\0') {
    if ((*(signed char *)((unsigned char *)&DAT_0049f91c + 0x22)) != '\0') {
      puVar1 = *(unsigned int **)(param_1 + 0x20);
      if ((*puVar1 & 2) == 0) {
        *puVar1 = *puVar1 | 2;
        *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
      }
    }
    else if (param_1[2] != '\0') {
      puVar1 = *(unsigned int **)(param_1 + 0x20);
      if (param_1[1] != '\0') {
        if ((*puVar1 & 2) != 0) {
          *puVar1 = *puVar1 & 0xfffffffd;
          *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
        }
      }
      else if ((*puVar1 & 2) == 0) {
        *puVar1 = *puVar1 | 2;
        *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
      }
      FUN_0028c640(*(unsigned int *)(*(int *)(param_1 + 0x20) + 8),0,param_1 + 0xc);
      FUN_0028c618(*(unsigned int *)(*(int *)(param_1 + 0x20) + 8),0);
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 0x38) != *(int *)(param_1 + 0x1c)) {
        FUN_002a5710(*(unsigned int *)(*(int *)(param_1 + 0x20) + 8));
        FUN_00287098(*(unsigned int *)(*(int *)(param_1 + 0x20) + 8),*(unsigned int *)(param_1 + 0x1c));
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
