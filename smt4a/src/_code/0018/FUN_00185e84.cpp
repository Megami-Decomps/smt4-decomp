/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00185e84` (_code @ 0x185e84, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017ffa8(int, int, unsigned int, int, int, int);
int FUN_00180310(...);
int FUN_00183bb0(void);
int drawSetColorFromRGBA8(void);
int FUN_0019d390(void);
int dataTable04FindById(void);

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

extern unsigned char LAB_00186000; /* 0x186000 */
extern unsigned char LAB_00186004; /* 0x186004 */

/* Supplied declaration required: FUN_0017ffa8. */
/* Supplied declaration required: FUN_00180310. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183bb0. */
extern unsigned int requestKindToId(unsigned int);
/* Supplied declaration required: drawSetColorFromRGBA8. */
extern int idIsAbove400(void);
/* Supplied declaration required: FUN_0019d390. */
extern int FUN_0019f240(unsigned int);
/* Supplied declaration required: dataTable04FindById. */


void FUN_00185e84(unsigned int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (param_1 == 0xffffffff) {
    temp_v0 = 0x3ef;
  }
  else if (param_1 == 0xfffffffe) {
    temp_v0 = 0x3f0;
  }
  else if (param_1 == 0xfffffffd) {
    temp_v0 = 0x3f6;
  }
  else {
    if (param_1 == 0xffffff9d) {
      return;
    }
    temp_v1 = idIsAbove400();
    if (temp_v1 != 0) {
      temp_v0 = 0x419;
    }
    else {
      temp_v2 = param_1;
      dataTable04FindById();
      if (temp_v2 == 0) {
        temp_v0 = 1000;
      }
      else {
        temp_v0 = requestKindToId(*(unsigned int *)(temp_v2 + 0x28) & 0x1f);
      }
    }
  }
  FUN_0017ffa8(2,0xb,temp_v0,param_2,param_3,param_4);
  if (param_5 != 0) {
    temp_v1 = FUN_0019f240(param_1);
    temp_v2 = (temp_v1 + param_6) & 0xff;
    FUN_0019d390();
    if ((int)param_1 < (int)temp_v2) {
      temp_v2 = param_1 & 0xff;
    }
    if (temp_v2 >= 2) {
      drawSetColorFromRGBA8();
      temp_v1 = FUN_001834a4(0xb,0x402);
      FUN_00180310(2,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,0,1,
                   param_4 + 1,&LAB_00186000);
      temp_v1 = FUN_001834a4(0xb,0x401);
      FUN_00180310(2,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,0,1,
                   param_4 + 1,&LAB_00186004,temp_v2 - 1);
      FUN_00183bb0();
      return;
    }
  }
  return;
}

} /* extern "C" */
