/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2880` (_code @ 0x1d2880, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __set_errno(int);
int FUN_001d3288(void);
int SUB84(double, int);

/* stack frame of param_2: 3 slot(s), 24 byte(s) */
typedef struct {
    unsigned long long sp28; /* 0x28: local_28 */
    unsigned long long sp30; /* 0x30: local_30 */
    unsigned long long sp38; /* 0x38: local_38 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: SUB84 (SUBPIECE). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: __set_errno. */
/* Supplied declaration required: FUN_001d3288. */
extern double FUN_001d32a0(unsigned int, unsigned int, unsigned int);


void FUN_001d2880(double *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_d0, in_d9; 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned long long in_d0;
  unsigned int temp_v1;
  double in_d9;
  double temp_v2;
  
  temp_v2 = *param_1;
  temp_v1 = (unsigned int)((unsigned long long)temp_v2 >> 0x20);
  temp_v0 = (~(temp_v1 >> 0x14) & 0x7ff) != 0;
  if (temp_v0) {
    in_d9 = 0.0;
  }
  if (temp_v0 && temp_v2 != 0.0) {
    temp_v2 = (double)FUN_001d32a0(SUB84(temp_v2,0),temp_v1,param_2);
    if (((unsigned int)((unsigned long long)temp_v2 >> 0x34) & 0x7ff) == 0x7ff) {
      __set_errno(2);
      temp_v2 = (double)((unsigned long long)
                          (((unsigned int)((unsigned long long)temp_v2 >> 0x20) & 0x80000000) | 0x7ff00000) << 0x20)
      ;
    }
    else if (temp_v2 == in_d9) {
      __set_errno(2);
      temp_v1 = (unsigned int)((unsigned long long)temp_v2 >> 0x20);
      FUN_001d3288();
      temp_v2 = (double)romwright_piece_4_4(((unsigned int)((unsigned long long)in_d0 >> 0x20) & 0x7fffffff) |
                                  (temp_v1 & 0x80000000),(int)in_d0);
    }
  }
  *param_1 = temp_v2;
  return;
}

} /* extern "C" */
