/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6294` (_code @ 0x2f6294, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp6; /* 0x6: local_6 */
    unsigned short sp8; /* 0x8: local_8 */
} void_stack;

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
extern unsigned short FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_002c583c. */
/* Supplied declaration required: FUN_002c59b8. */


unsigned int FUN_002f6294(void)

{
/* irregular: irregular input(s): in_r3; 3 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int in_r3;
  int temp_v1;
  
  temp_v1 = in_r3;
  FUN_002c583c(0);
  temp_v0 = FUN_00296f60(0);
  temp_v1 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v1 + 2)),temp_v0);
  temp_v0 = FUN_00296f60(1);
  temp_v1 = romwright_piece_2_2(temp_v0,(unsigned short)temp_v1);
  FUN_002c59b8(0xe,&temp_v1,4);
  return 1;
}
