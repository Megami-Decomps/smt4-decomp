/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002113c0` (_code @ 0x2113c0, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026f784(void);
int FUN_0026f800(int, int);
int FUN_00297060(int, unsigned int);
int FUN_002b2368(int);
int FUN_002c3f5c(...);
int FUN_002c40f8(unsigned char *, int *, int, int, unsigned int, unsigned int);
int FUN_002c415c(unsigned int);
int FUN_002c526c(void);
int FUN_002c5728(int);
int FUN_002c5758(int);
int FUN_002e181c(int);
int software_interrupt(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_0043daa8; /* 0x43daa8 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0026f784. */
/* Supplied declaration required: FUN_0026f800. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c3f5c. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: FUN_002c5728. */
/* Supplied declaration required: FUN_002c5758. */
/* Supplied declaration required: FUN_002e181c. */
extern void nn_os_Thread_FinalizeImpl(unsigned int);


unsigned int FUN_002113c0(int param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  int uStack_20;
  unsigned char temp_v2 [4];
  
  temp_v1 = 0;
  if (*(int *)(param_1 + 0xd68) == 2) {
    temp_v0 = DAT_0043daa8 + 0xa0;
    FUN_0026f784();
    if (temp_v0 != 0) {
      *(unsigned char *)(param_1 + 0xd65) = 1;
      uStack_20 = *(unsigned int *)(param_1 + 0xd70);
      puVar2 = temp_v2;
      FUN_002c40f8(puVar2,&uStack_20,1,0,0xffffffff,0xffffffff);
      if ((int)puVar2 < 0) {
        FUN_002c526c();
      }
      *(unsigned char *)(param_1 + 0xd74) = 1;
      nn_os_Thread_FinalizeImpl(param_1 + 0xd70);
      if (*(int *)(param_1 + 0xd70) != 0) {
        software_interrupt(0x23);
        *(unsigned int *)(param_1 + 0xd70) = 0;
      }
      FUN_002c3f5c(*(unsigned int *)(param_1 + 0xd6c));
      temp_v0 = *(int *)(param_1 + 0xd6c);
      if (temp_v0 != 0) {
        FUN_002c3f5c();
        FUN_002b2368(temp_v0);
      }
      *(unsigned int *)(param_1 + 0xd6c) = 0;
      FUN_002c415c(*(unsigned int *)(param_1 + 0xd78));
      *(unsigned int *)(param_1 + 0xd78) = 0;
      FUN_002c5758(2);
      FUN_002c5728(2);
      FUN_002e181c(DAT_0043daa8 + 0xa0);
      FUN_0026f800(DAT_0043daa8 + 0xa0,0);
      temp_v0 = *(int *)(param_1 + 0xcf4);
      FUN_00297060(temp_v0,*(unsigned int *)(param_1 + 0xcf8));
      *(int *)(param_1 + 0xd04) = temp_v0;
      *(unsigned int *)(temp_v0 + 0x108) = 2;
      temp_v1 = 2;
      *(unsigned int *)(param_1 + 0xd2c) = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
