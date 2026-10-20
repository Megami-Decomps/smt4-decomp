/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4aa4` (_code @ 0x2a4aa4, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e59f8(int, int, int);

extern unsigned char DAT_0057f698; /* 0x57f698 */

/* Supplied declaration required: FUN_002e59f8. */


void FUN_002a4aa4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f698 + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x27e8c) = 0;
  *(unsigned int *)(temp_v0 + 0x27e90) = 0;
  *(unsigned short *)(temp_v0 + 0x27e94) = 0;
  *(unsigned char *)(temp_v0 + 0x27e96) = 0;
  *(unsigned char *)(temp_v0 + 0x27e97) = 0;
  FUN_002e59f8(temp_v0 + 0x90,temp_v0 + 0x27e98,0xe);
  *(unsigned short *)(temp_v0 + 0x27e9e) = 0x1a4;
  *(unsigned short *)(temp_v0 + 0x27ea0) = 0x21c;
  *(unsigned short *)(temp_v0 + 0x27ea2) = 0x294;
  *(unsigned char *)(temp_v0 + 0x27ea6) = 0;
  *(unsigned char *)(temp_v0 + 0x27ea7) = 0;
  FUN_002e59f8(temp_v0 + 0xdc,temp_v0 + 0x27ea8,0x12);
  *(unsigned char *)(temp_v0 + 0x27eba) = 0;
  *(unsigned char *)(temp_v0 + 0x27ebb) = 0;
  return;
}

} /* extern "C" */
