/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d16b8` (_code @ 0x2d16b8, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned int DAT_00472520; /* 0x472520 */
extern unsigned int DAT_00472524; /* 0x472524 */
extern unsigned int DAT_00472528; /* 0x472528 */
extern unsigned int DAT_0047252c; /* 0x47252c */
extern unsigned char DAT_00472608; /* 0x472608 */

extern unsigned int *FUN_002c34a4(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5ff4. */


unsigned int * FUN_002d16b8(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = *(int *)(param_1 * 0x1c + 0x472620);
  puVar3 = (unsigned int *)FUN_002c34a4(0x10000,0x100,0,temp_v3 + 0x50,0x10,1);
  puVar3[0xc] = 0xffffffff;
  puVar3[0x10] = (unsigned int)(puVar3 + 0x14);
  puVar3[0xd] = 0;
  puVar3[0xe] = param_1;
  temp_v1 = DAT_0047252c;
  temp_v0 = DAT_00472528;
  temp_v2 = DAT_00472524;
  puVar3[8] = DAT_00472520;
  puVar3[9] = temp_v2;
  puVar3[10] = temp_v0;
  puVar3[0xb] = temp_v1;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[3] = 0x3f800000;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[7] = 0x3f800000;
  FUN_002c5ff4(puVar3 + 0x14,param_2,temp_v3);
  temp_v2 = (**(romwright_code **)(param_1 * 0x1c + 0x47260c))(param_2,param_3);
  puVar3[0xf] = temp_v2;
  (**(romwright_code **)(&DAT_00472608 + param_1 * 0x1c))(puVar3);
  return puVar3;
}
