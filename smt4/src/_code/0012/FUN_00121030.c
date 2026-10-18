/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121030` (_code @ 0x121030, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00121030_arg0 fn_00121030_arg0;
struct fn_00121030_arg0 {
    unsigned char pad_0x0[0x10];
    undefined1 field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x7];
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x64];
    unsigned char field_0x84; /* +0x84 */
    unsigned char pad_0x85[0x10b];
    undefined4 field_0x190; /* +0x190 */
};

/* Supplied declaration required: FUN_00141fb4. */
/* Supplied declaration required: FUN_002b4f40. */
/* Supplied declaration required: FUN_002b4f64. */
extern int FUN_002baed8(void);


unsigned int FUN_00121030(fn_00121030_arg0 *param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_00141fb4(param_2);
  if ((int)(((temp_v0 * 4 + param_3 + 7U) & 0xfffffffc) - (param_3 + param_4)) >= 1) {
    temp_v1 = 0;
  }
  else {
    *(int *)&param_1[1].field_0x84 = param_3;
    temp_v2 = FUN_00141fb4(param_2);
    **(unsigned int **)&param_1[1].field_0x84 = temp_v2;
    if (temp_v2 != 0) {
      temp_v2 = temp_v2 & 1;
      if (temp_v2 == 1) {
        *(unsigned int *)(*(int *)&param_1[1].field_0x84 + 4) = 0;
      }
      temp_v4 = (unsigned int)(temp_v2 == 1);
      if (temp_v2 < **(unsigned int **)&param_1[1].field_0x84) {
        do {
          temp_v0 = temp_v4 + 1;
          temp_v2 = temp_v2 + 2;
          *(unsigned int *)(*(int *)&param_1[1].field_0x84 + temp_v4 * 4 + 4) = 0;
          temp_v4 = temp_v4 + 2;
          *(unsigned int *)(*(int *)&param_1[1].field_0x84 + temp_v0 * 4 + 4) = 0;
        } while (temp_v2 < **(unsigned int **)&param_1[1].field_0x84);
      }
    }
    *(unsigned int *)&param_1->field_0x10 = param_2;
    temp_v3 = FUN_002baed8();
    temp_v0 = temp_v3;
    FUN_002b4f64(temp_v3,5);
    *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(temp_v3 + 0x184);
    *(unsigned char *)(temp_v0 + 4) = 0x31;
    *(fn_00121030_arg0 **)(temp_v0 + 0x10) = param_1;
    FUN_002b4f40(temp_v3,temp_v0);
    temp_v1 = 1;
  }
  return temp_v1;
}
