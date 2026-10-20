/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cb8d8` (_code @ 0x2cb8d8, 0x1e8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int refIsNullOrZero(...);
int FUN_002bb5a4(...);
int FUN_002be624(...);
int rt_aeabi_memclr(...);
int asdFatalError(...);
int FUN_002c618c(...);
int builtin_strncpy(...);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
} param_1_stack;

extern signed char g_asdLoadFileUseRawPaths; /* 0x465040 */

/* Unsupported intrinsic, declaration required: builtin_strncpy (CALLOTHER). */
extern int asdLoadFileIsPatched(unsigned int);
extern int asdLoadFileHasDevice(unsigned int);
extern int FUN_002b90c8(unsigned char *, unsigned int, unsigned int *);
/* Supplied declaration required: refIsNullOrZero. */
/* Supplied declaration required: FUN_002bb5a4. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: rt_aeabi_memclr. */
/* Supplied declaration required: asdFatalError. */
/* Supplied declaration required: FUN_002c618c. */
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);


unsigned int FUN_002cb8d8(unsigned int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  unsigned int *puVar3;
  unsigned short *puVar4;
  unsigned char *puVar5;
  unsigned short temp_v1 [264];
  char temp_v2 [4];
  unsigned int temp_v3 [5];
  unsigned char temp_v4 [264];
  int temp_v5;
  unsigned int temp_v6;
  
  puVar4 = temp_v1;
  rt_aeabi_memclr(temp_v4,0x100);
  if ((g_asdLoadFileUseRawPaths != '\0') || (temp_v0 = asdLoadFileHasDevice(param_1), temp_v0 != 0)) {
    FUN_002be624(temp_v4,param_1);
  }
  else {
    temp_v0 = asdLoadFileIsPatched(param_1);
    if (temp_v0 != 0) {
      FUN_002be624(temp_v4,"patch:/%s",param_1);
    }
    else {
      FUN_002be624(temp_v4,"rom:/%s",param_1);
    }
  }
  temp_v3[0] = 0;
  temp_v3[1] = 0;
  temp_v3[2] = 0;
  temp_v3[3] = 0;
  temp_v3[4] = 0;
  puVar5 = temp_v4;
  puVar3 = temp_v3;
  builtin_strncpy(temp_v2,"h\fB",4);
  temp_v5 = 0;
  temp_v6 = 0;
  refIsNullOrZero(&temp_v5);
  while ((temp_v0 = FUN_002b90c8(puVar5,0x105,(unsigned int *)&temp_v5), temp_v0 != 0 &&
         (puVar2 = puVar4, FUN_002c618c(puVar4,puVar5,temp_v0,&temp_v5), puVar2 != (unsigned short *)0x0)
         )) {
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + temp_v0;
  }
  *puVar4 = 0;
  temp_v3[3] = 0;
  temp_v3[4] = 0;
  temp_v3[1] = 0;
  temp_v3[2] = 0;
  FUN_002bb5a4(puVar3,temp_v1,1);
  if ((temp_v3[0] & 0xfffffffe) != 0) {
    if ((temp_v3[0] & 1) != 0) {
      asdFatalError();
    }
    nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v3[0] & 0xfffffffe);
    temp_v3[0] = 0;
  }
  if (((unsigned int)puVar3 & 0x80000000) == 0) {
    if ((temp_v3[0] & 0xfffffffe) != 0) {
      if ((temp_v3[0] & 1) != 0) {
        asdFatalError();
      }
      nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v3[0] & 0xfffffffe);
    }
    return 1;
  }
  if ((temp_v3[0] & 0xfffffffe) != 0) {
    if ((temp_v3[0] & 1) != 0) {
      asdFatalError();
    }
    nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v3[0] & 0xfffffffe);
  }
  return 0;
}

} /* extern "C" */
