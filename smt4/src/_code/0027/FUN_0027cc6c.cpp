/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027cc6c` (_code @ 0x27cc6c, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *DAT_0044cd88; /* 0x44cd88 */


void FUN_0027cc6c(void)

{
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  puVar1 = DAT_0044cd88;
  *DAT_0044cd88 = 0;
  *(unsigned short *)(puVar1 + 1) = 0;
  *(unsigned short *)((int)puVar1 + 6) = 0;
  *(unsigned short *)(puVar1 + 2) = 0;
  *(unsigned short *)((int)puVar1 + 10) = 0;
  puVar1[4] = 0;
  temp_v2 = 0;
  do {
    puVar1 = DAT_0044cd88;
    temp_v0 = temp_v2 + 1;
    *(unsigned char *)(DAT_0044cd88 + temp_v2 * 0x13 + 0x16) = 0;
    puVar1[temp_v2 * 0x13 + 0x17] = 0;
    puVar1[temp_v2 * 0x13 + 0x18] = 0;
    puVar1[temp_v2 * 0x13 + 0x19] = 0;
    puVar1[temp_v2 * 0x13 + 0x1a] = 0;
    puVar1[temp_v2 * 0x13 + 0x1b] = 0;
    puVar1[temp_v2 * 0x13 + 0x1c] = 0;
    puVar1[temp_v2 * 0x13 + 0x1d] = 0;
    *(unsigned char *)(puVar1 + temp_v2 * 0x13 + 0x1e) = 0;
    *(unsigned short *)((int)puVar1 + temp_v2 * 0x4c + 0x7a) = 0;
    *(unsigned short *)(puVar1 + temp_v2 * 0x13 + 0x1f) = 0;
    puVar1[temp_v2 * 0x13 + 0x20] = 0;
    *(unsigned char *)(puVar1 + temp_v2 * 0x13 + 0x21) = 0;
    puVar1[temp_v2 * 0x13 + 0x22] = 0;
    *(unsigned char *)(puVar1 + temp_v2 * 0x13 + 0x23) = 0;
    puVar1[temp_v2 * 0x13 + 0x24] = 0;
    *(unsigned char *)(puVar1 + temp_v2 * 0x13 + 0x25) = 0;
    puVar1[temp_v2 * 0x13 + 0x26] = 0xffffffff;
    puVar1 = DAT_0044cd88;
    temp_v2 = temp_v0;
  } while (temp_v0 < 0x20);
  temp_v0 = 8;
  temp_v2 = 0;
  do {
    temp_v0 = temp_v0 - 1;
    puVar1[temp_v2 * 2 + 6] = 0;
    puVar1[temp_v2 * 2 + 7] = 0;
    temp_v2 = temp_v2 + 1;
    temp_v1 = 0;
  } while (temp_v0 != 0);
  do {
    puVar1 = DAT_0044cd88;
    temp_v2 = temp_v1 + 1;
    *(unsigned char *)(DAT_0044cd88 + temp_v1 * 0x13 + 0x276) = 0;
    puVar1[temp_v1 * 0x13 + 0x277] = 0;
    puVar1[temp_v1 * 0x13 + 0x278] = 0;
    puVar1[temp_v1 * 0x13 + 0x279] = 0;
    puVar1[temp_v1 * 0x13 + 0x27a] = 0;
    puVar1[temp_v1 * 0x13 + 0x27b] = 0;
    puVar1[temp_v1 * 0x13 + 0x27c] = 0;
    puVar1[temp_v1 * 0x13 + 0x27d] = 0;
    *(unsigned char *)(puVar1 + temp_v1 * 0x13 + 0x27e) = 0;
    *(unsigned short *)(puVar1 + temp_v1 * 0x13 + 0x27f) = 0;
    puVar1[temp_v1 * 0x13 + 0x280] = 0;
    *(unsigned char *)(puVar1 + temp_v1 * 0x13 + 0x281) = 0;
    puVar1[temp_v1 * 0x13 + 0x282] = 0;
    *(unsigned char *)(puVar1 + temp_v1 * 0x13 + 0x283) = 0;
    puVar1[temp_v1 * 0x13 + 0x284] = 0;
    *(unsigned char *)(puVar1 + temp_v1 * 0x13 + 0x285) = 0;
    puVar1[temp_v1 * 0x13 + 0x286] = 0xffffffff;
    temp_v1 = temp_v2;
  } while (temp_v2 < 3);
  return;
}

} /* extern "C" */
