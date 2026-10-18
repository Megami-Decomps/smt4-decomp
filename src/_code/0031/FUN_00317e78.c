/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00317e78` (_code @ 0x317e78, 0x194 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_001e16bc; /* 0x1e16bc */
extern unsigned char LAB_001f65ac; /* 0x1f65ac */
extern unsigned char LAB_002d0520; /* 0x2d0520 */
extern unsigned char LAB_002d06dc; /* 0x2d06dc */
extern unsigned char LAB_002dca98; /* 0x2dca98 */
extern unsigned char LAB_002e4b08; /* 0x2e4b08 */
extern unsigned char LAB_002e4b20; /* 0x2e4b20 */
extern unsigned char LAB_00300b8c; /* 0x300b8c */

/* Supplied declaration required: FUN_0027f3dc. */
extern int *FUN_002b47f4(unsigned int);
/* Supplied declaration required: FUN_002b7bca. */
extern unsigned int FUN_002c0c74(unsigned int);
extern unsigned int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


void FUN_00317e78(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  
  temp_v0 = FUN_002c0cec(5,1);
  temp_v1 = FUN_002c0cc4();
  temp_v0 = FUN_002c0c74(temp_v0);
  FUN_002b7bca(temp_v1,temp_v0,4,&LAB_002d0520);
  temp_v0 = FUN_002c0cec(5,2);
  temp_v1 = FUN_002c0cc4();
  temp_v0 = FUN_002c0c74(temp_v0);
  FUN_002b7bca(temp_v1,temp_v0,4,&LAB_00300b8c);
  temp_v0 = FUN_002c0cec(5,3);
  temp_v1 = FUN_002c0cc4();
  temp_v0 = FUN_002c0c74(temp_v0);
  FUN_002b7bca(temp_v1,temp_v0,4,&LAB_002d06dc);
  temp_v0 = FUN_002c0cec(5,4);
  temp_v1 = FUN_002c0cc4();
  temp_v0 = FUN_002c0c74(temp_v0);
  FUN_002b7bca(temp_v1,temp_v0,0x1c,&LAB_001f65ac);
  temp_v0 = FUN_002c0cec(5,7);
  temp_v1 = FUN_002c0cc4();
  temp_v0 = FUN_002c0c74(temp_v0);
  FUN_002b7bca(temp_v1,temp_v0,4,&LAB_002e4b08);
  temp_v0 = FUN_002c0cec(5,8);
  temp_v1 = FUN_002c0cc4();
  temp_v0 = FUN_002c0c74(temp_v0);
  FUN_002b7bca(temp_v1,temp_v0,0x14,&LAB_002e4b20);
  temp_v0 = FUN_002c0cec(6,1);
  temp_v1 = FUN_002c0cc4();
  temp_v0 = FUN_002c0c74(temp_v0);
  FUN_002b7bca(temp_v1,temp_v0,4,&LAB_002dca98);
  piVar3 = (int *)FUN_002b47f4(0x1f);
  FUN_0027f3dc(piVar3 + 1,(*piVar3 - 4U) >> 3,8,&LAB_001e16bc);
  return;
}
