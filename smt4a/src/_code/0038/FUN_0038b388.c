/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b388` (_code @ 0x38b388, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short spE; /* 0xe: local_e */
    unsigned short sp10; /* 0x10: local_10 */
} void_stack;

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
extern int FUN_0019271c(void);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
extern unsigned int FUN_0049c848(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0049cc10. */


unsigned int FUN_0038b388(void)

{
/* irregular: irregular input(s): in_r3; 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int in_r3;
  int temp_v2;
  
  temp_v2 = ((in_r3 >> 0x10) & 0xfc00) << 0x10;
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_0019271c();
  if (temp_v1 == 9) {
    temp_v0 = FUN_0049c848(temp_v0,0xffff,0xffff,0);
  }
  temp_v2 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v2 + 2)),(short)temp_v0);
  FUN_0049cc10(&temp_v2);
  FUN_003283ac();
  return 1;
}
