/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2dfc` (_code @ 0x2f2dfc, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineSockAddrCopy(int, int);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp10; /* 0x10: local_10 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: onlineSockAddrCopy. */


unsigned int FUN_002f2dfc(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned short temp_v1;
  unsigned short uStack_e;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (*(unsigned int *)&temp_v1) = romwright_piece_2_2((short)((unsigned int)param_4 >> 0x10),
                         (*(unsigned short *)(param_2 + 6) << 8) | (*(unsigned short *)(param_2 + 6) >> 8));
    temp_v0 = (**(romwright_code **)(*piVar1 + 8))(piVar1,&temp_v1);
    if (temp_v0 != 0) {
      *(unsigned short *)(param_2 + 6) = (temp_v1 << 8) | (temp_v1 >> 8);
      *(unsigned char *)(param_1 + 4) = 1;
      onlineSockAddrCopy(param_1 + 8,param_2);
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
