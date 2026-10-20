/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001010f2` (_code @ 0x1010f2, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int digitValueInBase(char, int);
extern long long rt_lmul(int, int, unsigned int, unsigned int);
extern unsigned int *__aeabi_errno_addr(void);


unsigned long long FUN_001010f2(char *param_1,unsigned int *param_2,int param_3)

{
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned long long temp_v2;
  char temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  char *pcVar8;
  long long temp_v6;
  unsigned int temp_v7;
  
  temp_v3 = *param_1;
  pcVar8 = param_1 + 1;
  temp_v0 = 0;
  temp_v1 = 0;
  if (temp_v3 != '0') {
    if (param_3 == 0) {
      param_3 = 10;
    }
  }
  else {
    temp_v0 = 1;
    temp_v3 = *pcVar8;
    pcVar8 = param_1 + 2;
    if ((temp_v3 != 'x') && (temp_v3 != 'X')) {
      if (param_3 == 0) {
        param_3 = 8;
      }
    }
    else if ((param_3 == 0) || (param_3 == 0x10)) {
      temp_v0 = 0;
      temp_v3 = *pcVar8;
      param_3 = 0x10;
      pcVar8 = param_1 + 3;
    }
  }
  temp_v2 = 0;
  temp_v7 = 0;
  while( 1 ) {
    temp_v4 = digitValueInBase(temp_v3,param_3);
    if (temp_v4 < 0) break;
    temp_v0 = 1;
    temp_v7 = param_3 * temp_v7 + temp_v4;
    temp_v6 = rt_lmul(param_3,param_3 >> 0x1f,(int)temp_v2,(int)(temp_v2 >> 0x20));
    temp_v2 = temp_v6 + (unsigned long long)(temp_v7 >> 0x10);
    temp_v7 = temp_v7 & 0xffff;
    if (0xffffffffffff < temp_v2) {
      temp_v1 = 1;
    }
    temp_v3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  }
  if (param_2 != (unsigned int *)0x0) {
    if (temp_v0) {
      param_1 = pcVar8 + -1;
    }
    *param_2 = (unsigned int)param_1;
  }
  if (temp_v1) {
    puVar6 = (unsigned int *)__aeabi_errno_addr();
    *puVar6 = 2;
    temp_v7 = 0xffffffff;
    temp_v5 = temp_v7;
  }
  else {
    temp_v5 = (unsigned int)(temp_v2 >> 0x10);
    temp_v7 = (unsigned int)(temp_v2 << 0x10) | temp_v7;
  }
  return romwright_piece_4_4(temp_v5,temp_v7);
}

} /* extern "C" */
