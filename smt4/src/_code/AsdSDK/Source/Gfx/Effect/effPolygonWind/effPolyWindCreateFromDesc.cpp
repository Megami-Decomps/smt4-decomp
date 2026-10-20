/* NON_MATCHING: romwright 0.5.0 decompilation of `effPolyWindCreateFromDesc` (_code @ 0x2fae20, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, int, int, int);
int rt_memcpy(unsigned int *, unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned int g_polyDefaultColor; /* 0x472520 */
extern unsigned int DAT_00472524; /* 0x472524 */
extern unsigned int DAT_00472528; /* 0x472528 */
extern unsigned int DAT_0047252c; /* 0x47252c */

extern unsigned int FUN_0024c3d8(void);
extern unsigned int FUN_0024c3f8(int);
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: rt_memcpy. */


unsigned int * effPolyWindCreateFromDesc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v3 = FUN_0024c3d8();
  if ((*(short *)(param_1 + 0x1c) != 1) && (*(short *)(param_1 + 0x1c) == 4)) {
    temp_v3 = 0;
  }
  temp_v4 = FUN_0024c3f8(param_1);
  temp_v5 = (unsigned int)*(unsigned short *)(param_1 + 0xc);
  temp_v6 = *(int *)(temp_v5 * 0x1c + 0x472858);
  puVar6 = (unsigned int *)0x10000;
  memAlloc(0x10000,0x100,0,temp_v6 + 0x50,0x10,1);
  puVar6[0xc] = 0xffffffff;
  puVar6[0x10] = (unsigned int)(puVar6 + 0x14);
  puVar6[0xd] = 0;
  puVar6[0xe] = temp_v5;
  temp_v2 = DAT_0047252c;
  temp_v1 = DAT_00472528;
  temp_v0 = DAT_00472524;
  puVar6[8] = g_polyDefaultColor;
  puVar6[9] = temp_v0;
  puVar6[10] = temp_v1;
  puVar6[0xb] = temp_v2;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[3] = 0x3f800000;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[7] = 0x3f800000;
  rt_memcpy(puVar6 + 0x14,temp_v4,temp_v6);
  temp_v3 = (**(romwright_code **)(temp_v5 * 0x1c + 0x472844))(temp_v4,temp_v3);
  puVar6[0xf] = temp_v3;
  (**(romwright_code **)(temp_v5 * 0x1c + 0x472840))(puVar6);
  return puVar6;
}

} /* extern "C" */
