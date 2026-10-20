/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246454` (_code @ 0x246454, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(int, int, int, unsigned int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */
extern int FUN_002939f4(void);


unsigned int FUN_00246454(short param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v4 = 0;
  do {
    temp_v0 = *(short *)((int)param_3 + 0x6e);
    if ((-1 < temp_v0) && (temp_v0 < 0x6d)) {
      temp_v1 = FUN_002939f4();
      temp_v1 = *(int *)(temp_v1 + 0x1e98) + temp_v4 * 0x114;
      if ((temp_v1 != 0) &&
         (((temp_v3 = *(unsigned int *)(temp_v1 + 0x50), (temp_v3 & 1) != 0 && (temp_v3 & 2) != 0 &&
           (*(short *)(temp_v1 + 0x60) == temp_v0)) && ((temp_v3 & 0x400) != 0)))) {
        temp_v2 = DAT_00434290;
        FUN_0022699c(DAT_00434290,(int)param_1,0,param_2);
        *(unsigned char *)(temp_v2 + 5) = *(unsigned char *)(temp_v2 + 5) | 4;
        *(int *)(temp_v2 + 0x14) = temp_v1;
        *(unsigned char *)(temp_v2 + 4) = 0x22;
        *(unsigned int *)(temp_v2 + 0x28) = 0x14;
        *(unsigned int *)(temp_v2 + 0x4c) = 0;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x6d);
  *param_3 = *param_3 | 0x40;
  temp_v4 = DAT_00434290;
  FUN_0022699c(DAT_00434290,(int)(short)(param_1 + 0x14),0,param_2);
  *(unsigned char *)(temp_v4 + 4) = 0x24;
  *(unsigned int **)(temp_v4 + 0x18) = param_3;
  *(unsigned int *)(temp_v4 + 0x28) = 0;
  return 1;
}

} /* extern "C" */
