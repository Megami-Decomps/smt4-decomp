/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a69c0` (_code @ 0x3a69c0, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0057f590; /* 0x57f590 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184b80. */
extern unsigned int *FUN_001ab888(void);
extern unsigned int FUN_00236038(unsigned int);


unsigned int FUN_003a69c0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v1 = FUN_00236038(0);
  temp_v0 = DAT_0057f590;
  *(unsigned char *)(DAT_0057f590 + 0x8e) = 1;
  *(unsigned char *)(temp_v0 + 0x8d) = 1;
  puVar3 = (unsigned int *)FUN_001ab888();
  temp_v2 = *puVar3;
  *(unsigned int *)(temp_v0 + 0x7c) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x88) = temp_v2;
  *(unsigned char *)(temp_v0 + 0x91) = 0;
  *(unsigned char *)(temp_v0 + 0x92) = 0;
  *(unsigned char *)(temp_v0 + 0x17d) = 0;
  *(unsigned char *)(temp_v0 + 0x16d) = 0;
  FUN_0014e188(temp_v0 + 0xb00,8,0xffffffff,temp_v0 + 0x194,0xb);
  FUN_00184b80(temp_v0 + 0xb00,0);
  FUN_001846d0(temp_v0 + 0xb00,6);
  temp_v0 = DAT_0057f590;
  *(unsigned char *)(DAT_0057f590 + 0x93) = 0;
  *(unsigned int *)(temp_v0 + 0x80) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x84) = temp_v1;
  *(unsigned char *)(temp_v0 + 0x92) = 1;
  *(unsigned char *)(temp_v0 + 0x8c) = 0;
  return 1;
}
