/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033864c` (_code @ 0x33864c, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(int, int, int, int, int, int);
int rt_memcpy(unsigned int *, unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned int DAT_005c1100; /* 0x5c1100 */
extern unsigned int DAT_005c1104; /* 0x5c1104 */
extern unsigned int DAT_005c1108; /* 0x5c1108 */
extern unsigned int DAT_005c110c; /* 0x5c110c */
extern unsigned char DAT_005c11a8; /* 0x5c11a8 */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: rt_memcpy. */


unsigned int * FUN_0033864c(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = *(int *)(param_1 * 0x1c + 0x5c11c0);
  puVar3 = (unsigned int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,temp_v3 + 0x50,0x10,1);
  puVar3[0xc] = 0xffffffff;
  puVar3[0x10] = (unsigned int)(puVar3 + 0x14);
  puVar3[0xd] = 0;
  puVar3[0xe] = param_1;
  temp_v1 = DAT_005c110c;
  temp_v0 = DAT_005c1108;
  temp_v2 = DAT_005c1104;
  puVar3[8] = DAT_005c1100;
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
  rt_memcpy(puVar3 + 0x14,param_2,temp_v3);
  temp_v2 = (**(romwright_code **)(param_1 * 0x1c + 0x5c11ac))(param_2,param_3);
  puVar3[0xf] = temp_v2;
  (**(romwright_code **)(&DAT_005c11a8 + param_1 * 0x1c))(puVar3);
  return puVar3;
}

} /* extern "C" */
