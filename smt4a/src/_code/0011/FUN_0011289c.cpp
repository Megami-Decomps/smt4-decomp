/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011289c` (_code @ 0x11289c, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00132932(int *, int, unsigned int *);
int FUN_002f2978(int, int, int, unsigned int);
int FUN_002fd760(int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00132932. */
/* Supplied declaration required: FUN_002f2978. */
extern int FUN_002f7f00(int, unsigned int);
/* Supplied declaration required: FUN_002fd760. */


long long FUN_0011289c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int uStack_1c;
  unsigned int uStack_18;
  
  temp_v2 = param_1 + 0x334;
  temp_v3 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if (*(char *)(*(int *)(param_1 + 0x118) + 0x34) == '\0') {
    temp_v0 = FUN_002fd760(temp_v2);
    temp_v1 = FUN_002fd760(temp_v2);
    temp_v3 = *(unsigned int *)(param_1 + 0x118);
    FUN_002f2978(param_1 + 0x1ac,temp_v1 + 0x20,0x10,temp_v0);
  }
  temp_v1 = FUN_002f7f00(param_1 + 0x68,0);
  if ((temp_v1 != 0) && (*(char *)(*(int *)(param_1 + 0x118) + 0x34) == '\x02')) {
    temp_v3 = **(unsigned int **)(param_1 + 0x344);
    FUN_00132932(&uStack_1c,temp_v2,&temp_v3);
    *(unsigned char *)(*(int *)(param_1 + 0x118) + 0x34) = 0;
    return romwright_piece_4_4(temp_v3,1);
  }
  return (unsigned long long)temp_v3 << 0x20;
}

} /* extern "C" */
