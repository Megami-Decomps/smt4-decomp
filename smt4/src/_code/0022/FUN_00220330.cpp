/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00220330` (_code @ 0x220330, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00254824(unsigned char *);
int FUN_00254884(int, unsigned char [496], int);
int FUN_002ad80c(unsigned char [496], unsigned int, unsigned int, int);
int FUN_002ad888(void);
int FUN_002bb5a4(unsigned char *, unsigned char [496], int);
int FUN_002c3510(void);
int asdFatalError(void);

/* Supplied declaration required: FUN_00254824. */
/* Supplied declaration required: FUN_00254884. */
/* Supplied declaration required: FUN_002ad80c. */
/* Supplied declaration required: FUN_002ad888. */
/* Supplied declaration required: FUN_002bb5a4. */
/* Supplied declaration required: FUN_002c3510. */
/* Supplied declaration required: asdFatalError. */
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);


unsigned char * FUN_00220330(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 8 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  unsigned char temp_v1 [496];
  
  puVar1 = temp_v1;
  FUN_00254884(param_2,temp_v1,1);
  if (param_2 == 0) {
    FUN_002c3510();
    return (unsigned char *)0xe0e046bc;
  }
  FUN_002ad888();
  FUN_002ad80c(temp_v1,temp_v0,param_3,0);
  FUN_002c3510();
  if ((int)puVar1 < 0) {
    FUN_00254824(puVar1);
    return puVar1;
  }
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  puVar1 = (unsigned char *)(param_1 + 8);
  *(unsigned int *)(param_1 + 0x10) = 0;
  FUN_002bb5a4(puVar1,temp_v1,2);
  FUN_002c3510();
  if ((int)puVar1 < 0) {
    FUN_00254824(puVar1);
    if ((*(unsigned int *)(param_1 + 8) & 0xfffffffe) != 0) {
      if ((*(unsigned int *)(param_1 + 8) & 1) != 0) {
        asdFatalError();
      }
      nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(*(unsigned int *)(param_1 + 8) & 0xfffffffe);
      *(unsigned int *)(param_1 + 8) = 0;
    }
    return puVar1;
  }
  FUN_002c3510();
  return (unsigned char *)0x0;
}

} /* extern "C" */
