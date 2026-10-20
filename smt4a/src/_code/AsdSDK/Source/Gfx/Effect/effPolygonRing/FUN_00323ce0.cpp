/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00323ce0` (_code @ 0x323ce0, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(int, int, int, int, int, int);
int rt_memcpy(unsigned int *, unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int DAT_005c1100; /* 0x5c1100 */
extern unsigned int DAT_005c1104; /* 0x5c1104 */
extern unsigned int DAT_005c1108; /* 0x5c1108 */
extern unsigned int DAT_005c110c; /* 0x5c110c */
extern unsigned char DAT_005c12a4; /* 0x5c12a4 */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: rt_memcpy. */


unsigned int * FUN_00323ce0(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = param_1 * 0x18;
  temp_v4 = *(int *)(temp_v0 + 0x5c12b8);
  puVar4 = (unsigned int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,temp_v4 + 0x50,0x10,1);
  puVar4[0x10] = (unsigned int)(puVar4 + 0x14);
  puVar4[0xd] = 0;
  puVar4[0xe] = param_1;
  puVar4[0xc] = 0xffffffff;
  temp_v2 = DAT_005c110c;
  temp_v1 = DAT_005c1108;
  temp_v3 = DAT_005c1104;
  puVar4[8] = DAT_005c1100;
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
  temp_v3 = (**(romwright_code **)(temp_v0 + 0x5c12a8))(param_2);
  puVar4[0xf] = temp_v3;
  (**(romwright_code **)(&DAT_005c12a4 + temp_v0))(puVar4);
  return puVar4;
}

} /* extern "C" */
