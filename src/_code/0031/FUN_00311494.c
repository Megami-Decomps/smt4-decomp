/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311494` (_code @ 0x311494, 0x15c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int DAT_0044e190; /* 0x44e190 */

extern int FUN_00262edc(unsigned int);
/* Supplied declaration required: FUN_0026ace0. */
/* Supplied declaration required: FUN_002890d0. */
/* Supplied declaration required: FUN_0029edfc. */
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002a0ea8. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002bdac0. */


void FUN_00311494(unsigned short param_1,unsigned char param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v0 = DAT_0044e190;
  temp_v5 = 0;
  temp_v4 = 0x79f;
  *(unsigned short *)(DAT_0044e190 + 0x2380) = param_1;
  *(unsigned char *)(temp_v0 + 0x413) = param_2;
  *(unsigned int *)(temp_v0 + 0x2370) = 0;
  *(unsigned int *)(temp_v0 + 0x2374) = 0;
  *(unsigned int *)(temp_v0 + 0x2378) = 0;
  *(unsigned int *)(temp_v0 + 0x237c) = 0;
  while( 1 ) {
    temp_v1 = FUN_00262edc(temp_v4 & 0xffff);
    if ((temp_v1 != 0) && (temp_v2 = temp_v4, FUN_002890d0(), temp_v2 != 0)) {
      temp_v1 = temp_v5 * 2;
      temp_v5 = temp_v5 + 1;
      *(short *)(temp_v0 + temp_v1 + 0x2370) = (short)temp_v4;
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x803) break;
    while (temp_v4 == 0) {
      temp_v4 = 1;
    }
  }
  FUN_002a0ea8(0xe);
  FUN_002b8b78(5);
  FUN_002bdac0(temp_v0 + 0x28,1,0);
  temp_v1 = FUN_0026ace0();
  if (temp_v5 >= temp_v1) {
    temp_v5 = FUN_0026ace0();
    FUN_0029fae8(temp_v0 + 0x230c,temp_v5 + 1,9,1,1,1);
    temp_v3 = 0x19;
  }
  else {
    temp_v3 = FUN_0026ace0();
    FUN_0029fae8(temp_v0 + 0x230c,temp_v3,9,1,1,1);
    FUN_0029edfc(temp_v0 + 0x230c,temp_v5);
    temp_v3 = 0x16;
  }
  *(unsigned int *)(temp_v0 + 0x408) = temp_v3;
  temp_v0 = DAT_0044e190;
  *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
  puVar5 = (unsigned int *)(temp_v0 + 0x400);
  temp_v3 = *puVar5;
  *puVar5 = 1;
  *(unsigned int *)(temp_v0 + 0x404) = temp_v3;
  return;
}
