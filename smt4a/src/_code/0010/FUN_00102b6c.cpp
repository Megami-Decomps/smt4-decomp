/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102b6c` (_code @ 0x102b6c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned short sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int libcLocaleGetCategory(unsigned int, unsigned int);
extern unsigned int FUN_002e3cb8(unsigned char **, unsigned char, unsigned int);


unsigned long long FUN_00102b6c(int param_1,unsigned char *param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char *temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_18;
  
  temp_v3 = param_2;
  temp_v4 = param_3;
  uStack_18 = param_4;
  temp_v4 = libcLocaleGetCategory(0,2);
  temp_v2 = 0;
  do {
    do {
      if ((param_1 != 0) && (temp_v1 = temp_v2, param_3 <= temp_v2)) {
        return romwright_piece_4_4(temp_v3,temp_v1);
      }
      temp_v0 = *param_2;
      param_2 = param_2 + 1;
      temp_v1 = FUN_002e3cb8(&temp_v3,temp_v0,temp_v4);
      if (temp_v1 == 0xffffffff) {
        return romwright_piece_4_4(temp_v3,temp_v1);
      }
    } while (temp_v1 == 0xfffffffe);
    if (param_1 != 0) {
      *(short *)(param_1 + temp_v2 * 2) = (short)(int)temp_v3;
    }
    temp_v1 = temp_v2;
    temp_v2 = temp_v2 + 1;
  } while ((short)(int)temp_v3 != 0);
  return romwright_piece_4_4(temp_v3,temp_v1);
}

} /* extern "C" */
