/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146f68` (_code @ 0x146f68, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_00147060; /* 0x147060 */

/* Supplied declaration required: FUN_001585ec. */
/* Supplied declaration required: FUN_0016e800. */
/* Supplied declaration required: FUN_001883b0. */
/* Supplied declaration required: nn_fs_detail_FileBase_TryGetSize. */
/* Supplied declaration required: nn_fs_detail_FileBase_TryRead. */


unsigned int FUN_00146f68(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  char temp_v1 [4];
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  
  temp_v2 = 0;
  temp_v1[0] = 'D';
  temp_v1[1] = -0x7f;
  temp_v1[2] = 'U';
  temp_v1[3] = '\0';
  puVar2 = (unsigned int *)&temp_v2;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  FUN_001883b0(puVar2,&LAB_00147060,1);
  if (-1 < (int)puVar2) {
    puVar2 = (unsigned int *)&temp_v2;
    nn_fs_detail_FileBase_TryGetSize(puVar2,&temp_v9);
    if ((int)puVar2 < 0) {
      FUN_0016e800();
    }
    if (temp_v10 == 0 && temp_v9 == 4) {
      puVar2 = (unsigned int *)&temp_v2;
      temp_v8 = 0;
      nn_fs_detail_FileBase_TryRead(puVar2,&temp_v7,&temp_v8,4);
      if ((int)puVar2 < 0) {
        FUN_0016e800();
      }
      temp_v0 = temp_v8;
      if (temp_v7 == 4) {
        FUN_001585ec(temp_v1,0);
        return temp_v0;
      }
    }
  }
  FUN_001585ec(temp_v1,0);
  return 0;
}
