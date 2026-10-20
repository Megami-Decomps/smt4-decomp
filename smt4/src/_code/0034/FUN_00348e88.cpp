/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348e88` (_code @ 0x348e88, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable1bOr1cGetRecord(void);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int FUN_0028fb40(unsigned int);
extern int gameGetFlagBlock(void);
/* Supplied declaration required: dataTable1bOr1cGetRecord. */
extern int gameGetMapBlock(void);


void FUN_00348e88(unsigned int param_1,int param_2)

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
  
  temp_v0 = gameGetMapBlock();
  temp_v6 = 0;
  do {
    temp_v1 = gameGetFlagBlock();
    if ((*(unsigned char *)(temp_v1 + (temp_v6 & 0xffff) * 4 + 0x200) & 2) != 0) {
      temp_v2 = temp_v6;
      dataTable1bOr1cGetRecord();
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
             (temp_v3 = FUN_0028fb40(param_1), temp_v3 < *(unsigned int *)(temp_v5 + 0x170))) {
            temp_v4 = gameGetFlagBlock();
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

} /* extern "C" */
