/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f269c` (_code @ 0x3f269c, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char DAT_0042065c; /* 0x42065c */
extern unsigned int DAT_00433dd0; /* 0x433dd0 */
extern unsigned int DAT_00433dd4; /* 0x433dd4 */
extern unsigned char *DAT_0047e54c; /* 0x47e54c */
extern unsigned int DAT_0047e550; /* 0x47e550 */
extern unsigned char DAT_0047e554; /* 0x47e554 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_00127e7c(unsigned char *);


unsigned long long FUN_003f269c(unsigned int param_1,unsigned int param_2,int param_3)

{
  int temp_v0;
  
  *(unsigned int *)(param_3 + 8) = param_1;
  *(unsigned int *)(param_3 + 0xc) = param_2;
  DAT_00433dd0 = 0;
  DAT_00433dd4 = 0;
  DAT_0047e54c = &DAT_0042065c;
  DAT_0047e550 = 0;
  temp_v0 = FUN_00127e7c(&DAT_0047e554);
  *(unsigned char *)(temp_v0 + 0x128e8) = 0;
  *(unsigned char *)(temp_v0 + 0x128e9) = 2;
  *(unsigned char *)(temp_v0 + 0x128ea) = 0xff;
  *(unsigned char *)(temp_v0 + 0x128eb) = 0xff;
  *(unsigned int *)(temp_v0 + 0x128ec) = 0;
  *(unsigned char *)(temp_v0 + 0x128f0) = 0;
  *(unsigned char *)(temp_v0 + 0x128f1) = 2;
  *(unsigned char *)(temp_v0 + 0x128f2) = 0xff;
  *(unsigned char *)(temp_v0 + 0x128f3) = 0xff;
  *(unsigned int *)(temp_v0 + 0x128f4) = 0;
  return romwright_piece_4_4(0x34df94,temp_v0 - 8);
}
