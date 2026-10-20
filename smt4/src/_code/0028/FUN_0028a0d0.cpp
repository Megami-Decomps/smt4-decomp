/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028a0d0` (_code @ 0x28a0d0, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_6_stack;

extern unsigned char DAT_00439c88; /* 0x439c88 */


unsigned int FUN_0028a0d0(unsigned int param_1,unsigned int param_2,unsigned char param_3,unsigned char param_4,
                 int param_5,unsigned char param_6)

{
/* irregular: 1 goto(s); irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  float in_s0;
  float in_s1;
  float in_s2;
  
  if (param_5 != 0) {
    temp_v0 = 0xffffffff;
    temp_v2 = 0;
    do {
      temp_v1 = (int)*(char *)((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + temp_v2 + 0xd5fc);
      if (temp_v1 - 1U < 7) {
        temp_v1 = (*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + temp_v2 * 0xc0 + temp_v1 * 0x18;
        temp_v5 = 0;
        if (*(float *)(temp_v1 + 0xc9d4) == in_s0) {
          temp_v5 = *(float *)(temp_v1 + 0xc9d8) == in_s1;
        }
        temp_v6 = 0;
        if (temp_v5) {
          temp_v6 = *(float *)(temp_v1 + 0xc9dc) == in_s2;
        }
        if (temp_v6) {
          temp_v0 = temp_v2;
          if (-1 < (int)temp_v2) goto LAB_0028a18c;
          break;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0x10);
    temp_v3 = 0;
    do {
      temp_v2 = temp_v3;
      if (*(char *)((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + temp_v2 + 0xd5fc) < '\x01') break;
      temp_v3 = temp_v2 + 1;
      temp_v2 = temp_v0;
    } while ((int)temp_v3 < 0x10);
LAB_0028a18c:
    if (temp_v2 < 0x10) {
      temp_v1 = (*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + temp_v2;
      if (*(char *)(temp_v1 + 0xd5fc) < 8) {
        temp_v4 = (*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + temp_v2 * 0xc0 + *(char *)(temp_v1 + 0xd5fc) * 0x18;
        *(unsigned char *)(temp_v4 + 0xc9f8) = 1;
        *(unsigned char *)(temp_v4 + 0xc9f9) = param_6;
        *(float *)(temp_v4 + 0xc9ec) = in_s0;
        *(float *)(temp_v4 + 0xc9f0) = in_s1;
        *(float *)(temp_v4 + 0xc9f4) = in_s2;
        *(unsigned int *)(temp_v4 + 0xc9fc) = param_2;
        *(unsigned char *)(temp_v4 + 0xca02) = param_3;
        *(unsigned char *)(temp_v4 + 0xca03) = param_4;
        *(char *)(temp_v1 + 0xd5fc) = *(char *)(temp_v1 + 0xd5fc) + '\x01';
        return temp_v2;
      }
    }
  }
  return 0xffffffff;
}

} /* extern "C" */
