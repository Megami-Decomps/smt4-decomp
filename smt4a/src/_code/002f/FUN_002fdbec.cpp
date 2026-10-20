/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fdbec` (_code @ 0x2fdbec, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00307d38(int *, int, unsigned int **);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int onlineSockAddrEquals(unsigned int *, unsigned int);
extern int wordRefsDiffer_002fd750(unsigned int **, unsigned int **);
/* Supplied declaration required: FUN_00307d38. */


unsigned long long FUN_002fdbec(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *temp_v1;
  unsigned int *temp_v2;
  unsigned int *temp_v3;
  int uStack_14;
  
  temp_v2 = *(unsigned int **)(param_1 + 0x10);
  puVar2 = (unsigned int *)*temp_v2;
  temp_v3 = param_3;
  uStack_14 = param_4;
  while (temp_v1 = puVar2, temp_v0 = wordRefsDiffer_002fd750(&temp_v1,&temp_v2), temp_v0 != 0) {
    puVar2 = (unsigned int *)*temp_v1;
    temp_v0 = onlineSockAddrEquals(temp_v1 + 2,param_2);
    if (temp_v0 != 0) {
      temp_v3 = temp_v1;
      FUN_00307d38(&uStack_14,param_1,&temp_v3);
    }
  }
  return romwright_piece_4_4(temp_v2,temp_v1);
}

} /* extern "C" */
