/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e32a4` (_code @ 0x2e32a4, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern romwright_code *DAT_005c4c0c; /* 0x5c4c0c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001006f4. */
extern int *FUN_0010077c(void);


unsigned long long FUN_002e32a4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned char uStack00000000;
  int uStack_c;
  unsigned int uStack_8;
  unsigned int uStack_4;
  
  if (DAT_005c4c0c != (romwright_code *)0x0) {
    uStack_c = param_2;
    uStack_8 = param_3;
    uStack_4 = param_4;
    if (param_1 < 4) {
      (*DAT_005c4c0c)(param_1,0);
    }
    else {
      if (&uStack00000000 != (unsigned char *)0x30) {
        piVar1 = (int *)FUN_0010077c();
      }
      else {
        piVar1 = (int *)0x0;
      }
      FUN_001006f4(piVar1,param_1,&uStack_c);
      temp_v0 = (**(romwright_code **)(*piVar1 + 8))(piVar1);
      (*DAT_005c4c0c)(param_1,temp_v0);
      (**(romwright_code **)*piVar1)(piVar1);
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return romwright_piece_4_4(param_2,param_1);
}
