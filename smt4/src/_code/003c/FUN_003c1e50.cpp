/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c1e50` (_code @ 0x3c1e50, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c0c74(void);

/* Supplied declaration required: FUN_002c0c74. */
extern int FUN_002c0cc4(unsigned int);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


void FUN_003c1e50(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v5 = FUN_002c0cec(9,0);
  FUN_002c0c74();
  temp_v6 = FUN_002c0cc4(temp_v5);
  temp_v0 = *(unsigned char *)(temp_v6 + 0xc);
  temp_v1 = *(unsigned char *)(temp_v6 + 0xb);
  temp_v2 = *(unsigned char *)(temp_v6 + 10);
  temp_v3 = *(unsigned char *)(temp_v6 + 9);
  temp_v4 = *(unsigned char *)(temp_v6 + 0xd);
  *param_1 = *(unsigned int *)(temp_v6 + 5);
  param_1[1] = ((unsigned int)temp_v2 << 0x10) | (unsigned int)temp_v3;
  param_1[2] = (unsigned int)temp_v1 | ((unsigned int)temp_v0 << 0x10) | ((unsigned int)temp_v4 << 0x18);
  param_1[3] = 0;
  return;
}

} /* extern "C" */
