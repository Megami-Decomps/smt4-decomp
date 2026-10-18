/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f474c` (_code @ 0x1f474c, 0x168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001f474c_arg1 fn_001f474c_arg1;
struct fn_001f474c_arg1 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 *field_0x18; /* +0x18 */
    undefined4 *field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char LAB_001f48d0; /* 0x1f48d0 */
extern unsigned char DAT_00636d20; /* 0x636d20 */

/* Supplied declaration required: FUN_001642e4. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_003168b8. */
extern int FUN_0034101c(fn_001f474c_arg1 *);
extern int FUN_0036baec(fn_001f474c_arg1 *);


void FUN_001f474c(unsigned int param_1,fn_001f474c_arg1 *param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int *puVar4;
  int temp_v2;
  int temp_v3;
  
  FUN_002e6354((int)param_2 * 0x284 + 0x635900,0x284);
  FUN_002e6354((int)param_2 * 0x284 + 0x635e08,0x284);
  FUN_002e6354((int)param_2 * 0x284 + 0x636310,0x284);
  FUN_002e6354((int)param_2 * 0x284 + 0x636818,0x284);
  temp_v0 = (int)param_2 * 0x14;
  *(unsigned int *)(&DAT_00636d20 + temp_v0) = 0;
  *(unsigned int *)(temp_v0 + 0x636d24) = 0;
  *(unsigned int *)(temp_v0 + 0x636d28) = 0;
  *(unsigned int *)(temp_v0 + 0x636d2c) = 0;
  *(unsigned int *)(temp_v0 + 0x636d30) = 0;
  temp_v1 = FUN_0036baec(param_2);
  piVar3 = *(int **)(temp_v1 + 0x18);
  temp_v2 = 1;
  temp_v0 = (*(int *)(temp_v1 + 0x1c) - (int)piVar3) >> 2;
  if (temp_v0 + 1 >= 2) {
    do {
      temp_v3 = *piVar3;
      temp_v2 = temp_v2 + 1;
      piVar3 = piVar3 + 1;
      if (temp_v3 != 0) {
        *(unsigned int *)(temp_v3 + 0xc) = 0;
      }
    } while (temp_v2 < temp_v0 + 1);
  }
  *(unsigned int *)(temp_v1 + 0x1c) = *(unsigned int *)(temp_v1 + 0x18);
  temp_v1 = FUN_0034101c(param_2);
  temp_v2 = 1;
  piVar3 = *(int **)(temp_v1 + 0x18);
  temp_v0 = (*(int *)(temp_v1 + 0x1c) - (int)piVar3) >> 2;
  if (temp_v0 + 1 >= 2) {
    do {
      temp_v3 = *piVar3;
      temp_v2 = temp_v2 + 1;
      piVar3 = piVar3 + 1;
      if (temp_v3 != 0) {
        *(unsigned int *)(temp_v3 + 0xc) = 0;
      }
    } while (temp_v2 < temp_v0 + 1);
  }
  *(unsigned int *)(temp_v1 + 0x1c) = *(unsigned int *)(temp_v1 + 0x18);
  FUN_001642e4(param_1,0,1,0x80);
  *(unsigned int *)((int)param_2 * 4 + 0x5b3bd8) = param_1;
  puVar4 = (unsigned int *)0x4;
  FUN_00178b04(4,&LAB_001f48d0,0x48b);
  if (puVar4 != (unsigned int *)0x0) {
    *puVar4 = *(unsigned int *)((int)param_2 * 4 + 0x5b3bd8);
  }
  *(unsigned int **)((int)param_2 * 4 + 0x5b3be0) = puVar4;
  FUN_003168b8();
  return;
}
