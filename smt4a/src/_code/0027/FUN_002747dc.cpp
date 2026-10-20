/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002747dc` (_code @ 0x2747dc, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern int DAT_0058103c; /* 0x58103c */


void FUN_002747dc(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0058103c;
  temp_v1 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v1 = temp_v0 + temp_v1 * 0x194;
    *(unsigned char *)(temp_v1 + 0x1dc) = 0;
    *(unsigned int *)(temp_v1 + 0x1e0) = 0;
    *(unsigned int *)(temp_v1 + 0x1e4) = 0;
    *(unsigned short *)(temp_v1 + 0x1e8) = 0;
    *(unsigned short *)(temp_v1 + 0x204) = 0;
    *(unsigned short *)(temp_v1 + 0x206) = 0;
    *(unsigned short *)(temp_v1 + 0x208) = 0;
    *(unsigned int *)(temp_v1 + 0x210) = 0x442f0000;
    *(unsigned int *)(temp_v1 + 0x214) = 0x43960000;
    *(unsigned int *)(temp_v1 + 0x218) = 0x451c4000;
    *(unsigned char *)(temp_v1 + 0x21c) = 0;
    *(unsigned int *)(temp_v1 + 0x1ec) = 0;
    *(unsigned int *)(temp_v1 + 0x36c) = 0;
    *(unsigned int *)(temp_v1 + 0x1f0) = 0;
    *(unsigned int *)(temp_v1 + 500) = 0xffffffff;
    *(unsigned int *)(temp_v1 + 0x1f8) = 0;
    *(unsigned int *)(temp_v1 + 0x20c) = 0;
    *(unsigned int *)(temp_v1 + 0x254) = 0x41c80000;
    *(unsigned int *)(temp_v1 + 600) = 0x41c80000;
    *(unsigned int *)(temp_v1 + 0x25c) = 0xffffffff;
    *(unsigned int *)(temp_v1 + 0x268) = 0;
    *(unsigned char *)(temp_v1 + 0x21d) = 0;
    *(unsigned int *)(temp_v1 + 0x238) = 0x448fc000;
    *(unsigned char *)(temp_v1 + 0x21e) = 0;
    *(unsigned int *)(temp_v1 + 0x220) = 0;
    *(unsigned int *)(temp_v1 + 0x224) = 0;
    *(unsigned int *)(temp_v1 + 0x23c) = 0x43160000;
    *(unsigned int *)(temp_v1 + 0x240) = 0;
    *(unsigned char *)(temp_v1 + 0x228) = 0;
    *(unsigned int *)(temp_v1 + 0x250) = 0;
    *(unsigned int *)(temp_v1 + 0x26c) = 0;
    *(unsigned int *)(temp_v1 + 0x270) = 0;
    *(unsigned int *)(temp_v1 + 0x274) = 0;
    *(unsigned int *)(temp_v1 + 0x278) = 0;
    *(unsigned int *)(temp_v1 + 0x27c) = 0;
    *(unsigned int *)(temp_v1 + 0x280) = 0;
    *(unsigned int *)(temp_v1 + 0x284) = 0;
    *(unsigned int *)(temp_v1 + 0x288) = 0;
    *(unsigned int *)(temp_v1 + 0x28c) = 0;
    *(unsigned int *)(temp_v1 + 0x290) = 0;
    *(unsigned int *)(temp_v1 + 0x294) = 0;
    *(unsigned int *)(temp_v1 + 0x298) = 0;
    *(unsigned int *)(temp_v1 + 0x360) = 0;
    *(unsigned int *)(temp_v1 + 0x364) = 0;
    *(unsigned int *)(temp_v1 + 0x368) = 0;
    *(unsigned int *)(temp_v1 + 0x244) = 0x448fc000;
    *(unsigned int *)(temp_v1 + 0x248) = 0x43160000;
    *(unsigned int *)(temp_v1 + 0x24c) = *(unsigned int *)(temp_v1 + 0x240);
    temp_v1 = temp_v2;
  } while (temp_v2 < 0x80);
  *(unsigned char *)(temp_v0 + 0x48) = 0;
  *(unsigned char *)(temp_v0 + 0x88) = 0;
  *(unsigned int *)(temp_v0 + 0x60) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0xa4) = 0;
  *(unsigned int *)(temp_v0 + 0x58) = 0;
  *(unsigned int *)(temp_v0 + 0x1d8) = 0;
  *(unsigned int *)(temp_v0 + 0xa8) = 0;
  *(unsigned int *)(temp_v0 + 0xac) = 0;
  *(unsigned int *)(temp_v0 + 100) = 0;
  *(unsigned int *)(temp_v0 + 0x5c) = 0;
  *(unsigned int *)(temp_v0 + 0x78) = 0;
  *(unsigned int *)(temp_v0 + 0xc0) = 0x42480000;
  *(unsigned int *)(temp_v0 + 0xc4) = 0x42480000;
  *(unsigned int *)(temp_v0 + 200) = 0xffffffff;
  *(unsigned char *)(temp_v0 + 0x89) = 0;
  *(unsigned int *)(temp_v0 + 0xbc) = 0;
  *(unsigned int *)(temp_v0 + 0xb0) = *(unsigned int *)(temp_v0 + 0xa4);
  *(unsigned int *)(temp_v0 + 0xb4) = *(unsigned int *)(temp_v0 + 0xa8);
  *(unsigned int *)(temp_v0 + 0xb8) = 0;
  return;
}

} /* extern "C" */
