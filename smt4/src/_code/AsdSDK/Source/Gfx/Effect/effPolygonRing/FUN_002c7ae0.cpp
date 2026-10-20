/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7ae0` (_code @ 0x2c7ae0, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c32a0(int, int, int, int, int, int);
int rt_memcpy(unsigned int *, unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int DAT_00472520; /* 0x472520 */
extern unsigned int DAT_00472524; /* 0x472524 */
extern unsigned int DAT_00472528; /* 0x472528 */
extern unsigned int DAT_0047252c; /* 0x47252c */
extern unsigned char DAT_00472718; /* 0x472718 */

/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: rt_memcpy. */


unsigned int * FUN_002c7ae0(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = param_1 * 0x18;
  temp_v4 = *(int *)(temp_v0 + 0x47272c);
  puVar4 = (unsigned int *)0x10000;
  FUN_002c32a0(0x10000,0x100,0,temp_v4 + 0x50,0x10,1);
  puVar4[0x10] = (unsigned int)(puVar4 + 0x14);
  puVar4[0xd] = 0;
  puVar4[0xe] = param_1;
  puVar4[0xc] = 0xffffffff;
  temp_v2 = DAT_0047252c;
  temp_v1 = DAT_00472528;
  temp_v3 = DAT_00472524;
  puVar4[8] = DAT_00472520;
  puVar4[9] = temp_v3;
  puVar4[10] = temp_v1;
  puVar4[0xb] = temp_v2;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[3] = 0x3f800000;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[7] = 0x3f800000;
  rt_memcpy(puVar4 + 0x14,param_2,temp_v4);
  temp_v3 = (**(romwright_code **)(temp_v0 + 0x47271c))(param_2);
  puVar4[0xf] = temp_v3;
  (**(romwright_code **)(&DAT_00472718 + temp_v0))(puVar4);
  return puVar4;
}

} /* extern "C" */
