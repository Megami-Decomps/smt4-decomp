/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113c60` (_code @ 0x113c60, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013175e(int *, int *, int *, int *);
int asdOperatorDeleteArray(...);
int FUN_002fe97c(int *, unsigned int, int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_005595c8; /* 0x5595c8 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0013175e. */
/* Supplied declaration required: asdOperatorDeleteArray. */
extern int onlineStringDestroy(unsigned int *);
extern int FUN_002ea00c(int);
extern int FUN_002f8760(int);
/* Supplied declaration required: FUN_002fe97c. */
extern int _ZN9Obj558aacD1Ev(int);


unsigned long long FUN_00113c60(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  int temp_v2;
  int temp_v3;
  int uStack_10;
  
  *param_1 = (unsigned int)&DAT_005595c8;
  temp_v2 = param_2;
  temp_v3 = param_3;
  uStack_10 = param_4;
  temp_v0 = onlineStringDestroy(param_1 + 0x44);
  piVar4 = (int *)(temp_v0 - 0x1c);
  temp_v1 = *(int *)(temp_v0 - 0xc);
  if (temp_v1 != 0) {
    temp_v2 = *(unsigned int *)(temp_v1 + 8);
    temp_v3 = temp_v1;
    FUN_0013175e(&uStack_10,piVar4,&temp_v2,&temp_v3);
    FUN_002fe97c(piVar4,*(unsigned int *)(temp_v0 - 0xc),0);
    while (piVar3 = (int *)*piVar4, piVar3 != (int *)0x0) {
      *piVar4 = *piVar3;
      asdOperatorDeleteArray(piVar3[2]);
      asdOperatorDeleteArray(piVar3);
    }
  }
  temp_v0 = FUN_002ea00c(temp_v0 - 0x90);
  temp_v0 = _ZN9Obj558aacD1Ev(temp_v0 - 0x30);
  temp_v0 = _ZN9Obj558aacD1Ev(temp_v0 - 0x1c);
  temp_v0 = FUN_002f8760(temp_v0 - 0x18);
  return romwright_piece_4_4(temp_v2,temp_v0 - 0x1c);
}

} /* extern "C" */
