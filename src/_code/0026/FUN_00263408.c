/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00263408` (_code @ 0x263408, 0x118 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern int FUN_001fe590(); /* 0x1fe590 */
extern int FUN_001ff3a8(); /* 0x1ff3a8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00296ef8. */
/* Supplied declaration required: FUN_00296f18. */
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c4460. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */


char * FUN_00263408(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                   unsigned char param_5)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002c4b84(0x100,0x100,0,0x18c,1);
  pcVar2 = (char *)0x0;
  if (temp_v0 != 0) {
    pcVar2 = "AsdListBox";
    FUN_002c5978("AsdListBox",param_2,0,0,FUN_001fe590,FUN_001ff3a8,temp_v0);
    temp_v1 = FUN_002bf41c(param_1);
    if (temp_v1 != 0) {
      FUN_002c4460(param_1,pcVar2);
    }
    *(unsigned char *)(temp_v0 + 0x3c) = param_5;
    *(unsigned int *)(temp_v0 + 0x50) = 0x43000000;
    temp_v3 = VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v0 + 0x54) = 0x43000000;
    *(unsigned int *)(temp_v0 + 0x48) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x4c) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x5c) = 0xd;
    *(unsigned int *)(temp_v0 + 0x58) = 10;
    *(unsigned int *)(temp_v0 + 0x38) = *(unsigned int *)(temp_v0 + 0x38) | 4;
    *(unsigned int *)(temp_v0 + 0x68) = 10;
    FUN_00296f18(temp_v0 + 0xc,10,0);
    FUN_00296ef8(temp_v0 + 0xc,6,5,0x20,0x20);
    *(unsigned int *)(temp_v0 + 0x34) = 0;
  }
  return pcVar2;
}
