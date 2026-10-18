/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002402c4` (_code @ 0x2402c4, 0x16c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern unsigned char LAB_00240430; /* 0x240430 */
extern unsigned char LAB_0024043c; /* 0x24043c */

/* Unsupported intrinsic, declaration required: builtin_strncpy (CALLOTHER). */
extern int FUN_002b0404(unsigned int);
extern int FUN_002b90c8(unsigned char *, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002b90e6. */
/* Supplied declaration required: FUN_002bb5a4. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c52f8. */
/* Supplied declaration required: FUN_002c618c. */
/* Supplied declaration required: nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile. */


int FUN_002402c4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  unsigned int *puVar3;
  unsigned short *puVar4;
  unsigned char *puVar5;
  unsigned short temp_v1 [264];
  unsigned char temp_v2 [256];
  char temp_v3 [4];
  unsigned int temp_v4 [7];
  int temp_v5;
  unsigned int temp_v6;
  
  puVar4 = temp_v1;
  FUN_002c4938(temp_v2,0x100);
  temp_v0 = FUN_002b0404(param_2);
  if (temp_v0 != 0) {
    FUN_002be624(temp_v2,&LAB_00240430,param_2);
  }
  else {
    FUN_002be624(temp_v2,&LAB_0024043c,param_2);
  }
  temp_v4[0] = 0;
  temp_v4[1] = 0;
  temp_v4[2] = 0;
  temp_v4[3] = 0;
  temp_v4[4] = 0;
  puVar5 = temp_v2;
  puVar3 = temp_v4;
  builtin_strncpy(temp_v3,"h\fB",4);
  temp_v5 = 0;
  temp_v6 = 0;
  FUN_002b90e6(&temp_v5);
  while ((temp_v0 = FUN_002b90c8(puVar5,0x105,(unsigned int *)&temp_v5), temp_v0 != 0 &&
         (puVar2 = puVar4, FUN_002c618c(puVar4,puVar5,temp_v0,&temp_v5), puVar2 != (unsigned short *)0x0)
         )) {
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + temp_v0;
  }
  *puVar4 = 0;
  temp_v4[3] = 0;
  temp_v4[4] = 0;
  temp_v4[1] = 0;
  temp_v4[2] = 0;
  FUN_002bb5a4(puVar3,temp_v1,1);
  if ((temp_v4[0] & 0xfffffffe) != 0) {
    if ((temp_v4[0] & 1) != 0) {
      FUN_002c52f8();
    }
    nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v4[0] & 0xfffffffe);
    temp_v4[0] = 0;
  }
  if ((temp_v4[0] & 0xfffffffe) != 0) {
    if ((temp_v4[0] & 1) != 0) {
      FUN_002c52f8();
    }
    nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v4[0] & 0xfffffffe);
  }
  return ((int)puVar3 >> 0x1f) + 1;
}
