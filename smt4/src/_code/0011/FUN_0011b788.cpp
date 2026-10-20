/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b788` (_code @ 0x11b788, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bb150(int, int);
int FUN_002c4040(int);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002c4040. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_0011b788(int param_1)

{
/* irregular: 5 native warning(s); review required */
  long long temp_v0;
  unsigned long long temp_v1;
  long long temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12;
  
  if (*(int *)(param_1 + 0xc) == 6) {
    nn_os_CriticalSection_Enter(param_1);
    *(unsigned int *)(param_1 + 0xc) = 5;
    nn_os_CriticalSection_Leave(param_1);
    FUN_002c4040(param_1 + 0x20);
    temp_v4 = temp_v6;
    while( 1 ) {
      if (*(int *)(param_1 + 0xc) == 3) {
        software_interrupt(0x28);
        temp_v1 = (((unsigned long long)
                  (unsigned int)(((int)temp_v4 >> 0x1f) * -0x452cb512 +
                        (int)((unsigned long long)temp_v4 * 0xbad34aee >> 0x20)) << 0x20) |
                (((unsigned long long)temp_v4 * 0xbad34aee) & 0xffffffff)) + 9 + romwright_piece_4_4(temp_v4 * 3,2);
        temp_v8 = (unsigned int)(temp_v1 >> 0x20);
        temp_v3 = (int)temp_v8 >> 0x1f;
        temp_v2 = (unsigned long long)temp_v8 * 0xe353f7cf +
                romwright_piece_4_4(temp_v3 * -0x1cac0831,(int)((temp_v1 & 0xffffffff) * 0xe353f7cf >> 0x20));
        temp_v0 = (temp_v1 & 0xffffffff) * 0x20c49ba5;
        temp_v11 = (unsigned int)((unsigned long long)temp_v2 >> 0x20);
        temp_v10 = (unsigned int)((unsigned long long)temp_v8 * 0x20c49ba5);
        temp_v4 = (int)((unsigned long long)temp_v0 >> 0x20) + (unsigned int)romwright_carry_4((unsigned int)temp_v2,(unsigned int)temp_v0);
        temp_v5 = temp_v4 + temp_v11;
        temp_v9 = ((int)temp_v11 >> 0x1f) + (unsigned int)romwright_carry_4(temp_v4,temp_v11) +
                temp_v3 * 0x20c49ba5 + (int)((unsigned long long)temp_v8 * 0x20c49ba5 >> 0x20) +
                (unsigned int)romwright_carry_4(temp_v5,temp_v10);
        temp_v5 = ((temp_v5 + temp_v10) >> 7) | (temp_v9 * 0x2000000);
        temp_v8 = -temp_v3 + temp_v5;
        temp_v4 = temp_v8 - *(unsigned int *)(param_1 + 0x150);
        temp_v3 = ((temp_v9 >> 7) + (unsigned int)romwright_carry_4(-temp_v3,temp_v5)) -
                (*(int *)(param_1 + 0x154) + (unsigned int)(temp_v8 < *(unsigned int *)(param_1 + 0x150)));
        temp_v5 = *(unsigned int *)(param_1 + 0x138);
        *(unsigned int *)(param_1 + 0x144) =
             *(int *)(param_1 + 0x144) + temp_v3 + (unsigned int)romwright_carry_4(*(unsigned int *)(param_1 + 0x140),temp_v4);
        *(unsigned int *)(param_1 + 0x138) = temp_v4 + temp_v5;
        *(unsigned int *)(param_1 + 0x13c) = temp_v3 + *(int *)(param_1 + 0x13c) + (unsigned int)romwright_carry_4(temp_v4,temp_v5);
        *(unsigned int *)(param_1 + 0x140) = *(unsigned int *)(param_1 + 0x140) + temp_v4;
        return 1;
      }
      temp_v3 = *(int *)(param_1 + 0xc);
      temp_v12 = temp_v3 == 7;
      if (!temp_v12) {
        temp_v3 = *(int *)(param_1 + 0xc);
      }
      if (temp_v12 || temp_v3 == 1) break;
      FUN_002bb150(500000,0);
      temp_v4 = temp_v7;
    }
  }
  return 0;
}

} /* extern "C" */
