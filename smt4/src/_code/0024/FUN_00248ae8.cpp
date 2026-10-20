/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00248ae8` (_code @ 0x248ae8, 0x1d4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdModelCommandBlockRelease(void);
int FUN_002b703c(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_titleScene; /* 0x44ea00 */
extern int DAT_004729e0; /* 0x4729e0 */
extern int DAT_004729e4; /* 0x4729e4 */

/* Supplied declaration required: asdModelCommandBlockRelease. */
/* Supplied declaration required: FUN_002b703c. */


void FUN_00248ae8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  FUN_002b703c();
  temp_v0 = DAT_004729e0;
  if (param_1 != 0) {
    *(unsigned int *)(DAT_004729e0 + DAT_004729e4 * 4) = 1;
    *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0111;
    DAT_004729e4 = DAT_004729e4 + 2;
    *(unsigned int *)(temp_v0 + DAT_004729e4 * 4) = 1;
    *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0110;
    DAT_004729e4 = DAT_004729e4 + 2;
  }
  temp_v0 = DAT_004729e0;
  temp_v3 = 0;
  temp_v5 = *(unsigned int *)(g_titleScene + *(int *)(g_titleScene + 0x128c) * 4 + 0x1294) & 0xf00;
  if (temp_v5 != 0) {
    temp_v3 = 0xf;
  }
  *(unsigned int *)(DAT_004729e0 + DAT_004729e4 * 4) = temp_v3;
  temp_v1 = 0;
  if (temp_v5 != 0) {
    temp_v1 = temp_v3;
  }
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0112;
  DAT_004729e4 = DAT_004729e4 + 2;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4) = temp_v1;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0113;
  DAT_004729e4 = DAT_004729e4 + 2;
  temp_v4 = *(unsigned int *)(g_titleScene + *(int *)(g_titleScene + 0x124c) * 4 + 0x1254);
  temp_v2 = *(unsigned int *)(g_titleScene + *(int *)(g_titleScene + 0x120c) * 4 + 0x1214);
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4) =
       (unsigned int)((-(temp_v2 & 1) & temp_v2 & 0x30) != 0 && (temp_v2 & 0xf0000000) != 0) |
       ((unsigned int)(temp_v5 != 0 || (temp_v4 & 0x1000) != 0) << 1);
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0114;
  DAT_004729e4 = DAT_004729e4 + 2;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4) =
       (unsigned int)((temp_v2 & -(temp_v2 & 1) & 0xff00) != 0 &&
             *(int *)(g_titleScene + *(int *)(g_titleScene + 0x122c) * 4 + 0x1234) != 0) |
       ((unsigned int)((temp_v4 & 0x1000) != 0) << 1);
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0115;
  DAT_004729e4 = DAT_004729e4 + 2;
  asdModelCommandBlockRelease();
  return;
}

} /* extern "C" */
