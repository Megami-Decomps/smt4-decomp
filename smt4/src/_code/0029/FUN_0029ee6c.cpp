/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ee6c` (_code @ 0x29ee6c, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int SBORROW4(int, int);
int rt_memcpy(int, int, int);

extern unsigned char g_buttonHelp; /* 0x43da28 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: rt_memcpy. */


void FUN_0029ee6c(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v1 = (*(int *)((unsigned char *)&g_buttonHelp + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&g_buttonHelp + 0x4)) + 0x4cc) = param_2;
  *(unsigned int *)(temp_v1 + 0x550) = 0;
  *(unsigned char *)(temp_v1 + 0x554) = 0xff;
  if (param_1 == 0) {
    *(unsigned char *)(temp_v1 + 0x4cb) = 0;
  }
  else {
    *(unsigned int *)(temp_v1 + 0x4d0) = 0;
    *(unsigned int *)(temp_v1 + 0x4d4) = 0;
    *(unsigned int *)(temp_v1 + 0x4d8) = 0;
    *(unsigned int *)(temp_v1 + 0x4dc) = 0;
    *(unsigned int *)(temp_v1 + 0x4e0) = 0;
    *(unsigned int *)(temp_v1 + 0x4e4) = 0;
    *(unsigned int *)(temp_v1 + 0x4e8) = 0;
    *(unsigned int *)(temp_v1 + 0x4ec) = 0;
    *(unsigned int *)(temp_v1 + 0x4f0) = 0;
    *(unsigned int *)(temp_v1 + 0x4f4) = 0;
    *(unsigned int *)(temp_v1 + 0x4f8) = 0;
    *(unsigned int *)(temp_v1 + 0x4fc) = 0;
    *(unsigned int *)(temp_v1 + 0x500) = 0;
    *(unsigned int *)(temp_v1 + 0x504) = 0;
    *(unsigned int *)(temp_v1 + 0x508) = 0;
    *(unsigned int *)(temp_v1 + 0x50c) = 0;
    *(unsigned int *)(temp_v1 + 0x510) = 0;
    *(unsigned int *)(temp_v1 + 0x514) = 0;
    *(unsigned int *)(temp_v1 + 0x518) = 0;
    *(unsigned int *)(temp_v1 + 0x51c) = 0;
    *(unsigned int *)(temp_v1 + 0x520) = 0;
    *(unsigned int *)(temp_v1 + 0x524) = 0;
    *(unsigned int *)(temp_v1 + 0x528) = 0;
    *(unsigned int *)(temp_v1 + 0x52c) = 0;
    *(unsigned int *)(temp_v1 + 0x530) = 0;
    *(unsigned int *)(temp_v1 + 0x534) = 0;
    *(unsigned int *)(temp_v1 + 0x538) = 0;
    *(unsigned int *)(temp_v1 + 0x53c) = 0;
    *(unsigned int *)(temp_v1 + 0x540) = 0;
    *(unsigned int *)(temp_v1 + 0x544) = 0;
    temp_v4 = 0;
    *(unsigned int *)(temp_v1 + 0x548) = 0;
    temp_v2 = 0;
    temp_v3 = 0;
    *(unsigned int *)(temp_v1 + 0x54c) = 0;
    do {
      if (*(char *)(param_1 + temp_v3) == '\0') {
        rt_memcpy(temp_v1 + temp_v4 * 0x40 + 0x4d0,param_1 + temp_v2,temp_v3 - temp_v2);
        break;
      }
      if (*(char *)(param_1 + temp_v3) == '\n') {
        rt_memcpy(temp_v1 + temp_v4 * 0x40 + 0x4d0,param_1 + temp_v2,temp_v3 - temp_v2);
        temp_v2 = temp_v3 + 1;
        temp_v4 = temp_v4 + 1;
      }
      temp_v5 = SBORROW4(temp_v4,1);
      temp_v0 = temp_v4 - 1;
      if (temp_v4 < 2) {
        temp_v5 = SBORROW4(temp_v3 + 1,0x80);
        temp_v0 = temp_v3 - 0x7f;
        temp_v3 = temp_v3 + 1;
      }
    } while (temp_v0 < 0 != temp_v5);
    *(unsigned char *)(temp_v1 + 0x55c) = 0;
    *(unsigned char *)(temp_v1 + 0x4cb) = 1;
  }
  return;
}

} /* extern "C" */
