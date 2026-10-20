/* NON_MATCHING: romwright 0.5.0 decompilation of `libc_strcpy` (_code @ 0x2e342c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int UnsignedSaturate(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */


void libc_strcpy(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned short temp_v3;
  char *pcVar5;
  unsigned int *puVar6;
  char *pcVar7;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  if ((((unsigned int)param_1 | (unsigned int)param_2) & 3) == 0) {
    do {
      temp_v4 = *param_2;
      temp_v0 = UnsignedSaturate('\x01' - (char)temp_v4,0x10);
      temp_v1 = UnsignedSaturate('\x01' - (char)(temp_v4 >> 8),0x10);
      temp_v2 = UnsignedSaturate('\x01' - (char)(temp_v4 >> 0x10),0x10);
      temp_v3 = UnsignedSaturate('\x01' - (char)(temp_v4 >> 0x18),0x10);
      temp_v6 = (temp_v3 & 0xff) == 0;
      puVar6 = param_1;
      if (((temp_v6 && temp_v2 == 0) && temp_v1 == 0) && temp_v0 == '\0') {
        puVar6 = param_1 + 1;
        *param_1 = temp_v4;
      }
      param_2 = param_2 + 1;
      param_1 = puVar6;
    } while (((temp_v6 && temp_v2 == 0) && temp_v1 == 0) && temp_v0 == '\0');
    do {
      temp_v6 = (temp_v4 & 0xff) != 0;
      temp_v5 = temp_v4;
      if (temp_v6) {
        temp_v5 = temp_v4 >> 8;
      }
      *(char *)puVar6 = (char)temp_v4;
      puVar6 = (unsigned int *)((int)puVar6 + 1);
      temp_v4 = temp_v5;
    } while (temp_v6);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  do {
    pcVar5 = (char *)((int)param_2 + 1);
    temp_v4 = *param_2;
    pcVar7 = (char *)((int)param_1 + 1);
    *(char *)param_1 = (char)temp_v4;
                    /* WARNING: Treating indirect jump as return */
    if ((char)temp_v4 == '\0') {
      return;
    }
    param_2 = (unsigned int *)((int)param_2 + 2);
    temp_v0 = *pcVar5;
    param_1 = (unsigned int *)((int)param_1 + 2);
    *pcVar7 = temp_v0;
  } while (temp_v0 != '\0');
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
