/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf408` (_code @ 0x2cf408, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_005c1100; /* 0x5c1100 */
extern unsigned int DAT_005c1104; /* 0x5c1104 */
extern unsigned int DAT_005c1108; /* 0x5c1108 */
extern unsigned int DAT_005c110c; /* 0x5c110c */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: rt_memcpy. */


unsigned int * FUN_002cf408(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v6 = *(unsigned int *)(param_1 + 0x40);
  temp_v4 = *(unsigned int *)(param_1 + 0x38);
  temp_v5 = *(int *)(temp_v4 * 0x1c + 0x5c1394);
  puVar4 = (unsigned int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,temp_v5 + 0x50,0x10,1);
  puVar4[0x10] = (unsigned int)(puVar4 + 0x14);
  puVar4[0xc] = 0xffffffff;
  puVar4[0xd] = 0;
  puVar4[0xe] = temp_v4;
  temp_v2 = DAT_005c110c;
  temp_v1 = DAT_005c1108;
  temp_v0 = DAT_005c1104;
  temp_v3 = DAT_005c1100;
  *puVar4 = 0;
  puVar4[0xb] = temp_v2;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[8] = temp_v3;
  puVar4[9] = temp_v0;
  puVar4[10] = temp_v1;
  puVar4[3] = 0x3f800000;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[7] = 0x3f800000;
  rt_memcpy(puVar4 + 0x14,temp_v6,temp_v5);
  temp_v3 = (**(romwright_code **)(*(int *)(param_1 + 0x38) * 0x1c + 0x5c1388))(param_1);
  puVar4[0xf] = temp_v3;
  (**(romwright_code **)(*(int *)(param_1 + 0x38) * 0x1c + 0x5c137c))(puVar4);
  return puVar4;
}
