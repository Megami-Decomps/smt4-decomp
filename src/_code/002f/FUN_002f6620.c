/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6620` (_code @ 0x2f6620, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_0026b0d0. */
/* Supplied declaration required: FUN_0029edfc. */
/* Supplied declaration required: FUN_0029f0f4. */
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002c4450. */


void FUN_002f6620(unsigned int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  
  temp_v0 = DAT_0044e190;
  *(unsigned int *)(DAT_0044e190 + 0x544) = param_1;
  temp_v1 = temp_v0 + 0x4d4;
  *(unsigned int *)(temp_v0 + 0x540) = param_2;
  temp_v2 = FUN_0029f0f4();
  FUN_0029fae8(temp_v1,temp_v2 + 1,9,1,0,1);
  temp_v2 = FUN_0029f0f4(temp_v1);
  FUN_0029edfc(temp_v1,temp_v2 - 1);
  *(unsigned char *)(temp_v0 + 0x410) = 1;
  temp_v0 = DAT_0044e190;
  temp_v1 = 0;
  if (*(char *)(DAT_0044e190 + 0x480) != '\0') {
    do {
      FUN_002b9008();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)(unsigned int)*(unsigned char *)(temp_v0 + 0x480));
  }
  *(unsigned char *)(temp_v0 + 0x480) = 0;
  FUN_002c4450(temp_v0 + 0x42c,0x29,0xffffffff);
  temp_v0 = DAT_0044e190;
  *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
  puVar4 = (unsigned int *)(temp_v0 + 0x400);
  temp_v3 = *puVar4;
  *puVar4 = 0xb;
  *(unsigned int *)(temp_v0 + 0x404) = temp_v3;
  FUN_0026b0d0();
  return;
}
