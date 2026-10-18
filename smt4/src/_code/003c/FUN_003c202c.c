/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c202c` (_code @ 0x3c202c, 0x170 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003c202c_arg0 fn_003c202c_arg0;
struct fn_003c202c_arg0 {
    unsigned char pad_0x0[0x46];
    ushort field_0x46; /* +0x46 */
    byte field_0x48; /* +0x48 */
    unsigned char pad_0x49[0x2];
    byte field_0x4b; /* +0x4b */
};

/* stack frame of param_3: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

/* Supplied declaration required: FUN_0026b780. */
/* Supplied declaration required: FUN_002b9024. */


unsigned int FUN_003c202c(fn_003c202c_arg0 *param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned short temp_v8 [16];
  fn_003c202c_arg0 *pfStack_30;
  int iStack_2c;
  int temp_v9;
  
  if (param_1->field_0x4b != 0) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = (unsigned int)param_1->field_0x46;
    pfStack_30 = param_1;
    iStack_2c = param_2;
    temp_v9 = param_3;
    FUN_002b9024();
    temp_v8[0] = 0;
    temp_v8[1] = 0;
    temp_v8[2] = 0;
    temp_v8[3] = 0;
    temp_v8[4] = 0;
    temp_v8[5] = 0;
    temp_v7 = 0;
    temp_v0 = 1;
    temp_v6 = 0;
    temp_v5 = 0;
    temp_v4 = 0;
    temp_v8[6] = 0;
    temp_v8[7] = 0;
    temp_v8[8] = 0;
    temp_v8[9] = 0;
    temp_v8[10] = 0;
    temp_v8[0xb] = 0;
    temp_v8[0xc] = 0;
    temp_v8[0xd] = 0;
    temp_v8[0xe] = 0;
    temp_v8[0xf] = 0;
    do {
      temp_v2 = temp_v1 + temp_v4 * 4;
      temp_v3 = temp_v7;
      if ((*(short *)(temp_v2 + 0x4e) != 0) &&
         (*(unsigned short *)(temp_v2 + 0x4c) > (unsigned short)param_1->field_0x48)) {
        temp_v3 = FUN_0026b780(param_1);
        if (temp_v3 == 0) {
          temp_v8[temp_v7 * 2] = *(unsigned short *)(temp_v1 + temp_v6 * 4 + 0x4c);
          temp_v3 = temp_v7 + 1;
          temp_v8[temp_v7 * 2 + 1] = *(unsigned short *)(temp_v1 + temp_v5 * 4 + 0x4e);
          temp_v6 = temp_v6 + 1;
          temp_v7 = temp_v3;
        }
      }
      else {
        temp_v6 = temp_v6 + 1;
        temp_v7 = temp_v3;
      }
      temp_v5 = temp_v5 + 1;
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    temp_v4 = 0;
    temp_v7 = 0;
    do {
      if (temp_v8[temp_v7 * 2 + 1] != 0) {
        temp_v1 = (unsigned int)temp_v8[temp_v7 * 2];
        if (((param_1->field_0x48 < temp_v1) &&
            ((int)temp_v1 <= (int)((unsigned int)param_1->field_0x48 + param_2))) &&
           (temp_v5 = FUN_0026b780(param_1), temp_v5 == 0)) {
          temp_v5 = temp_v4 * 2;
          temp_v4 = temp_v4 + 1;
          *(unsigned short *)(temp_v9 + temp_v5) = temp_v8[temp_v7 * 2 + 1];
        }
        if (((int)((unsigned int)param_1->field_0x48 + param_2) < (int)(unsigned int)temp_v8[temp_v7 * 2]) &&
           (temp_v5 = FUN_0026b780(param_1,temp_v8[temp_v7 * 2 + 1]), temp_v5 == 0)) {
          temp_v0 = 0;
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 8);
  }
  return temp_v0;
}
