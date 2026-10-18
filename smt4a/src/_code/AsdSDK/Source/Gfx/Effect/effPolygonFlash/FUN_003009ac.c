/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003009ac` (_code @ 0x3009ac, 0x128 bytes) from smt4a.cxi.
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
extern unsigned char DAT_005c11a8; /* 0x5c11a8 */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_0033864c. */
/* Supplied declaration required: rt_memcpy. */


unsigned int * FUN_003009ac(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v3 = *(unsigned int *)(param_1 + 0x38);
  temp_v4 = *(unsigned int *)(param_1 + 0x40);
  if (*(int *)(temp_v3 * 0x1c + 0x5c11b4) != 0) {
    temp_v5 = *(int *)((temp_v3 & 0xffff) * 0x1c + 0x5c11c0);
    puVar5 = (unsigned int *)0x10000;
    FUN_00167ab4(0x10000,0x100,0,temp_v5 + 0x50,0x10,1);
    puVar5[0xc] = 0xffffffff;
    puVar5[0x10] = (unsigned int)(puVar5 + 0x14);
    puVar5[0xd] = 0;
    puVar5[0xe] = temp_v3 & 0xffff;
    temp_v2 = DAT_005c110c;
    temp_v1 = DAT_005c1108;
    temp_v0 = DAT_005c1104;
    puVar5[8] = DAT_005c1100;
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
    temp_v4 = (**(romwright_code **)(*(int *)(param_1 + 0x38) * 0x1c + 0x5c11b4))(param_1);
    puVar5[0xf] = temp_v4;
    (**(romwright_code **)(&DAT_005c11a8 + *(int *)(param_1 + 0x38) * 0x1c))(puVar5);
  }
  else {
    puVar5 = (unsigned int *)(temp_v3 & 0xffff);
    FUN_0033864c(puVar5,temp_v4,0);
  }
  return puVar5;
}
