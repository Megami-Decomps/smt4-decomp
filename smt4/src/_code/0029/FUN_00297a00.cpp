/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00297a00` (_code @ 0x297a00, 0x170 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern int g_mapIf; /* 0x447a78 */


void FUN_00297a00(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = g_mapIf;
  temp_v1 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v1 = temp_v0 + temp_v1 * 0x194;
    *(unsigned char *)(temp_v1 + 0x1d0) = 0;
    *(unsigned int *)(temp_v1 + 0x1d4) = 0;
    *(unsigned int *)(temp_v1 + 0x1d8) = 0;
    *(unsigned short *)(temp_v1 + 0x1dc) = 0;
    *(unsigned short *)(temp_v1 + 0x1f8) = 0;
    *(unsigned short *)(temp_v1 + 0x1fa) = 0;
    *(unsigned short *)(temp_v1 + 0x1fc) = 0;
    *(unsigned int *)(temp_v1 + 0x204) = 0x442f0000;
    *(unsigned int *)(temp_v1 + 0x208) = 0x43960000;
    *(unsigned int *)(temp_v1 + 0x20c) = 0x451c4000;
    *(unsigned char *)(temp_v1 + 0x210) = 0;
    *(unsigned int *)(temp_v1 + 0x1e0) = 0;
    *(unsigned int *)(temp_v1 + 0x360) = 0;
    *(unsigned int *)(temp_v1 + 0x1e4) = 0;
    *(unsigned int *)(temp_v1 + 0x1e8) = 0xffffffff;
    *(unsigned int *)(temp_v1 + 0x1ec) = 0;
    *(unsigned int *)(temp_v1 + 0x200) = 0;
    *(unsigned int *)(temp_v1 + 0x248) = 0x41c80000;
    *(unsigned int *)(temp_v1 + 0x24c) = 0x41c80000;
    *(unsigned int *)(temp_v1 + 0x250) = 0xffffffff;
    *(unsigned int *)(temp_v1 + 0x25c) = 0;
    *(unsigned char *)(temp_v1 + 0x211) = 0;
    *(unsigned int *)(temp_v1 + 0x22c) = 0x448fc000;
    *(unsigned char *)(temp_v1 + 0x212) = 0;
    *(unsigned int *)(temp_v1 + 0x214) = 0;
    *(unsigned int *)(temp_v1 + 0x218) = 0;
    *(unsigned int *)(temp_v1 + 0x230) = 0x43160000;
    *(unsigned int *)(temp_v1 + 0x234) = 0;
    *(unsigned char *)(temp_v1 + 0x21c) = 0;
    *(unsigned int *)(temp_v1 + 0x244) = 0;
    *(unsigned int *)(temp_v1 + 0x260) = 0;
    *(unsigned int *)(temp_v1 + 0x264) = 0;
    *(unsigned int *)(temp_v1 + 0x268) = 0;
    *(unsigned int *)(temp_v1 + 0x26c) = 0;
    *(unsigned int *)(temp_v1 + 0x270) = 0;
    *(unsigned int *)(temp_v1 + 0x274) = 0;
    *(unsigned int *)(temp_v1 + 0x278) = 0;
    *(unsigned int *)(temp_v1 + 0x27c) = 0;
    *(unsigned int *)(temp_v1 + 0x280) = 0;
    *(unsigned int *)(temp_v1 + 0x284) = 0;
    *(unsigned int *)(temp_v1 + 0x288) = 0;
    *(unsigned int *)(temp_v1 + 0x28c) = 0;
    *(unsigned int *)(temp_v1 + 0x354) = 0;
    *(unsigned int *)(temp_v1 + 0x358) = 0;
    *(unsigned int *)(temp_v1 + 0x35c) = 0;
    *(unsigned int *)(temp_v1 + 0x238) = 0x448fc000;
    *(unsigned int *)(temp_v1 + 0x23c) = 0x43160000;
    *(unsigned int *)(temp_v1 + 0x240) = *(unsigned int *)(temp_v1 + 0x234);
    temp_v1 = temp_v2;
  } while (temp_v2 < 0x80);
  *(unsigned char *)(temp_v0 + 0x3c) = 0;
  *(unsigned char *)(temp_v0 + 0x7c) = 0;
  *(unsigned int *)(temp_v0 + 0x54) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x98) = 0;
  *(unsigned int *)(temp_v0 + 0x4c) = 0;
  *(unsigned int *)(temp_v0 + 0x1cc) = 0;
  *(unsigned int *)(temp_v0 + 0x9c) = 0;
  *(unsigned int *)(temp_v0 + 0xa0) = 0;
  *(unsigned int *)(temp_v0 + 0x58) = 0;
  *(unsigned int *)(temp_v0 + 0x50) = 0;
  *(unsigned int *)(temp_v0 + 0x6c) = 0;
  *(unsigned int *)(temp_v0 + 0xb4) = 0x42480000;
  *(unsigned int *)(temp_v0 + 0xb8) = 0x42480000;
  *(unsigned int *)(temp_v0 + 0xbc) = 0xffffffff;
  *(unsigned char *)(temp_v0 + 0x7d) = 0;
  *(unsigned int *)(temp_v0 + 0xb0) = 0;
  *(unsigned int *)(temp_v0 + 0xa4) = *(unsigned int *)(temp_v0 + 0x98);
  *(unsigned int *)(temp_v0 + 0xa8) = *(unsigned int *)(temp_v0 + 0x9c);
  *(unsigned int *)(temp_v0 + 0xac) = 0;
  return;
}

} /* extern "C" */
