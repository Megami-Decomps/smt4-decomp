/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021a540` (_code @ 0x21a540, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_00472520; /* 0x472520 */
extern unsigned int DAT_00472524; /* 0x472524 */
extern unsigned int DAT_00472528; /* 0x472528 */
extern unsigned int DAT_0047252c; /* 0x47252c */
extern unsigned char DAT_00472608; /* 0x472608 */

extern unsigned int *FUN_002c32a0(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002d1764. */
/* Supplied declaration required: rt_memcpy. */


unsigned int * FUN_0021a540(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v3 = *(unsigned int *)(param_1 + 0x38);
  temp_v4 = *(unsigned int *)(param_1 + 0x40);
  if (*(int *)(temp_v3 * 0x1c + 0x472614) != 0) {
    temp_v5 = *(int *)((temp_v3 & 0xffff) * 0x1c + 0x472620);
    puVar5 = (unsigned int *)FUN_002c32a0(0x10000,0x100,0,temp_v5 + 0x50,0x10,1);
    puVar5[0xc] = 0xffffffff;
    puVar5[0x10] = (unsigned int)(puVar5 + 0x14);
    puVar5[0xd] = 0;
    puVar5[0xe] = temp_v3 & 0xffff;
    temp_v2 = DAT_0047252c;
    temp_v1 = DAT_00472528;
    temp_v0 = DAT_00472524;
    puVar5[8] = DAT_00472520;
    puVar5[9] = temp_v0;
    puVar5[10] = temp_v1;
    puVar5[0xb] = temp_v2;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[3] = 0x3f800000;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[7] = 0x3f800000;
    rt_memcpy(puVar5 + 0x14,temp_v4,temp_v5);
    temp_v4 = (**(romwright_code **)(*(int *)(param_1 + 0x38) * 0x1c + 0x472614))(param_1);
    puVar5[0xf] = temp_v4;
    (**(romwright_code **)(&DAT_00472608 + *(int *)(param_1 + 0x38) * 0x1c))(puVar5);
  }
  else {
    puVar5 = (unsigned int *)(temp_v3 & 0xffff);
    FUN_002d1764(puVar5,temp_v4,0);
  }
  return puVar5;
}
