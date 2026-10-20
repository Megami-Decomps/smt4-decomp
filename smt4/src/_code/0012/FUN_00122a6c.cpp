/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122a6c` (_code @ 0x122a6c, 0x498 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_memset4(int, int, int);
int memClear(int, int);

extern int DAT_004655c0; /* 0x4655c0 */

/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: memClear. */


unsigned int FUN_00122a6c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  
  DAT_004655c0 = param_1;
  memClear(param_1,0x868);
  temp_v0 = DAT_004655c0;
  *(unsigned char *)(DAT_004655c0 + 0x18) = 0;
  *(unsigned char *)(temp_v0 + 0x19) = 0;
  *(unsigned int *)(temp_v0 + 0x10) = 4;
  *(unsigned int *)(temp_v0 + 0x14) = 4;
  *(unsigned char *)(temp_v0 + 0x1a) = 1;
  *(unsigned char *)(temp_v0 + 0x1b) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  *(unsigned char *)(temp_v0 + 0x30) = 0;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  *(unsigned char *)(temp_v0 + 0x3c) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0x901;
  *(unsigned int *)(temp_v0 + 0x38) = 0x405;
  temp_v10 = 0;
  temp_v11 = 0x3f800000;
  *(unsigned int *)(temp_v0 + 0x40) = 0;
  *(unsigned int *)(temp_v0 + 0x44) = 0;
  *(unsigned char *)(temp_v0 + 0x54) = 0;
  *(unsigned int *)(temp_v0 + 0x4c) = 0;
  *(unsigned int *)(temp_v0 + 0x50) = 0x3f800000;
  *(unsigned int *)(temp_v0 + 0x48) = 0;
  *(unsigned int *)(temp_v0 + 0x58) = 0;
  *(unsigned int *)(temp_v0 + 0x5c) = 0;
  *(unsigned int *)(temp_v0 + 0x68) = 0;
  *(unsigned char *)(temp_v0 + 0x104) = 0;
  *(unsigned char *)(temp_v0 + 0x107) = 0;
  *(unsigned int *)(temp_v0 + 0xf8) = 0;
  *(unsigned int *)(temp_v0 + 0x60) = 0;
  *(unsigned int *)(temp_v0 + 0x6c) = 0;
  *(unsigned char *)(temp_v0 + 0x105) = 0;
  *(unsigned char *)(temp_v0 + 0x108) = 0;
  *(unsigned int *)(temp_v0 + 0xfc) = 0;
  *(unsigned int *)(temp_v0 + 100) = 0;
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  *(unsigned char *)(temp_v0 + 0x106) = 0;
  *(unsigned char *)(temp_v0 + 0x109) = 0;
  *(unsigned int *)(temp_v0 + 0x100) = 0;
  memClear(temp_v0 + 0x74,0x80);
  temp_v0 = DAT_004655c0;
  temp_v1 = 0;
  temp_v2 = 0x10;
  *(unsigned int *)(DAT_004655c0 + 0xf4) = 0;
  do {
    temp_v3 = temp_v0 + temp_v1 * 0x10;
    temp_v2 = temp_v2 - 1;
    *(unsigned int *)(temp_v3 + 0x2a0) = temp_v10;
    *(unsigned int *)(temp_v3 + 0x2a4) = temp_v11;
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(temp_v3 + 0x29c) = temp_v10;
    *(unsigned int *)(temp_v3 + 0x298) = temp_v10;
    temp_v3 = 0;
  } while (temp_v2 != 0);
  do {
    temp_v1 = temp_v0 + temp_v3 * 0x10;
    temp_v6 = *(unsigned int *)(temp_v1 + 0x298);
    temp_v4 = 0;
    if ((temp_v6 & 0x7fffffff) != 0) {
      temp_v4 = ((temp_v6 & 0x7fffffff) >> 0x17) - 0x40;
    }
    temp_v5 = -1 < (int)temp_v4;
    if (temp_v5) {
      temp_v4 = ((temp_v6 & 0x7fffff) >> 7) | (temp_v4 << 0x10) | ((temp_v6 >> 0x1f) << 0x17);
    }
    temp_v7 = *(unsigned int *)(temp_v1 + 0x29c);
    if (!temp_v5) {
      temp_v4 = (temp_v6 >> 0x1f) << 0x17;
    }
    temp_v6 = 0;
    if ((temp_v7 & 0x7fffffff) != 0) {
      temp_v6 = ((temp_v7 & 0x7fffffff) >> 0x17) - 0x40;
    }
    temp_v5 = -1 < (int)temp_v6;
    if (temp_v5) {
      temp_v6 = ((temp_v7 & 0x7fffff) >> 7) | (temp_v6 << 0x10) | ((temp_v7 >> 0x1f) << 0x17);
    }
    temp_v8 = *(unsigned int *)(temp_v1 + 0x2a0);
    if (!temp_v5) {
      temp_v6 = (temp_v7 >> 0x1f) << 0x17;
    }
    temp_v7 = 0;
    if ((temp_v8 & 0x7fffffff) != 0) {
      temp_v7 = ((temp_v8 & 0x7fffffff) >> 0x17) - 0x40;
    }
    temp_v5 = -1 < (int)temp_v7;
    if (temp_v5) {
      temp_v7 = ((temp_v8 & 0x7fffff) >> 7) | (temp_v7 << 0x10) | ((temp_v8 >> 0x1f) << 0x17);
    }
    temp_v9 = *(unsigned int *)(temp_v1 + 0x2a4);
    if (!temp_v5) {
      temp_v7 = (temp_v8 >> 0x1f) << 0x17;
    }
    temp_v8 = 0;
    if ((temp_v9 & 0x7fffffff) != 0) {
      temp_v8 = ((temp_v9 & 0x7fffffff) >> 0x17) - 0x40;
    }
    temp_v5 = -1 < (int)temp_v8;
    if (temp_v5) {
      temp_v8 = ((temp_v9 & 0x7fffff) >> 7) | (temp_v8 << 0x10);
    }
    if (temp_v5) {
      temp_v8 = temp_v8 | ((temp_v9 >> 0x1f) << 0x17);
    }
    else {
      temp_v8 = (temp_v9 >> 0x1f) << 0x17;
    }
    temp_v1 = temp_v0 + temp_v3 * 0xc;
    temp_v3 = temp_v3 + 1;
    *(unsigned int *)(temp_v1 + 0x398) = (temp_v7 >> 0x10) | (temp_v8 << 8);
    *(unsigned int *)(temp_v1 + 0x39c) = ((temp_v6 & 0xffffff) >> 8) | (temp_v7 << 0x10);
    *(unsigned int *)(temp_v1 + 0x3a0) = temp_v4 | (temp_v6 << 0x18);
  } while (temp_v3 < 0x10);
  temp_v1 = 0;
  temp_v2 = 0x10;
  do {
    temp_v2 = temp_v2 - 1;
    temp_v3 = temp_v0 + temp_v1 * 0x18;
    temp_v1 = temp_v1 + 1;
    *(unsigned char *)(temp_v3 + 0x46d) = 0;
    *(unsigned int *)(temp_v3 + 0x468) = 0;
    *(unsigned int *)(temp_v3 + 0x45c) = 4;
    *(unsigned int *)(temp_v3 + 0x460) = 0x1406;
  } while (temp_v2 != 0);
  *(unsigned int *)(temp_v0 + 0x5d8) = 0;
  *(unsigned int *)(temp_v0 + 0x5dc) = 0;
  *(unsigned int *)(temp_v0 + 0x5e0) = 0;
  *(unsigned char *)(temp_v0 + 0x648) = 0;
  *(unsigned int *)(temp_v0 + 0x5e4) = 0;
  *(unsigned int *)(temp_v0 + 0x5e8) = 0;
  *(unsigned int *)(temp_v0 + 0x5ec) = 0;
  *(unsigned int *)(temp_v0 + 0x5f0) = 0;
  *(unsigned char *)(temp_v0 + 0x649) = 0;
  *(unsigned int *)(temp_v0 + 0x5f4) = 0x207;
  *(unsigned int *)(temp_v0 + 0x5f8) = temp_v10;
  *(unsigned char *)(temp_v0 + 0x64a) = 0;
  *(unsigned int *)(temp_v0 + 0x5fc) = 0x207;
  *(unsigned int *)(temp_v0 + 0x600) = 0;
  *(unsigned int *)(temp_v0 + 0x608) = 0x1e00;
  *(unsigned int *)(temp_v0 + 0x604) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x60c) = 0x1e00;
  *(unsigned int *)(temp_v0 + 0x610) = 0x1e00;
  *(unsigned char *)(temp_v0 + 0x64b) = 0;
  *(unsigned int *)(temp_v0 + 0x614) = 0x201;
  *(unsigned char *)(temp_v0 + 0x64f) = 0;
  *(unsigned int *)(temp_v0 + 0x650) = 0x201;
  *(unsigned char *)(temp_v0 + 0x64c) = 0;
  *(unsigned int *)(temp_v0 + 0x618) = 1;
  *(unsigned int *)(temp_v0 + 0x61c) = 1;
  *(unsigned int *)(temp_v0 + 0x620) = 0;
  *(unsigned int *)(temp_v0 + 0x624) = 0;
  *(unsigned char *)(temp_v0 + 0x64d) = 0;
  *(unsigned int *)(temp_v0 + 0x628) = 0x8006;
  *(unsigned int *)(temp_v0 + 0x62c) = 0x8006;
  *(unsigned int *)(temp_v0 + 0x640) = 0x1503;
  *(unsigned int *)(temp_v0 + 0x644) = 0x6030;
  *(unsigned int *)(temp_v0 + 0x63c) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x638) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x634) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x630) = temp_v10;
  *(unsigned char *)(temp_v0 + 0x658) = 1;
  *(unsigned int *)(temp_v0 + 0x65c) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x678) = 0;
  *(unsigned int *)(temp_v0 + 0x670) = temp_v11;
  *(unsigned int *)(temp_v0 + 0x67c) = 0xffffff;
  *(unsigned int *)(temp_v0 + 0x680) = 0xffff;
  *(unsigned int *)(temp_v0 + 0x674) = 0xffffff;
  *(unsigned char *)(temp_v0 + 0x657) = 1;
  *(unsigned char *)(temp_v0 + 0x656) = 1;
  *(unsigned char *)(temp_v0 + 0x655) = 1;
  *(unsigned char *)(temp_v0 + 0x654) = 1;
  *(unsigned int *)(temp_v0 + 0x66c) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x668) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x664) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x660) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x684) = 0;
  *(unsigned char *)(temp_v0 + 0x690) = 0;
  *(unsigned char *)(temp_v0 + 0x691) = 0;
  *(unsigned char *)(temp_v0 + 0x692) = 0;
  *(unsigned char *)(temp_v0 + 0x693) = 0;
  *(unsigned int *)(temp_v0 + 0x698) = 0;
  *(unsigned int *)(temp_v0 + 0x69c) = 0;
  *(unsigned int *)(temp_v0 + 0x68c) = 3;
  *(unsigned int *)(temp_v0 + 0x688) = 0;
  *(unsigned int *)(temp_v0 + 0x6a0) = 0;
  *(unsigned int *)(temp_v0 + 0x6e8) = 0;
  *(unsigned int *)(temp_v0 + 0x6e4) = 0;
  *(unsigned int *)(temp_v0 + 0x72c) = 0;
  *(unsigned int *)(temp_v0 + 0x730) = 0;
  *(unsigned int *)(temp_v0 + 0x734) = 0;
  *(unsigned int *)(temp_v0 + 0x738) = 0;
  *(unsigned int *)(temp_v0 + 0x73c) = 0;
  *(unsigned int *)(temp_v0 + 0x740) = 0;
  *(unsigned int *)(temp_v0 + 0x744) = 0;
  *(unsigned int *)(temp_v0 + 0x748) = 0;
  *(unsigned int *)(temp_v0 + 0x74c) = 0;
  *(unsigned int *)(temp_v0 + 0x750) = 0;
  *(unsigned int *)(temp_v0 + 0x754) = 0;
  *(unsigned int *)(temp_v0 + 0x758) = 0;
  *(unsigned int *)(temp_v0 + 0x75c) = 0;
  *(unsigned int *)(temp_v0 + 0x760) = 0;
  *(unsigned int *)(temp_v0 + 0x764) = 0;
  *(unsigned int *)(temp_v0 + 0x768) = 0;
  *(unsigned int *)(temp_v0 + 0x6a4) = 0;
  *(unsigned int *)(temp_v0 + 0x6a8) = 0;
  *(unsigned int *)(temp_v0 + 0x6ac) = 0;
  *(unsigned int *)(temp_v0 + 0x6b0) = 0;
  *(unsigned int *)(temp_v0 + 0x6b4) = 0;
  *(unsigned int *)(temp_v0 + 0x6b8) = 0;
  *(unsigned int *)(temp_v0 + 0x6bc) = 0;
  *(unsigned int *)(temp_v0 + 0x6c0) = 0;
  *(unsigned int *)(temp_v0 + 0x6c4) = 0;
  *(unsigned int *)(temp_v0 + 0x6c8) = 0;
  *(unsigned int *)(temp_v0 + 0x6cc) = 0;
  *(unsigned int *)(temp_v0 + 0x6d0) = 0;
  *(unsigned int *)(temp_v0 + 0x6d4) = 0;
  *(unsigned int *)(temp_v0 + 0x6d8) = 0;
  *(unsigned int *)(temp_v0 + 0x6dc) = 0;
  *(unsigned int *)(temp_v0 + 0x6e0) = 0;
  *(unsigned int *)(temp_v0 + 0x6ec) = 0;
  *(unsigned int *)(temp_v0 + 0x6f0) = 0;
  *(unsigned int *)(temp_v0 + 0x6f4) = 0;
  *(unsigned int *)(temp_v0 + 0x6f8) = 0;
  *(unsigned int *)(temp_v0 + 0x6fc) = 0;
  *(unsigned int *)(temp_v0 + 0x700) = 0;
  *(unsigned int *)(temp_v0 + 0x704) = 0;
  *(unsigned int *)(temp_v0 + 0x708) = 0;
  *(unsigned int *)(temp_v0 + 0x70c) = 0;
  *(unsigned int *)(temp_v0 + 0x710) = 0;
  *(unsigned int *)(temp_v0 + 0x714) = 0;
  *(unsigned int *)(temp_v0 + 0x718) = 0;
  *(unsigned int *)(temp_v0 + 0x71c) = 0;
  *(unsigned int *)(temp_v0 + 0x720) = 0;
  *(unsigned int *)(temp_v0 + 0x724) = 0;
  *(unsigned int *)(temp_v0 + 0x728) = 0;
  *(unsigned int *)(temp_v0 + 0x770) = 0;
  *(unsigned char *)(temp_v0 + 0x81c) = 0;
  *(unsigned int *)(temp_v0 + 0x820) = 0;
  *(unsigned int *)(temp_v0 + 0x824) = 0;
  __aeabi_memset4(temp_v0 + 0x828,0x40,0xff);
  return 0;
}

} /* extern "C" */
