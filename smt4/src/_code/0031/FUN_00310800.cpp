/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310800` (_code @ 0x310800, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int pairSetFirstResetSecond(int, int);
int FUN_002bd954(int, int, unsigned int, int, int);
int FUN_002bee58(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern unsigned int gameDataBlocksGetCounter(void);
/* Supplied declaration required: pairSetFirstResetSecond. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */


unsigned int FUN_00310800(unsigned int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  
  temp_v2 = *(int *)(param_2 + 8);
  *(unsigned int *)(temp_v2 + 0x84) = 10;
  *(unsigned int *)(temp_v2 + 0x8c) = 1;
  temp_v0 = gameDataBlocksGetCounter();
  *(short *)(temp_v2 + 0x90) = (short)temp_v0;
  *(short *)(temp_v2 + 0x92) = (short)temp_v0;
  temp_v0 = VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = temp_v2 + 0x984;
  *(unsigned int *)(temp_v2 + 0x94) = temp_v0;
  *(unsigned char *)(temp_v2 + 0x88) = 1;
  FUN_002bd954(temp_v1,0xe,0xffffffff,temp_v2 + 0xa4,0xb);
  pairSetFirstResetSecond(temp_v1,0x11);
  FUN_002bee58(temp_v1,6);
  return 1;
}

} /* extern "C" */
