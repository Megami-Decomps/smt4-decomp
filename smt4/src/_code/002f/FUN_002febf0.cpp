/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002febf0` (_code @ 0x2febf0, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00246570(int *);
int FUN_0028dcb0(void);

/* stack frame of void: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short spE; /* 0xe: local_e */
    unsigned short sp10; /* 0x10: local_10 */
} void_stack;

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_00246570. */
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_00296cc8(unsigned int);
extern int FUN_002ae3c4(void);
extern unsigned int FUN_003a61b4(unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_002febf0(void)

{
/* irregular: irregular input(s): in_r3; 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int in_r3;
  int temp_v2;
  
  temp_v2 = ((in_r3 >> 0x10) & 0xfc00) << 0x10;
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_002ae3c4();
  if (temp_v1 == 9) {
    temp_v0 = FUN_003a61b4(temp_v0,0xffff,0xffff,0);
  }
  temp_v2 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v2 + 2)),(short)temp_v0);
  FUN_00246570(&temp_v2);
  FUN_0028dcb0();
  return 1;
}

} /* extern "C" */
