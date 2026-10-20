/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00125a94` (_code @ 0x125a94, 0x2f6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_00125a94(unsigned int param_1,unsigned char *param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v1 = ~((param_1 >> 0x18) + ((param_1 >> 8) & 0xff00) + (param_1 & 0xff00) * 0x100 +
           param_1 * 0x1000000);
  for (; (param_3 != 0 && (((unsigned int)param_2 & 3) != 0)); param_2 = param_2 + 1) {
    temp_v1 = *(unsigned int *)(((unsigned int)*param_2 ^ (temp_v1 >> 0x18)) * 4 + 0x545f1c) ^ (temp_v1 << 8);
    param_3 = param_3 - 1;
  }
  puVar2 = (unsigned int *)(param_2 + -4);
  for (; param_3 >= 0x20; param_3 = param_3 - 0x20) {
    temp_v1 = puVar2[1] ^ temp_v1;
    temp_v1 = puVar2[2] ^
            *(unsigned int *)((temp_v1 & 0xff) * 4 + 0x545f1c) ^
            *(unsigned int *)(((temp_v1 & 0xffff) >> 8) * 4 + 0x54631c) ^
            *(unsigned int *)(((temp_v1 & 0xffffff) >> 0x10) * 4 + 0x54671c) ^
            *(unsigned int *)((temp_v1 >> 0x18) * 4 + 0x546b1c);
    temp_v1 = puVar2[3] ^
            *(unsigned int *)((temp_v1 & 0xff) * 4 + 0x545f1c) ^
            *(unsigned int *)(((temp_v1 & 0xffff) >> 8) * 4 + 0x54631c) ^
            *(unsigned int *)(((temp_v1 & 0xffffff) >> 0x10) * 4 + 0x54671c) ^
            *(unsigned int *)((temp_v1 >> 0x18) * 4 + 0x546b1c);
    temp_v1 = puVar2[4] ^
            *(unsigned int *)((temp_v1 & 0xff) * 4 + 0x545f1c) ^
            *(unsigned int *)(((temp_v1 & 0xffff) >> 8) * 4 + 0x54631c) ^
            *(unsigned int *)(((temp_v1 & 0xffffff) >> 0x10) * 4 + 0x54671c) ^
            *(unsigned int *)((temp_v1 >> 0x18) * 4 + 0x546b1c);
    temp_v1 = puVar2[5] ^
            *(unsigned int *)((temp_v1 & 0xff) * 4 + 0x545f1c) ^
            *(unsigned int *)(((temp_v1 & 0xffff) >> 8) * 4 + 0x54631c) ^
            *(unsigned int *)(((temp_v1 & 0xffffff) >> 0x10) * 4 + 0x54671c) ^
            *(unsigned int *)((temp_v1 >> 0x18) * 4 + 0x546b1c);
    temp_v1 = puVar2[6] ^
            *(unsigned int *)((temp_v1 & 0xff) * 4 + 0x545f1c) ^
            *(unsigned int *)(((temp_v1 & 0xffff) >> 8) * 4 + 0x54631c) ^
            *(unsigned int *)(((temp_v1 & 0xffffff) >> 0x10) * 4 + 0x54671c) ^
            *(unsigned int *)((temp_v1 >> 0x18) * 4 + 0x546b1c);
    temp_v1 = puVar2[7] ^
            *(unsigned int *)((temp_v1 & 0xff) * 4 + 0x545f1c) ^
            *(unsigned int *)(((temp_v1 & 0xffff) >> 8) * 4 + 0x54631c) ^
            *(unsigned int *)(((temp_v1 & 0xffffff) >> 0x10) * 4 + 0x54671c) ^
            *(unsigned int *)((temp_v1 >> 0x18) * 4 + 0x546b1c);
    puVar2 = puVar2 + 8;
    temp_v1 = *puVar2 ^ *(unsigned int *)((temp_v1 & 0xff) * 4 + 0x545f1c) ^
                      *(unsigned int *)(((temp_v1 & 0xffff) >> 8) * 4 + 0x54631c) ^
                      *(unsigned int *)(((temp_v1 & 0xffffff) >> 0x10) * 4 + 0x54671c) ^
                      *(unsigned int *)((temp_v1 >> 0x18) * 4 + 0x546b1c);
    temp_v1 = *(unsigned int *)((temp_v1 & 0xff) * 4 + 0x545f1c) ^
            *(unsigned int *)(((temp_v1 & 0xffff) >> 8) * 4 + 0x54631c) ^
            *(unsigned int *)(((temp_v1 & 0xffffff) >> 0x10) * 4 + 0x54671c) ^
            *(unsigned int *)((temp_v1 >> 0x18) * 4 + 0x546b1c);
  }
  for (; param_3 >= 4; param_3 = param_3 - 4) {
    puVar2 = puVar2 + 1;
    temp_v1 = *puVar2 ^ temp_v1;
    temp_v1 = *(unsigned int *)((temp_v1 & 0xff) * 4 + 0x545f1c) ^
            *(unsigned int *)(((temp_v1 & 0xffff) >> 8) * 4 + 0x54631c) ^
            *(unsigned int *)(((temp_v1 & 0xffffff) >> 0x10) * 4 + 0x54671c) ^
            *(unsigned int *)((temp_v1 >> 0x18) * 4 + 0x546b1c);
  }
  puVar2 = puVar2 + 1;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    temp_v0 = *puVar2;
    puVar2 = (unsigned int *)((int)puVar2 + 1);
    temp_v1 = *(unsigned int *)(((unsigned int)(unsigned char)temp_v0 ^ (temp_v1 >> 0x18)) * 4 + 0x545f1c) ^ (temp_v1 << 8);
  }
  temp_v1 = ~temp_v1;
  return (temp_v1 >> 0x18) + ((temp_v1 >> 8) & 0xff00) + (temp_v1 & 0xff00) * 0x100 + temp_v1 * 0x1000000;
}

} /* extern "C" */
