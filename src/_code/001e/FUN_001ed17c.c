/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed17c` (_code @ 0x1ed17c, 0x100 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_8: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_8_stack;

extern int FUN_001c2b70(); /* 0x1c2b70 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002861f8. */
/* Supplied declaration required: FUN_002915e4. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002c4b30. */


romwright_code * FUN_001ed17c(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,
                   unsigned int param_5,romwright_code param_6,unsigned short param_7,unsigned int param_8)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  romwright_code *pcVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  
  pcVar1 = FUN_001c2b70;
  FUN_002861f8(FUN_001c2b70,0,0,0,0,0x330,3,0,0);
  if (pcVar1 != (romwright_code *)0x0) {
    FUN_002c4b30();
    FUN_002bcf58(pcVar1 + 100,param_2,0x134);
    temp_v0 = *(unsigned int *)(param_2 + 0x124);
    temp_v1 = *(unsigned int *)(param_2 + 0x128);
    *(unsigned int *)(pcVar1 + 0x54) = *(unsigned int *)(param_2 + 0x120);
    *(unsigned int *)(pcVar1 + 0x58) = temp_v0;
    *(unsigned int *)(pcVar1 + 0x5c) = temp_v1;
    FUN_002bcf58(pcVar1 + 0x198,param_3,0xb0);
    *(unsigned int *)(pcVar1 + 0x248) = param_4;
    *(unsigned int *)(pcVar1 + 0x24c) = param_8;
    temp_v0 = VectorSignedToFloat(*(unsigned int *)(pcVar1 + 0x1e4),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(pcVar1 + 4) = temp_v0;
    *(unsigned int *)(pcVar1 + 0x250) = param_1;
    pcVar1[600] = param_6;
    *(unsigned int *)(pcVar1 + 0x260) = 0xffffffff;
    *(unsigned int *)(pcVar1 + 0x25c) = 0xffffffff;
    FUN_002915e4(pcVar1 + 0x198,pcVar1 + 0x28,pcVar1 + 0x30,pcVar1 + 0xc,pcVar1 + 0x18);
    *(unsigned int *)(pcVar1 + 0x254) = param_5;
    *(unsigned short *)(pcVar1 + 0x32e) = param_7;
    *(unsigned short *)(pcVar1 + 0x32c) = param_7;
  }
  return pcVar1;
}
