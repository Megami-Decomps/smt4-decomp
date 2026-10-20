/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00125d90` (_code @ 0x125d90, 0x282 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_00125d90(unsigned int param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 1 unstructured edge(s); 1 goto(s) */
  unsigned int temp_v0;
  
  param_1 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    if (((unsigned int)param_2 & 3) == 0) {
      for (; param_3 >= 0x20; param_3 = param_3 - 0x20) {
        param_1 = *param_2 ^ param_1;
        temp_v0 = param_2[1] ^
                *(unsigned int *)((param_1 & 0xff) * 4 + 0x545b1c) ^
                *(unsigned int *)(((param_1 & 0xffff) >> 8) * 4 + 0x54571c) ^
                *(unsigned int *)(((param_1 & 0xffffff) >> 0x10) * 4 + 0x54531c) ^
                *(unsigned int *)((param_1 >> 0x18) * 4 + 0x544f1c);
        temp_v0 = param_2[2] ^
                *(unsigned int *)((temp_v0 & 0xff) * 4 + 0x545b1c) ^
                *(unsigned int *)(((temp_v0 & 0xffff) >> 8) * 4 + 0x54571c) ^
                *(unsigned int *)(((temp_v0 & 0xffffff) >> 0x10) * 4 + 0x54531c) ^
                *(unsigned int *)((temp_v0 >> 0x18) * 4 + 0x544f1c);
        temp_v0 = param_2[3] ^
                *(unsigned int *)((temp_v0 & 0xff) * 4 + 0x545b1c) ^
                *(unsigned int *)(((temp_v0 & 0xffff) >> 8) * 4 + 0x54571c) ^
                *(unsigned int *)(((temp_v0 & 0xffffff) >> 0x10) * 4 + 0x54531c) ^
                *(unsigned int *)((temp_v0 >> 0x18) * 4 + 0x544f1c);
        temp_v0 = param_2[4] ^
                *(unsigned int *)((temp_v0 & 0xff) * 4 + 0x545b1c) ^
                *(unsigned int *)(((temp_v0 & 0xffff) >> 8) * 4 + 0x54571c) ^
                *(unsigned int *)(((temp_v0 & 0xffffff) >> 0x10) * 4 + 0x54531c) ^
                *(unsigned int *)((temp_v0 >> 0x18) * 4 + 0x544f1c);
        temp_v0 = param_2[5] ^
                *(unsigned int *)((temp_v0 & 0xff) * 4 + 0x545b1c) ^
                *(unsigned int *)(((temp_v0 & 0xffff) >> 8) * 4 + 0x54571c) ^
                *(unsigned int *)(((temp_v0 & 0xffffff) >> 0x10) * 4 + 0x54531c) ^
                *(unsigned int *)((temp_v0 >> 0x18) * 4 + 0x544f1c);
        temp_v0 = param_2[6] ^
                *(unsigned int *)((temp_v0 & 0xff) * 4 + 0x545b1c) ^
                *(unsigned int *)(((temp_v0 & 0xffff) >> 8) * 4 + 0x54571c) ^
                *(unsigned int *)(((temp_v0 & 0xffffff) >> 0x10) * 4 + 0x54531c) ^
                *(unsigned int *)((temp_v0 >> 0x18) * 4 + 0x544f1c);
        temp_v0 = param_2[7] ^
                *(unsigned int *)((temp_v0 & 0xff) * 4 + 0x545b1c) ^
                *(unsigned int *)(((temp_v0 & 0xffff) >> 8) * 4 + 0x54571c) ^
                *(unsigned int *)(((temp_v0 & 0xffffff) >> 0x10) * 4 + 0x54531c) ^
                *(unsigned int *)((temp_v0 >> 0x18) * 4 + 0x544f1c);
        param_2 = param_2 + 8;
        param_1 = *(unsigned int *)((temp_v0 & 0xff) * 4 + 0x545b1c) ^
                  *(unsigned int *)(((temp_v0 & 0xffff) >> 8) * 4 + 0x54571c) ^
                  *(unsigned int *)(((temp_v0 & 0xffffff) >> 0x10) * 4 + 0x54531c) ^
                  *(unsigned int *)((temp_v0 >> 0x18) * 4 + 0x544f1c);
      }
      do {
        if (3 >= param_3) goto LAB_00125ff6;
        temp_v0 = *param_2;
        param_2 = param_2 + 1;
        temp_v0 = temp_v0 ^ param_1;
        param_1 = *(unsigned int *)((temp_v0 & 0xff) * 4 + 0x545b1c) ^
                  *(unsigned int *)(((temp_v0 & 0xffff) >> 8) * 4 + 0x54571c) ^
                  *(unsigned int *)(((temp_v0 & 0xffffff) >> 0x10) * 4 + 0x54531c) ^
                  *(unsigned int *)((temp_v0 >> 0x18) * 4 + 0x544f1c);
        param_3 = param_3 - 4;
      } while( 1 );
    }
    temp_v0 = *param_2;
    param_2 = (unsigned int *)((int)param_2 + 1);
    param_1 = *(unsigned int *)((((unsigned char)temp_v0 ^ param_1) & 0xff) * 4 + 0x544f1c) ^ (param_1 >> 8);
  }
LAB_00125ff6:
  do {
    if (param_3 == 0) {
      return ~param_1;
    }
    temp_v0 = *param_2;
    param_2 = (unsigned int *)((int)param_2 + 1);
    param_1 = *(unsigned int *)((((unsigned char)temp_v0 ^ param_1) & 0xff) * 4 + 0x544f1c) ^ (param_1 >> 8);
    param_3 = param_3 - 1;
  } while( 1 );
}

} /* extern "C" */
