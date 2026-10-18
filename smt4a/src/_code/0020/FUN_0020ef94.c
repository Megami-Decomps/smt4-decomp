/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ef94` (_code @ 0x20ef94, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_STORAGE_s__________0058127c_17_1_DEFINED
#define ROMWRIGHT_STORAGE_s__________0058127c_17_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__________0058127c_17_1 {
    char whole[17];
    unsigned char u1[17];
    signed char s1[17];
};
typedef char romwright_storage_s__________0058127c_17_1_size_check[(sizeof(union romwright_storage_s__________0058127c_17_1) == 17) ? 1 : -1];
typedef char romwright_storage_s__________0058127c_17_1_u1_width_check[(sizeof(((union romwright_storage_s__________0058127c_17_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__________0058127c_17_1_s1_width_check[(sizeof(((union romwright_storage_s__________0058127c_17_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__________0058127c_17_1 s__________0058127c; /* 0x58127c */
extern unsigned int *DAT_00581280; /* 0x581280 */


void FUN_0020ef94(void)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  puVar2 = DAT_00581280;
  DAT_00581280[2] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(unsigned char *)(puVar2 + 0x3c3) = 0;
  *(unsigned char *)(puVar2 + 0x3d0) = 0;
  puVar2[0x3c4] = 0;
  puVar2[0x3d3] = 0;
  puVar2[0x3d4] = 0xffffffff;
  temp_v4 = 0;
  do {
    temp_v2 = temp_v4 + 1;
    *(unsigned char *)((int)puVar2 + temp_v4 * 0x3c + 0xd) = 0;
    *(unsigned char *)((int)puVar2 + temp_v4 * 0x3c + 0xe) = 0;
    *(unsigned short *)(puVar2 + temp_v4 * 0xf + 5) = 0xffff;
    *(unsigned short *)((int)puVar2 + temp_v4 * 0x3c + 0x16) = 0;
    puVar2[temp_v4 * 0xf + 6] = 0x40800000;
    puVar2[temp_v4 * 0xf + 7] = 0xc1100000;
    puVar2[temp_v4 * 0xf + 8] = 0;
    puVar2[temp_v4 * 0xf + 9] = 0;
    puVar2[temp_v4 * 0xf + 10] = 0x42b40000;
    puVar2[temp_v4 * 0xf + 0xb] = 0;
    puVar2[temp_v4 * 0xf + 0xc] = 0;
    puVar2[temp_v4 * 0xf + 0xf] = 0;
    *(unsigned short *)((int)puVar2 + temp_v4 * 0x3c + 0x12) = 0xffff;
    puVar2[temp_v4 * 0xf + 0x10] = 0;
    *(unsigned short *)(puVar2 + temp_v4 * 0xf + 0xd) = 0;
    *(unsigned short *)((int)puVar2 + temp_v4 * 0x3c + 0x36) = 0;
    puVar2[temp_v4 * 0xf + 0x11] = 0;
    *(unsigned char *)(puVar2 + temp_v4 * 0xf + 0xe) = 0;
    *(unsigned char *)(puVar2 + temp_v4 * 0xf + 3) = 0;
    temp_v0 = (*(unsigned int *)&s__________0058127c.u1[0]);
    temp_v4 = temp_v2;
  } while (temp_v2 < 0x40);
  temp_v4 = 0;
  do {
    temp_v3 = 0;
    temp_v2 = 0;
    temp_v1 = temp_v0 + temp_v4 * 0x284;
    do {
      *(unsigned int *)(temp_v1 + temp_v3 * 0x28) = 0;
      temp_v2 = temp_v2 + 2;
      *(unsigned int *)(temp_v1 + (temp_v3 + 1) * 0x28) = 0;
      temp_v3 = temp_v3 + 2;
    } while (temp_v2 < 0x10);
    temp_v4 = temp_v4 + 1;
    *(unsigned int *)(temp_v1 + 0x280) = 0;
  } while (temp_v4 < 0x10);
  temp_v4 = 0;
  *(unsigned int *)(temp_v0 + 0x2840) = 0;
  temp_v2 = 0x20;
  do {
    temp_v2 = temp_v2 - 1;
    temp_v1 = temp_v0 + temp_v4 * 0x30;
    *(unsigned char *)(temp_v1 + 0x2844) = 0;
    temp_v4 = temp_v4 + 1;
    *(unsigned int *)(temp_v1 + 0x2870) = 0xffffffff;
  } while (temp_v2 != 0);
  return;
}
