/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100bfe` (_code @ 0x100bfe, 0x46 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_001008c8(unsigned int *, char, unsigned int *);


unsigned long long FUN_00100bfe(char *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  char *pcVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int uStack_18;
  
  temp_v2 = 0;
  temp_v3 = 0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return 0;
  }
  if (param_2 != 0) {
    temp_v1 = 0;
    uStack_18 = param_4;
    while (temp_v1 < param_2) {
      pcVar1 = param_1 + temp_v1;
      temp_v1 = temp_v1 + 1;
      temp_v0 = FUN_001008c8((unsigned int *)&uStack_18,*pcVar1,(unsigned int *)&temp_v2);
      if (temp_v0 == -1) break;
      if (temp_v0 == 1) {
        return romwright_piece_4_4(temp_v2,temp_v1);
      }
    }
  }
  return romwright_piece_4_4(temp_v2,0xffffffff);
}
