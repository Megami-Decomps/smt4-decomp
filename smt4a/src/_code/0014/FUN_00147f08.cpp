/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147f08` (_code @ 0x147f08, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(int, unsigned int *, int);

/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_00147f08(int param_1,unsigned int *param_2)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  float temp_v4;
  
  if ((((0.0f <= (float)param_2[2]) && ((int)param_2[2] < 0x3f800001)) && (0.0f <= (float)param_2[1]))
     && ((int)param_2[1] < 0x3f800001)) {
    if (*(char *)(param_1 + 0x5e) != '\x01') {
LAB_00147f74:
      temp_v0 = (*param_2 * 1000) / 0x1318;
      *(unsigned int *)(param_1 + 0x44) = temp_v0;
      if (temp_v0 == 0) {
        *(unsigned int *)(param_1 + 0x44) = 1;
      }
      if ((char)param_2[3] == '\0') {
        temp_v2 = 2;
      }
      else {
        temp_v2 = 4;
      }
      *(unsigned char *)(param_1 + 0x5d) = temp_v2;
      *(int *)(param_1 + 0x4c) = (int)((float)param_2[1] * 128.0f);
      temp_v4 = (float)param_2[2];
      if ((int)temp_v4 >= 0x3f733334) {
        temp_v4 = 0.95f;
      }
      *(int *)(param_1 + 0x50) = (int)((1.0f - temp_v4) * 128.0f);
      *(int *)(param_1 + 0x54) = (int)(temp_v4 * 128.0f);
      rt_memcpy_w(param_1 + 0xc,param_2,0xd);
      return 1;
    }
    if (*param_2 <= *(unsigned int *)(param_1 + 0x58)) {
      temp_v1 = *(char *)(param_1 + 0x5c);
      temp_v3 = temp_v1 == '\0';
      if (temp_v3) {
        temp_v1 = (char)param_2[3];
      }
      if (!temp_v3 || temp_v1 != '\x01') goto LAB_00147f74;
    }
  }
  return 0;
}

} /* extern "C" */
