/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014f8e8` (_code @ 0x14f8e8, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char DAT_004e827d; /* 0x4e827d */

/* Supplied declaration required: FUN_001532e8. */
/* Supplied declaration required: FUN_00156260. */
/* Supplied declaration required: FUN_002bb470. */


void FUN_0014f8e8(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  
  if ((char)param_1[3] != '\0') {
    if (*(unsigned char *)((int)param_1 + 0xd) < 2) {
      if (*(unsigned char *)((int)param_1 + 0xd) < 2) {
        temp_v1 = 0;
        if (*param_1 != 0) {
          temp_v1 = param_1[2];
        }
        if (*param_1 != 0 && temp_v1 != 0) {
          temp_v4 = 0;
          temp_v3 = 1;
          temp_v0 = *(char *)((int)param_1 + 0xd);
          temp_v1 = FUN_002bb470();
          FUN_00156260(temp_v1,(int)temp_v0,&temp_v3);
          if (temp_v1 != 0) {
            *(unsigned char *)((int)param_1 + 0xe) = 0;
          }
          if (*(char *)((int)param_1 + 0xe) == '\0') {
            *(unsigned char *)((int)param_1 + 0xf) = DAT_004e827d;
          }
        }
      }
      temp_v0 = *(char *)((int)param_1 + 0xd);
      temp_v2 = FUN_002bb470();
      FUN_001532e8(temp_v2,0,(int)temp_v0);
      *(unsigned char *)((int)param_1 + 0xd) = 0xff;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(unsigned char *)(param_1 + 3) = 0;
  }
  return;
}
