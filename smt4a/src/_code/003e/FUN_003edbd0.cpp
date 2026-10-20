/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003edbd0` (_code @ 0x3edbd0, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f0e20(...);

typedef struct fn_003edbd0_arg0 fn_003edbd0_arg0;
struct fn_003edbd0_arg0 {
    unsigned char pad_0x0[0x6e];
    ushort field_0x6e; /* +0x6e */
    unsigned char pad_0x70[0xf6];
    ushort field_0x166; /* +0x166 */
    unsigned char pad_0x168[0x8];
    undefined4 field_0x170; /* +0x170 */
    unsigned char pad_0x174[0x1d60];
    int field_0x1ed4; /* +0x1ed4 */
    unsigned char pad_0x1ed8[0x120];
    int field_0x1ff8; /* +0x1ff8 */
};

/* Supplied declaration required: FUN_003f0e20. */


void FUN_003edbd0(fn_003edbd0_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  fn_003edbd0_arg0 *pfVar2;
  unsigned short *puVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  if (param_1->field_0x1ff8 != 0) {
    temp_v2 = 4;
    do {
      temp_v3 = param_1->field_0x1ed4 + temp_v2 * 0x1d0;
      if ((*(unsigned int *)(temp_v3 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v3 + 0x50) & 0x80) != 0) {
        pfVar2 = param_1;
        FUN_003f0e20(param_1,(int)*(short *)(temp_v3 + 0x6a));
        temp_v1 = 0;
        do {
          puVar3 = (unsigned short *)(param_1->field_0x1ff8 + temp_v1 * 0x18);
          temp_v0 = *puVar3;
          temp_v5 = temp_v0 == 0xffff;
          if (temp_v5) {
            temp_v0 = puVar3[1];
          }
          if (temp_v5 && temp_v0 == 0xffff) {
            temp_v4 = (unsigned int)puVar3[2];
            temp_v5 = temp_v4 == 0;
            if (temp_v5) {
              temp_v4 = *(unsigned int *)(puVar3 + 4);
            }
            if (temp_v5 && temp_v4 == 0xffffffff) {
              *puVar3 = pfVar2->field_0x6e;
              puVar3[1] = *(unsigned short *)(temp_v3 + 0x6a);
              puVar3[2] = pfVar2->field_0x166;
              *(unsigned int *)(puVar3 + 4) = pfVar2->field_0x170;
              break;
            }
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 0x32);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x36);
  }
  return;
}

} /* extern "C" */
