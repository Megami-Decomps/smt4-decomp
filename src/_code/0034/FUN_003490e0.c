/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003490e0` (_code @ 0x3490e0, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int FUN_0028fde4(unsigned int);
extern int FUN_002adf14(void);
/* Supplied declaration required: FUN_002b6700. */
extern int FUN_002c2b1c(void);


void FUN_003490e0(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  
  temp_v0 = FUN_002c2b1c();
  temp_v6 = 0;
  do {
    temp_v1 = FUN_002adf14();
    if ((*(unsigned char *)(temp_v1 + (temp_v6 & 0xffff) * 4 + 0x200) & 2) != 0) {
      temp_v2 = temp_v6;
      FUN_002b6700();
      if ((temp_v2 != 0) && (*(char *)(temp_v2 + 6) == '\0')) {
        temp_v1 = 0;
        do {
          temp_v5 = temp_v2 + temp_v1 * 8;
          temp_v3 = temp_v5 + 0x100;
          temp_v7 = *(short *)(temp_v5 + 0x16c) == 1;
          if (temp_v7) {
            temp_v3 = (unsigned int)*(unsigned short *)(temp_v5 + 0x16e);
          }
          if ((temp_v7 && temp_v3 == param_1) &&
             (temp_v3 = FUN_0028fde4(param_1), temp_v3 < *(unsigned int *)(temp_v5 + 0x170))) {
            temp_v4 = FUN_002adf14();
            temp_v4 = temp_v4 + (temp_v6 & 0xffff) * 4;
            *(unsigned char *)(temp_v4 + 0x202) = *(unsigned char *)(temp_v4 + 0x202) | 2;
            if (param_2 + temp_v3 >= *(unsigned int *)(temp_v5 + 0x170)) {
              *(short *)(temp_v0 + 0x1062) = (short)param_1;
            }
            else {
              *(short *)(temp_v0 + 0x1060) = (short)param_1;
            }
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 6);
      }
    }
    temp_v6 = temp_v6 + 1;
  } while ((int)temp_v6 < 400);
  return;
}
