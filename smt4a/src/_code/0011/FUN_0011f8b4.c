/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011f8b4` (_code @ 0x11f8b4, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned char sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_0011f954; /* 0x11f954 */

extern unsigned int *FUN_002e7908(unsigned char *, unsigned int *);
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int FUN_002ea6fc(int);
extern unsigned int FUN_002ecf28(void);
/* Supplied declaration required: FUN_003054c0. */
extern int FUN_003054ce(unsigned int);
/* Supplied declaration required: FUN_00305658. */
/* Supplied declaration required: FUN_0030566e. */
/* Supplied declaration required: FUN_00310784. */


void FUN_0011f8b4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [4];
  int temp_v3;
  unsigned int uStack_28;
  int temp_v4;
  unsigned char temp_v5 [20];
  
  if (*(char *)(param_1 + 0x328) != '\0') {
    temp_v4 = 0x80010004;
    puVar1 = (unsigned int *)FUN_002e7908(temp_v2,(unsigned int *)&temp_v4);
  }
  else {
    if (*(char *)(param_1 + 0xf0) == '\x02') {
      temp_v2[0] = 1;
      temp_v0 = FUN_002ea6fc(param_1 + 0x158);
      if (temp_v0 != 0) {
        temp_v0 = FUN_003054ce(*(unsigned int *)(param_1 + 400));
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 400) + 0x78) + 0xc) =
             *(unsigned int *)(temp_v0 + 0x1c);
        FUN_003054c0(*(int *)(param_1 + 400),*(unsigned int *)(*(int *)(param_1 + 400) + 0x78));
        FUN_00305658();
        temp_v1 = FUN_002ecf28();
        FUN_0030566e(temp_v1,param_1 + 0x2f0);
        temp_v1 = FUN_002ea3c0(temp_v5,0x11fb5d,0,&LAB_0011f954);
        FUN_002ea3d0(param_1,temp_v1);
        return;
      }
    }
    temp_v3 = *(unsigned int *)(param_1 + 0x158);
    uStack_28 = *(unsigned int *)(param_1 + 0x15c);
    temp_v4 = *(unsigned int *)(param_1 + 0x160);
    puVar1 = (unsigned int *)&temp_v3;
  }
  FUN_00310784(param_1,puVar1);
  return;
}
