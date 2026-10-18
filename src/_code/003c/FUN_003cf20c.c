/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cf20c` (_code @ 0x3cf20c, 0x1c4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: FUN_0022a76c. */
/* Supplied declaration required: FUN_0022aaac. */
extern int FUN_0023ec3c(unsigned int);
/* Supplied declaration required: FUN_002462a0. */
/* Supplied declaration required: FUN_00246f90. */
/* Supplied declaration required: FUN_00250fb4. */
/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_002c684c. */


void FUN_003cf20c(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  int temp_v7;
  
  if ((*(unsigned int *)(*param_1 + 0x44a0) & 4) != 0) {
    return;
  }
  temp_v1 = 1;
  temp_v6 = 0;
  temp_v2 = 1;
  temp_v3 = 0x10;
  FUN_002c684c();
  temp_v7 = 0;
  do {
    puVar8 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v6 * 0x288);
    if ((((*puVar8 & 1) != 0) && ((*puVar8 & 0x40) == 0)) &&
       (temp_v0 = *(unsigned short *)((int)puVar8 + 0x1c6), (temp_v0 & 0x400) == 0 && (temp_v0 & 4) == 0)) {
      if ((temp_v0 & 0x200) != 0) {
        temp_v2 = 0;
      }
      else {
        temp_v4 = (unsigned int)(short)puVar8[2];
        FUN_002462a0(temp_v4,0xf,2,0xffffffff);
        temp_v5 = (unsigned int)(short)puVar8[2];
        FUN_0022aaac(temp_v5,0xf);
        if (((temp_v4 | temp_v5) & 0x170000) == 0) {
          temp_v1 = 0;
          *(int *)(temp_v3 + temp_v7 * 4) = (int)(short)puVar8[2];
          temp_v7 = (int)(char)((char)temp_v7 + '\x01');
        }
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 4);
  if (((!temp_v1 && !temp_v2) && (temp_v7 != 0)) &&
     ((temp_v6 = FUN_0023ec3c(99), temp_v6 < 0xf || ((*(unsigned int *)(*param_1 + 0x44a8) & 0x1000000) != 0))))
  {
    temp_v6 = FUN_0023ec3c((temp_v7 - 1U) & 0xffff);
    temp_v7 = *(int *)(*param_1 + 0x1e98) + *(int *)(temp_v3 + temp_v6 * 4) * 0x114;
    FUN_00246f90(param_3,param_2,temp_v7,0x200,1);
    temp_v6 = *param_1;
    FUN_00282b94(temp_v6,(int)*(short *)(temp_v7 + 0x62));
    *(unsigned short *)(temp_v6 + 0x1c8) = 0;
    *(unsigned short *)(temp_v6 + 0x1ca) = *(unsigned short *)(temp_v6 + 0x1ca) | 0x10;
    FUN_0022a76c(0x1c,temp_v6,1);
  }
  FUN_00250fb4(temp_v3);
  return;
}
