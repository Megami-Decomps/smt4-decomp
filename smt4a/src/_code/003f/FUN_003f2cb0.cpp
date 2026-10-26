/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f2cb0` (_code @ 0x3f2cb8, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int vcallSlot12IfValid(...);
int FUN_0019059c(...);
int FUN_001913e4(...);
int sysFatalBreak(...);
int __aeabi_vec_dtor(...);
int FUN_0018fee4(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_0040167c(...); /* 0x40167c */
extern int FUN_00413094(...); /* 0x413094 */
extern int soundHandleDetachReturn(...); /* 0x45b830 */
extern int FUN_0045bc3c(...); /* 0x45bc3c */
extern int FUN_00467080(...); /* 0x467080 */
extern unsigned char DAT_0055bd6c; /* 0x55bd6c */
extern unsigned char DAT_0055bda8; /* 0x55bda8 */
extern unsigned char DAT_0055bdc8; /* 0x55bdc8 */
extern unsigned char DAT_0055c0fc; /* 0x55c0fc */

/* Supplied declaration required: vcallSlot12IfValid. */
/* Supplied declaration required: FUN_0019059c. */
/* Supplied declaration required: FUN_001913e4. */
/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: __aeabi_vec_dtor. */
extern int FUN_0045c350(int);
extern int FUN_0045e8fc(int);
/* Supplied declaration required: FUN_0018fee4. */


void FUN_003f2cb0(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  __aeabi_vec_dtor(param_1 - 0x1ec,soundHandleDetachReturn,4,0x10);
  __aeabi_vec_dtor(param_1 - 0xa6c,FUN_0045bc3c,0x88,0x10);
  *(unsigned char **)(param_1 - 0xaa8) = &DAT_0055bda8;
  *(unsigned char **)(param_1 - 0xaa4) = &DAT_0055bdc8;
  __aeabi_vec_dtor(param_1 - 0xb98,FUN_00413094,0x3c,4);
  __aeabi_vec_dtor(param_1 - 0xc18,FUN_00467080,0x3c,2);
  __aeabi_vec_dtor(param_1 - 0xdd8,FUN_0040167c,0x70,4);
  temp_v0 = FUN_0045c350(param_1 - 0x1050);
  temp_v0 = FUN_0045e8fc(temp_v0 - 0x118);
  puVar2 = (unsigned int *)(temp_v0 - 0x194);
  *puVar2 = (unsigned int)&DAT_0055c0fc;
  if (*(char *)(temp_v0 - 4) != '\0') {
    FUN_0019059c(temp_v0 - 0x78);
    FUN_001913e4(temp_v0 - 0x58);
    *(unsigned char *)(temp_v0 - 4) = 0;
  }
  FUN_0018fee4(puVar2);
  *(unsigned int *)(temp_v0 - 8) = 0xffffffff;
  if ((*(unsigned int *)(temp_v0 - 0x74) & 0xfffffffe) != 0) {
    if ((*(unsigned int *)(temp_v0 - 0x74) & 1) != 0) {
      sysFatalBreak();
    }
    vcallSlot12IfValid(*(unsigned int *)(temp_v0 - 0x74) & 0xfffffffe);
    *(unsigned int *)(temp_v0 - 0x74) = 0;
  }
  *puVar2 = (unsigned int)&DAT_0055bd6c;
  return;
}

} /* extern "C" */
