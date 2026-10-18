/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025cec4` (_code @ 0x25cec4, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_002b47cc(unsigned short);
extern unsigned short *FUN_002b66ec(void);


unsigned int FUN_0025cec4(void)

{
  unsigned short *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned short *)FUN_002b66ec();
  temp_v0 = FUN_002b47cc(*puVar1);
  switch(*(unsigned int *)(temp_v0 + 0x54) >> 0x14) {
  case 0:
    return 0x3ef;
  case 1:
    return 0x3f0;
  case 2:
    return 1000;
  case 3:
    return 0x3e9;
  case 4:
    return 0x3ea;
  case 5:
    return 0x3eb;
  case 6:
    return 0x3ed;
  case 7:
    return 0x3ee;
  default:
    return 0;
  case 0x11:
    return 0x3ec;
  }
}
