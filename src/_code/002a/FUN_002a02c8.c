/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a02c8` (_code @ 0x2a02c8, 0x168 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_0029edfc. */
extern int FUN_0029f0f4(int);
extern int FUN_0029f248(int);
extern int FUN_0029f260(void);
/* Supplied declaration required: FUN_0029fae8. */
extern int FUN_002a0fac(void);
/* Supplied declaration required: FUN_002b88c4. */
/* Supplied declaration required: FUN_002b9008. */


void FUN_002a02c8(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = DAT_0043dd68;
  temp_v2 = FUN_002a0fac();
  temp_v3 = temp_v0 + 0x4e8;
  temp_v4 = FUN_0029f260();
  temp_v6 = 3;
  temp_v5 = FUN_0029f248(temp_v3);
  if (((*(char *)(temp_v2 + 0x2c) != '\0') && (temp_v6 = 6, *(char *)(temp_v2 + 0x2d) != '\0')) &&
     (temp_v6 = 0xc, *(char *)(temp_v2 + 0x2e) != '\0')) {
    temp_v6 = 0xe;
  }
  FUN_0029fae8(temp_v3,temp_v6,8,1,0,1);
  FUN_0029edfc(temp_v3,temp_v4 + temp_v5);
  if (param_1 != 0) {
    temp_v2 = 0;
    do {
      *(unsigned short *)(temp_v0 + temp_v2 * 2 + 0x438) = 0xffff;
      FUN_002b9008();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
    *(unsigned short *)(temp_v0 + 0x476) = 0xffff;
    *(unsigned short *)(temp_v0 + 0x472) = 0xffff;
    *(unsigned short *)(temp_v0 + 0x474) = 0xffff;
    FUN_002b9008();
    FUN_002b9008();
    FUN_002b9008();
    temp_v2 = 0;
    do {
      temp_v4 = FUN_0029f0f4(temp_v3);
      if (temp_v4 <= temp_v2) break;
      temp_v1 = FUN_002b88c4(0x24,temp_v2 + 0xa9);
      temp_v4 = temp_v2 * 2;
      temp_v2 = temp_v2 + 1;
      *(unsigned short *)(temp_v0 + temp_v4 + 0x438) = temp_v1;
    } while (temp_v2 < 8);
    temp_v1 = FUN_002b88c4(0x24,0x1f0);
    *(unsigned short *)(temp_v0 + 0x476) = temp_v1;
    temp_v1 = FUN_002b88c4(0x24,0x1ee);
    *(unsigned short *)(temp_v0 + 0x472) = temp_v1;
    temp_v1 = FUN_002b88c4(0x24,0x1ef);
    *(unsigned short *)(temp_v0 + 0x474) = temp_v1;
  }
  return;
}
