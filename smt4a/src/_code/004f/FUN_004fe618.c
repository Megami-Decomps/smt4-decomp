/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fe618` (_code @ 0x4fe618, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004fe618_arg3 fn_004fe618_arg3;
struct fn_004fe618_arg3 {
    unsigned char pad_0x0[0x14];
    float field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x52];
    short field_0x6a; /* +0x6a */
    unsigned char pad_0x6c[0x98];
    int field_0x104; /* +0x104 */
};

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern int DAT_005712f0; /* 0x5712f0 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_004102d8. */


unsigned int
FUN_004fe618(short param_1,unsigned int param_2,unsigned int param_3,fn_004fe618_arg3 *param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_0014aa78();
  temp_v2 = 4;
  do {
    temp_v3 = *(int *)(temp_v0 + 0x1ed4) + temp_v2 * 0x1d0;
    if ((((*(unsigned int *)(temp_v3 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v3 + 0x50) & 2) != 0) &&
        ((*(unsigned int *)(temp_v3 + 0x10c) & 2) == 0)) && (*(short *)(temp_v3 + 0x6a) != param_4->field_0x6a))
    {
      if ((param_4->field_0x104 != *(int *)(temp_v3 + 0x104)) ||
         (param_4->field_0x104 < 0 || *(int *)(temp_v3 + 0x104) < 0)) {
        if (*(float *)(temp_v3 + 0x14) > param_4->field_0x14) {
          temp_v1 = DAT_005712f0;
          FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
          *(unsigned char *)(temp_v1 + 5) = *(unsigned char *)(temp_v1 + 5) | 4;
          *(int *)(temp_v1 + 0x14) = temp_v3;
          *(unsigned char *)(temp_v1 + 4) = 0x2c;
          *(unsigned int *)(temp_v1 + 0x28) = param_3;
          *(unsigned int *)(temp_v1 + 0x4c) = 0;
        }
        else {
          temp_v1 = DAT_005712f0;
          FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
          *(unsigned char *)(temp_v1 + 5) = *(unsigned char *)(temp_v1 + 5) | 4;
          *(int *)(temp_v1 + 0x14) = temp_v3;
          *(unsigned char *)(temp_v1 + 4) = 0x2b;
          *(unsigned int *)(temp_v1 + 0x28) = param_3;
          *(unsigned int *)(temp_v1 + 0x4c) = 0x4c4c4cff;
        }
        *(unsigned int *)(temp_v3 + 0x50) = *(unsigned int *)(temp_v3 + 0x50) | 0x10000;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x36);
  return 1;
}
