/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_SetChannelMix` (_code @ 0x1564ac, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001564ac_arg2 fn_001564ac_arg2;
struct fn_001564ac_arg2 {
    ushort field_0x0; /* +0x0 */
    ushort field_0x2; /* +0x2 */
    unsigned char pad_0x4[0xa];
    unsigned char field_0xe; /* +0xe */
    unsigned char pad_0xf[0x1];
    ushort field_0x10; /* +0x10 */
    ushort field_0x12; /* +0x12 */
    unsigned char pad_0x14[0xa];
    unsigned char field_0x1e; /* +0x1e */
    unsigned char pad_0x1f[0x1];
    ushort field_0x20; /* +0x20 */
    ushort field_0x22; /* +0x22 */
};

extern int FUN_002bb274(void);


unsigned int nn_snd_CTR_Dspsnd_SetChannelMix(int param_1,int param_2,fn_001564ac_arg2 *param_3)

{
  int temp_v0;
  unsigned short *puVar2;
  unsigned short *puVar3;
  unsigned int temp_v1;
  unsigned short *puVar5;
  unsigned short *puVar6;
  unsigned int *puVar7;
  
  temp_v0 = FUN_002bb274();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v0 = 4;
    puVar7 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + param_2 * 4 + 0x10b0)
    ;
    puVar2 = &param_3[-1].field_0x22;
    puVar5 = (unsigned short *)((int)puVar7 + 2);
    do {
      temp_v0 = temp_v0 - 1;
      puVar5[1] = puVar2[1];
      puVar2 = puVar2 + 2;
      puVar5 = puVar5 + 2;
      *puVar5 = *puVar2;
    } while (temp_v0 != 0);
    puVar3 = (unsigned short *)&param_3->field_0xe;
    puVar6 = (unsigned short *)((int)puVar7 + 0x12);
    temp_v0 = 4;
    do {
      temp_v0 = temp_v0 - 1;
      puVar6[1] = puVar3[1];
      puVar3 = puVar3 + 2;
      puVar6 = puVar6 + 2;
      *puVar6 = *puVar3;
    } while (temp_v0 != 0);
    puVar6 = (unsigned short *)((int)puVar7 + 0x22);
    puVar3 = (unsigned short *)&param_3->field_0x1e;
    temp_v0 = 4;
    do {
      temp_v0 = temp_v0 - 1;
      puVar6[1] = puVar3[1];
      puVar3 = puVar3 + 2;
      puVar6 = puVar6 + 2;
      *puVar6 = *puVar3;
    } while (temp_v0 != 0);
    *puVar7 = *puVar7 | 0xe000000;
    temp_v1 = 1;
  }
  return temp_v1;
}
