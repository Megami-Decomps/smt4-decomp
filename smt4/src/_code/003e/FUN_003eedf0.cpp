/* NON_MATCHING: generated initializer contains erased destructor registration and parent-object addresses outside its named storage views. */
#include "romwright_types.h"

extern "C" {

int _ZN10FloatStateC1Ev(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char LAB_00334e04; /* 0x334e04 */
extern unsigned int DAT_0044e288; /* 0x44e288 */
extern unsigned int DAT_0044e28c; /* 0x44e28c */
extern unsigned char DAT_004c5d20; /* 0x4c5d20 */
extern unsigned char DAT_004c6228; /* 0x4c6228 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: _ZN10FloatStateC1Ev. */


unsigned long long FUN_003eedf0(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *(unsigned int *)(param_3 + 8) = param_1;
  *(unsigned int *)(param_3 + 0xc) = param_2;
  DAT_0044e288 = 0;
  DAT_0044e28c = 0;
  _ZN10FloatStateC1Ev(&DAT_004c5d20);
  temp_v0 = _ZN10FloatStateC1Ev(&DAT_004c6228,&LAB_00334e04,0x100000);
  return romwright_piece_4_4(&LAB_00334e04,temp_v0 - 0x4a0);
}

} /* extern "C" */
