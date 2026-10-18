/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015f564` (_code @ 0x15f564, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0015f564_arg2 fn_0015f564_arg2;
struct fn_0015f564_arg2 {
    unsigned char pad_0x0[0x4];
    uint field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x8];
    char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x1];
    ushort field_0x12; /* +0x12 */
};

extern int FUN_002bb274(void);


unsigned int FUN_0015f564(int param_1,int param_2,fn_0015f564_arg2 *param_3)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002bb274();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    puVar2 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + param_2 * 4 + 0x10b0)
    ;
    if (*(unsigned short *)
         (*(int *)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131c) * 0x60 + param_2 * 4 + 0x1170) + 8)
        == param_3->field_0x12) {
      *(unsigned short *)((int)puVar2 + 0xbe) = param_3->field_0x12;
      *(unsigned short *)(puVar2 + 0x2f) =
           ((unsigned short)puVar2[0x2f] & 0xfffd) | (((short)param_3->field_0x10 & 1U) << 1);
      puVar2[0x2c] = (param_3->field_0x4 >> 0x10) | (param_3->field_0x4 << 0x10);
      *puVar2 = *puVar2 | 8;
    }
    temp_v1 = 1;
  }
  return temp_v1;
}
