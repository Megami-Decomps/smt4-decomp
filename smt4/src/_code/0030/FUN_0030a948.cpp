/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a948` (_code @ 0x30a948, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c564c(int);
int FUN_002c57c8(int, int *, int);

/* stack frame of void: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp6; /* 0x6: local_6 */
    unsigned short sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_0049fc18; /* 0x49fc18 */
extern unsigned int DAT_0049fc1c; /* 0x49fc1c */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
extern int FUN_002872d4(void);
/* Supplied declaration required: FUN_002c564c. */
/* Supplied declaration required: FUN_002c57c8. */


unsigned int FUN_0030a948(void)

{
/* irregular: irregular input(s): in_r3; 3 native warning(s); review required */
  int temp_v0;
  unsigned int in_r3;
  int temp_v1;
  
  temp_v1 = in_r3;
  FUN_002c564c(0);
  temp_v0 = FUN_002872d4();
  if (temp_v0 != 0) {
    temp_v1 = romwright_piece_2_2((short)DAT_0049fc1c,(short)DAT_0049fc18 - 200);
    FUN_002c57c8(0xe,&temp_v1,4);
  }
  return 1;
}

} /* extern "C" */
