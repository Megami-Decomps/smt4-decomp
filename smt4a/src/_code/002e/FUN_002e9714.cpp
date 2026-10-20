/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9714` (_code @ 0x2e9714, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00103924(unsigned int, unsigned short *, unsigned int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern unsigned char LAB_002e9764; /* 0x2e9764 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00103924. */
extern int FUN_002e783c(unsigned short *);
extern unsigned short *FUN_002e92dc(unsigned short *, unsigned char *);


long long FUN_002e9714(unsigned int param_1,unsigned short *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = 0;
  do {
    puVar2 = (unsigned short *)FUN_002e92dc(param_2,&LAB_002e9764);
    if (puVar2 == (unsigned short *)0x0) {
      temp_v0 = 1;
      temp_v1 = FUN_002e783c(param_2);
      puVar2 = param_2 + temp_v1;
      if (param_2 == puVar2) break;
    }
    if (param_2 == puVar2) {
      return (unsigned long long)param_1 << 0x20;
    }
    *puVar2 = 0;
    temp_v2 = param_1;
    FUN_00103924(param_1,param_2,param_3);
    if (!temp_v0) {
      *puVar2 = 0x3b;
    }
    if (temp_v2 == 0) {
      return (unsigned long long)param_1 << 0x20;
    }
    param_2 = puVar2 + 1;
  } while (!temp_v0);
  return romwright_piece_4_4(param_1,1);
}

} /* extern "C" */
