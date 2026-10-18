/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019dc34` (_code @ 0x19dc34, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *DAT_0044cda0; /* 0x44cda0 */


unsigned int FUN_0019dc34(void)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  puVar2 = DAT_0044cda0;
  temp_v0 = *DAT_0044cda0;
  if (temp_v0 >= 2) {
    if (temp_v0 != 2) {
      if (temp_v0 == 3) {
        temp_v0 = DAT_0044cda0[1];
        puVar2 = DAT_0044cda0 + 4;
        DAT_0044cda0[1] = temp_v0 + 1;
        if ((int)(temp_v0 + 1) >= 0x1f) {
          *(unsigned char *)puVar2 = 0;
          puVar2 = DAT_0044cda0;
          *DAT_0044cda0 = 1;
          puVar2[1] = 0;
        }
      }
    }
    else {
      temp_v0 = DAT_0044cda0[1];
      DAT_0044cda0[1] = temp_v0 + 1;
      if (temp_v0 + 1 == 0x28) {
        puVar2[9] = 1;
        *(unsigned char *)(puVar2 + 10) = 1;
      }
      if ((char)puVar2[3] != '\0') {
        puVar2[9] = 2;
        *(unsigned char *)(puVar2 + 10) = 1;
        *puVar2 = 3;
        puVar2[1] = 0;
        return 0;
      }
    }
  }
  return 0;
}
