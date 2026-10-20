/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4bfc` (_code @ 0x2f4bfc, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned int *, int);
int FUN_002e6e5c(unsigned int *);
int FUN_002f4ab0(unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002f4ab0. */
extern unsigned int vectorCount4_002f4ba0(unsigned int);


long long FUN_002f4bfc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  temp_v2 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_002e6e34(&temp_v2,param_1 + 4);
  if (*(char *)(param_1 + 0x34) == '\0') {
    *(unsigned char *)(param_1 + 0x34) = 1;
    FUN_002e6e5c(&temp_v2);
    temp_v1 = 0;
    temp_v2 = param_1 + 0x38;
    while( 1 ) {
      temp_v0 = vectorCount4_002f4ba0(temp_v2);
      puVar3 = *(unsigned int **)(param_1 + 0x38);
      if (temp_v0 <= temp_v1) break;
      FUN_002f4ab0(puVar3[temp_v1],0xffffffff);
      piVar1 = *(int **)(*(int *)(param_1 + 0x38) + temp_v1 * 4);
      if (piVar1 != (int *)0x0) {
        (**(romwright_code **)(*piVar1 + 4))();
      }
      temp_v1 = temp_v1 + 1;
    }
    puVar6 = *(unsigned int **)(param_1 + 0x3c);
    puVar4 = puVar6;
    puVar5 = puVar3;
    if (puVar3 != puVar6) {
      for (; puVar4 != puVar6; puVar4 = puVar4 + 1) {
        *puVar5 = *puVar4;
        puVar5 = puVar5 + 1;
      }
      for (; puVar5 != *(unsigned int **)(param_1 + 0x3c); puVar5 = puVar5 + 1) {
      }
      *(unsigned int *)(param_1 + 0x3c) =
           (int)*(unsigned int **)(param_1 + 0x3c) - (((int)puVar6 - (int)puVar3) & 0xfffffffcU);
    }
    FUN_002e6e34(&temp_v2,param_1 + 4);
    *(unsigned char *)(param_1 + 0x34) = 2;
    FUN_002e6e5c(&temp_v2);
    return romwright_piece_4_4(temp_v2,1);
  }
  FUN_002e6e5c(&temp_v2);
  return (unsigned long long)temp_v2 << 0x20;
}

} /* extern "C" */
