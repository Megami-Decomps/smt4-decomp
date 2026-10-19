/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00242f94` (_code @ 0x242f94, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned char DAT_00400001; /* 0x400001 */
extern unsigned char DAT_00400003; /* 0x400003 */
extern signed char DAT_0044ea89; /* 0x44ea89 */
extern unsigned char DAT_0044eb1c; /* 0x44eb1c */

/* Supplied declaration required: FUN_0024dd48. */
/* Supplied declaration required: FUN_0024dd80. */
/* Supplied declaration required: FUN_0024dd90. */
/* Supplied declaration required: FUN_002571b8. */
/* Supplied declaration required: FUN_002bd420. */
/* Supplied declaration required: FUN_002bfde4. */
/* Supplied declaration required: FUN_002c32a0. */


unsigned char * FUN_00242f94(unsigned long long *param_1,unsigned int param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned long long temp_v3;
  
  FUN_002bd420(param_1,&DAT_0044eb1c,8);
  if (DAT_0044ea89 == '\0') {
    FUN_0024dd90(param_3);
  }
  FUN_002bd420(&DAT_0044eb1c,param_1,8);
  FUN_0024dd48(param_3);
  temp_v3 = *param_1;
  temp_v1 = 0x43360000;
  temp_v2 = 0x42200000;
  temp_v0 = 0x10000;
  FUN_002c32a0(0x10000,0x100,0,0x68,0x10,1);
  *(unsigned int *)(temp_v0 + 8) = temp_v1;
  *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
  *(int *)(temp_v0 + 0x10) = (int)temp_v3;
  *(int *)(temp_v0 + 0x14) = (int)((unsigned long long)temp_v3 >> 0x20);
  *(unsigned int *)(temp_v0 + 4) = 0xc;
  *(unsigned int *)(temp_v0 + 0x18) = param_2;
  FUN_002571b8();
  temp_v0 = FUN_002bfde4(1);
  if (temp_v0 == 0) {
    FUN_0024dd80(1);
    temp_v0 = FUN_002bfde4();
    if (temp_v0 == 0) {
      if ((*(unsigned int *)(param_3 + 0x10) & 8) == 0) {
        return &DAT_00400001;
      }
      return &DAT_00400003;
    }
  }
  return (unsigned char *)0x400000;
}
