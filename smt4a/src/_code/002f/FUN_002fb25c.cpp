/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb25c` (_code @ 0x2fb25c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(int *, int *);
int _ZN9Obj55b28cD1Ev(int *);
int listIteratorNext3(int **);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char g_flagBlock; /* 0x594958 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: listIteratorNext3. */
extern int wordRefsDiffer_002fe9f2(int **, int *);


unsigned long long FUN_002fb25c(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *temp_v1;
  int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  temp_v1 = param_1;
  uStack_1c = param_2;
  if ((*(signed char *)((unsigned char *)&g_flagBlock + 0x5)) != '\0') {
    uStack_18 = param_3;
    uStack_14 = param_4;
    _ZN9Obj55b28cC1EPv(&uStack_1c,param_1 + 6);
    temp_v1 = (int *)param_1[2];
    while (temp_v0 = wordRefsDiffer_002fe9f2(&temp_v1,param_1 + 4), temp_v0 != 0) {
      (**(romwright_code **)(*temp_v1 + 0x10))(temp_v1,param_2);
      listIteratorNext3(&temp_v1);
    }
    _ZN9Obj55b28cD1Ev(&uStack_1c);
  }
  return romwright_piece_4_4(uStack_1c,temp_v1);
}

} /* extern "C" */
