/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00233170` (_code @ 0x233170, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001cd24c(unsigned int *);

extern unsigned int *DAT_00580ca0; /* 0x580ca0 */

/* Supplied declaration required: FUN_001cd24c. */


void FUN_00233170(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  
  puVar1 = DAT_00580ca0;
  puVar2 = DAT_00580ca0 + 0xd;
  *DAT_00580ca0 = 0;
  *(unsigned char *)(puVar1 + 1) = 0;
  *(unsigned short *)((int)puVar1 + 6) = 0;
  *(unsigned short *)(puVar1 + 2) = 0;
  *(unsigned short *)((int)puVar1 + 10) = 0;
  *(unsigned short *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  *(unsigned char *)(puVar1 + 5) = 0;
  *(unsigned char *)(puVar1 + 7) = 0;
  *(unsigned char *)(puVar1 + 9) = 0;
  *(unsigned char *)(puVar1 + 0xb) = 0;
  FUN_001cd24c(puVar2);
  puVar1 = DAT_00580ca0;
  DAT_00580ca0[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(unsigned char *)(puVar1 + 0x1a) = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x20] = 0;
  temp_v1 = 0;
  do {
    puVar1 = DAT_00580ca0;
    temp_v0 = temp_v1 + 1;
    *(unsigned char *)(DAT_00580ca0 + temp_v1 * 0xf + 0x24) = 0;
    *(unsigned char *)((int)puVar1 + temp_v1 * 0x3c + 0x91) = 0;
    puVar1[temp_v1 * 0xf + 0x25] = 0;
    puVar1[temp_v1 * 0xf + 0x26] = 0;
    puVar1[temp_v1 * 0xf + 0x27] = 0;
    puVar1[temp_v1 * 0xf + 0x28] = 0x42b40000;
    *(unsigned short *)(puVar1 + temp_v1 * 0xf + 0x29) = 0;
    *(unsigned short *)((int)puVar1 + temp_v1 * 0x3c + 0xa6) = 0;
    puVar1[temp_v1 * 0xf + 0x2a] = 0;
    puVar1[temp_v1 * 0xf + 0x2b] = 0;
    *(unsigned short *)(puVar1 + temp_v1 * 0xf + 0x2c) = 0;
    *(unsigned short *)((int)puVar1 + temp_v1 * 0x3c + 0xb2) = 0;
    puVar1[temp_v1 * 0xf + 0x2e] = 0;
    puVar1[temp_v1 * 0xf + 0x2f] = 0;
    puVar1[temp_v1 * 0xf + 0x30] = 0;
    puVar1[temp_v1 * 0xf + 0x31] = 0;
    puVar1[temp_v1 * 0xf + 0x32] = 0;
    temp_v1 = temp_v0;
  } while (temp_v0 < 0x23);
  temp_v1 = 0;
  do {
    puVar1 = DAT_00580ca0;
    temp_v0 = temp_v1 + 1;
    *(unsigned char *)(DAT_00580ca0 + temp_v1 * 6 + 0x231) = 0;
    *(unsigned short *)((int)puVar1 + temp_v1 * 0x18 + 0x8c6) = 0;
    *(unsigned short *)(puVar1 + temp_v1 * 6 + 0x232) = 0;
    puVar1[temp_v1 * 6 + 0x233] = 0;
    puVar1[temp_v1 * 6 + 0x234] = 0;
    *(unsigned char *)(puVar1 + temp_v1 * 6 + 0x235) = 0;
    *(unsigned short *)((int)puVar1 + temp_v1 * 0x18 + 0x8d6) = 0;
    *(unsigned char *)(puVar1 + temp_v1 * 6 + 0x236) = 0;
    puVar1 = DAT_00580ca0;
    temp_v1 = temp_v0;
  } while (temp_v0 < 10);
  *(unsigned char *)(DAT_00580ca0 + 0x26d) = 0;
  *(unsigned short *)((int)puVar1 + 0x9b6) = 0;
  puVar1[0x26e] = 0;
  puVar1[0x26f] = 0;
  puVar1[0x270] = 0;
  puVar1[0x271] = 0;
  puVar1[0x272] = 0;
  puVar1[0x273] = 0;
  *(unsigned char *)(puVar1 + 0x274) = 0;
  *(unsigned short *)((int)puVar1 + 0x9d2) = 0;
  *(unsigned char *)(puVar1 + 0x275) = 0;
  puVar1[0x276] = 0;
  puVar1[0x277] = 0;
  return;
}

} /* extern "C" */
