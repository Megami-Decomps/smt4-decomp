/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019c9b4` (_code @ 0x19c9b4, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(int, int, int);

extern signed char DAT_005c1460; /* 0x5c1460 */
extern signed char DAT_005c1461; /* 0x5c1461 */
extern int DAT_005c1464; /* 0x5c1464 */

/* Supplied declaration required: rt_memcpy_w. */


void FUN_0019c9b4(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  short *psVar3;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = DAT_005c1464;
  temp_v0 = '\0';
  if (DAT_005c1460 != '\0') {
    temp_v0 = DAT_005c1461;
  }
  if (DAT_005c1460 != '\0' && temp_v0 != '\0') {
    psVar3 = (short *)(DAT_005c1464 + 0x4e00);
    *(unsigned short *)(DAT_005c1464 + 0x4e02) = 0;
    *(unsigned int *)(temp_v2 + 0x4e2c) = 0;
    if (*psVar3 >= 0x40) {
      rt_memcpy_w(temp_v2,temp_v2 + 0x138,0x138);
      temp_v2 = 1;
      temp_v3 = 1;
      do {
        temp_v1 = DAT_005c1464 + temp_v2 * 0x138;
        rt_memcpy_w(temp_v1,temp_v1 + 0x138,0x138);
        temp_v1 = DAT_005c1464 + (temp_v2 + 1) * 0x138;
        rt_memcpy_w(temp_v1,temp_v1 + 0x138,0x138);
        temp_v3 = temp_v3 + 2;
        temp_v2 = temp_v2 + 2;
      } while (temp_v3 < 0x3f);
      *(unsigned short *)(DAT_005c1464 + 0x4e00) = 0x3f;
    }
    temp_v2 = DAT_005c1464;
    psVar3 = (short *)(DAT_005c1464 + 0x4e00);
    *(unsigned char *)(DAT_005c1464 + *psVar3 * 0x138) = 0;
    *(unsigned char *)(temp_v2 + *psVar3 * 0x138 + 3) = 0xff;
  }
  return;
}

} /* extern "C" */
