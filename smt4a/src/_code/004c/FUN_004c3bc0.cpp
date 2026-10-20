/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c3bc0` (_code @ 0x4c3bc0, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_0034a290(void);
int FUN_003f0e20(...);
int FUN_004c39b0(int, short [14]);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int DAT_00571428; /* 0x571428 */
extern unsigned int DAT_0057142c; /* 0x57142c */

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_0034a290. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004c39b0. */


void FUN_004c3bc0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  short temp_v1 [14];
  
  temp_v0 = FUN_0014aa78();
  FUN_003f0e20(temp_v0,param_1);
  if (temp_v0 != 0) {
    puVar2 = (unsigned int *)FUN_0014aa78();
    FUN_003f0e20(puVar2,param_2);
    if (puVar2 != (unsigned int *)0x0) {
      if ((puVar2[1] & DAT_0057142c) != 0 || (*puVar2 & DAT_00571428) != 0) {
        temp_v1[0] = 0;
        temp_v1[1] = 0;
        temp_v1[2] = 0;
        temp_v1[3] = 0;
        temp_v1[4] = 0;
        temp_v1[5] = 0;
        temp_v1[6] = 0;
        temp_v1[7] = 0;
        temp_v1[8] = 0;
        temp_v1[9] = 0;
        FUN_004c39b0(temp_v0,temp_v1);
        temp_v0 = 0;
        do {
          if (temp_v1[temp_v0] != 0) {
            FUN_0034a290();
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 9);
      }
    }
  }
  return;
}

} /* extern "C" */
