/* NON_MATCHING: romwright 0.5.0 decompilation of `onlineUrlDestroy` (_code @ 0x2ea9dc, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(...);
int onlineUrlSetText(unsigned int *, int);
int FUN_002e967e(int *, int *, int *, int *);
int FUN_002e99f8(void);
int FUN_002e9a3c(int *, unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_0055852c; /* 0x55852c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: onlineUrlSetText. */
/* Supplied declaration required: FUN_002e967e. */
/* Supplied declaration required: FUN_002e99f8. */
/* Supplied declaration required: FUN_002e9a3c. */


unsigned long long onlineUrlDestroy(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  int uStack_10;
  
  *param_1 = (unsigned int)&DAT_0055852c;
  temp_v0 = param_2;
  temp_v1 = param_3;
  uStack_10 = param_4;
  onlineUrlSetText(param_1,0);
  if ((int *)param_1[1] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[1] + 4))();
  }
  param_1 = param_1 + 0x11;
  FUN_002e99f8();
  param_1 = param_1 + -7;
  FUN_002e99f8();
  piVar2 = (int *)(param_1 + -7);
  temp_v1 = param_1[-3];
  if (temp_v1 != 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 8);
    FUN_002e967e(&uStack_10,piVar2,&temp_v0,&temp_v1);
    FUN_002e9a3c(piVar2,param_1[-3],0);
    while (piVar1 = (int *)*piVar2, piVar1 != (int *)0x0) {
      *piVar2 = *piVar1;
      asdOperatorDeleteArray(piVar1[2]);
      asdOperatorDeleteArray(piVar1);
    }
  }
  return romwright_piece_4_4(temp_v0,param_1 + -10);
}

} /* extern "C" */
