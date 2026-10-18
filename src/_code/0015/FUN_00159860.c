/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00159860` (_code @ 0x159860, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char DAT_004e827d; /* 0x4e827d */

/* Supplied declaration required: FUN_00156260. */
extern int FUN_002bb470(void);


int FUN_00159860(int *param_1,unsigned short param_2)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  
  if (*(unsigned char *)((int)param_1 + 0xd) < 2) {
    temp_v1 = 0;
    if (*param_1 != 0) {
      temp_v1 = param_1[2];
    }
    if (*param_1 != 0 && temp_v1 != 0) {
      temp_v2 = 1;
      temp_v0 = *(char *)((int)param_1 + 0xd);
      temp_v3 = param_2;
      temp_v1 = FUN_002bb470();
      FUN_00156260(temp_v1,(int)temp_v0,&temp_v2);
      if (temp_v1 != 0) {
        *(char *)((int)param_1 + 0xe) = (char)param_2;
      }
      if (*(char *)((int)param_1 + 0xe) == '\0') {
        *(unsigned char *)((int)param_1 + 0xf) = DAT_004e827d;
      }
      return temp_v1;
    }
  }
  return 0;
}
