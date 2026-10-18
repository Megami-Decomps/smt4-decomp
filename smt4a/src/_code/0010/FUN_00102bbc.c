/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102bbc` (_code @ 0x102bbc, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int *FUN_002e3c36(unsigned int, unsigned int);
extern int FUN_002e3f88(unsigned char *, short, unsigned int *);
/* Supplied declaration required: rt_memcpy. */


int FUN_00102bbc(int param_1,short *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [8];
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  short *psStack_1c;
  unsigned int temp_v6;
  
  temp_v1 = 0;
  temp_v5 = param_1;
  psStack_1c = param_2;
  temp_v6 = param_3;
  puVar1 = (unsigned int *)FUN_002e3c36(0,3);
  while( 1 ) {
    if (puVar1 != (unsigned int *)0x0) {
      temp_v4 = puVar1[1];
      temp_v3 = *puVar1;
    }
    temp_v0 = FUN_002e3f88(temp_v2,*param_2,puVar1);
    if (temp_v0 == -1) {
      return -1;
    }
    if (temp_v5 != 0) {
      if (temp_v6 < (unsigned int)(temp_v0 + temp_v1)) {
        if (puVar1 == (unsigned int *)0x0) {
          return temp_v1;
        }
        *puVar1 = temp_v3;
        puVar1[1] = temp_v4;
        return temp_v1;
      }
      rt_memcpy(temp_v5 + temp_v1,temp_v2,temp_v0);
    }
    temp_v1 = temp_v1 + temp_v0;
    if (*param_2 == 0) break;
    param_2 = param_2 + 1;
  }
  return temp_v1 - 1;
}
