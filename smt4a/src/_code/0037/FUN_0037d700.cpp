/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d700` (_code @ 0x37d700, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdSequenceRequest(int, int *, int);
int jyoucyuGetTableEntry(int);

/* stack frame of void: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp6; /* 0x6: local_6 */
    unsigned short sp8; /* 0x8: local_8 */
} void_stack;

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: asdSequenceRequest. */
/* Supplied declaration required: jyoucyuGetTableEntry. */
extern unsigned short scrGetArg(unsigned int);


unsigned int FUN_0037d700(void)

{
/* irregular: irregular input(s): in_r3; 3 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int in_r3;
  int temp_v1;
  
  temp_v1 = in_r3;
  jyoucyuGetTableEntry(0);
  temp_v0 = scrGetArg(0);
  temp_v1 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v1 + 2)),temp_v0);
  temp_v0 = scrGetArg(1);
  temp_v1 = romwright_piece_2_2(temp_v0,(unsigned short)temp_v1);
  asdSequenceRequest(0xe,&temp_v1,4);
  return 1;
}

} /* extern "C" */
