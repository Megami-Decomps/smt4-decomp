/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00215904` (_code @ 0x215904, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} void_stack;

extern unsigned char DAT_0060fc08; /* 0x60fc08 */
extern unsigned int DAT_006105d4; /* 0x6105d4 */
extern unsigned int DAT_006105d8; /* 0x6105d8 */
extern unsigned int DAT_006105dc; /* 0x6105dc */
extern unsigned int DAT_006105e0; /* 0x6105e0 */


void FUN_00215904(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  do {
    temp_v1 = 0;
    temp_v0 = 0;
    *(unsigned int *)(temp_v3 * 4 + 0x60ffbc) = 0;
    do {
      temp_v2 = temp_v1 + 1;
      temp_v0 = temp_v0 + 2;
      *(unsigned int *)(&DAT_0060fc08 + temp_v1 * 4 + temp_v3 * 0x100 + 0x3cc) = 0;
      temp_v1 = temp_v1 + 2;
      *(unsigned int *)(&DAT_0060fc08 + temp_v2 * 4 + temp_v3 * 0x100 + 0x3cc) = 0;
    } while (temp_v0 < 0x40);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 6);
  DAT_006105dc = 0;
  DAT_006105d4 = 0;
  DAT_006105e0 = 0;
  DAT_006105d8 = 0;
  return;
}
