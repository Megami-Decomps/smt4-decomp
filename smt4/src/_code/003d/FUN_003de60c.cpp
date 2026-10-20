/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003de60c` (_code @ 0x3de60c, 0x144 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(int, int, int, unsigned int);

typedef struct fn_003de60c_arg3 fn_003de60c_arg3;
struct fn_003de60c_arg3 {
    unsigned char pad_0x0[0x14];
    float field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4a];
    short field_0x62; /* +0x62 */
    unsigned char pad_0x64[0x8c];
    int field_0xf0; /* +0xf0 */
};

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern int g_btlActionReflect; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */
extern int btlGetMainState(void);


unsigned int
FUN_003de60c(short param_1,unsigned int param_2,unsigned int param_3,fn_003de60c_arg3 *param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = btlGetMainState();
  temp_v2 = 4;
  do {
    temp_v3 = *(int *)(temp_v0 + 0x1e98) + temp_v2 * 0x114;
    if ((((*(unsigned int *)(temp_v3 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v3 + 0x50) & 2) != 0) &&
        ((*(unsigned int *)(temp_v3 + 0xf8) & 2) == 0)) && (*(short *)(temp_v3 + 0x62) != param_4->field_0x62))
    {
      if ((param_4->field_0xf0 != *(int *)(temp_v3 + 0xf0)) ||
         (param_4->field_0xf0 < 0 || *(int *)(temp_v3 + 0xf0) < 0)) {
        if (*(float *)(temp_v3 + 0x14) > param_4->field_0x14) {
          temp_v1 = g_btlActionReflect;
          FUN_0022699c(g_btlActionReflect,(int)param_1,0,param_2);
          *(unsigned char *)(temp_v1 + 5) = *(unsigned char *)(temp_v1 + 5) | 4;
          *(int *)(temp_v1 + 0x14) = temp_v3;
          *(unsigned char *)(temp_v1 + 4) = 0x22;
          *(unsigned int *)(temp_v1 + 0x28) = param_3;
          *(unsigned int *)(temp_v1 + 0x4c) = 0;
        }
        else {
          temp_v1 = g_btlActionReflect;
          FUN_0022699c(g_btlActionReflect,(int)param_1,0,param_2);
          *(unsigned char *)(temp_v1 + 5) = *(unsigned char *)(temp_v1 + 5) | 4;
          *(int *)(temp_v1 + 0x14) = temp_v3;
          *(unsigned char *)(temp_v1 + 4) = 0x21;
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

} /* extern "C" */
