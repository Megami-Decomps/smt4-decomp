/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003be670` (_code @ 0x3be670, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022abe0(int, unsigned short [16]);
int btlMainFindEntryByListedId(...);
int FUN_00283e48(void);
int btlGetMainState(void);
int VectorUnsignedToFloat(int, int);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0022abe0. */
/* Supplied declaration required: btlMainFindEntryByListedId. */
/* Supplied declaration required: FUN_00283e48. */
/* Supplied declaration required: btlGetMainState. */


void FUN_003be670(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned short temp_v2;
  unsigned int in_fpscr;
  unsigned short temp_v3 [16];
  
  temp_v0 = btlGetMainState();
  btlMainFindEntryByListedId(temp_v0,param_1);
  if (temp_v0 != 0) {
    puVar2 = (unsigned int *)btlGetMainState();
    btlMainFindEntryByListedId(puVar2,param_2);
    if ((puVar2 != (unsigned int *)0x0) && ((*puVar2 & 0x100) != 0)) {
      temp_v3[0] = 0;
      temp_v3[1] = 0;
      temp_v3[2] = 0;
      temp_v3[3] = 0;
      temp_v3[4] = 0;
      temp_v3[5] = 0;
      temp_v3[6] = 0;
      temp_v3[7] = 0;
      temp_v3[8] = 0;
      temp_v3[9] = 0;
      FUN_0022abe0(temp_v0,temp_v3);
      temp_v2 = 0;
      temp_v0 = 0;
      do {
        temp_v1 = (unsigned int)temp_v3[temp_v0];
        if ((temp_v1 != 0) && (FUN_00283e48(), temp_v1 != 0)) {
          temp_v2 = *(unsigned short *)(temp_v1 + 0x36) + temp_v2;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 9);
      if (temp_v2 != 0) {
        VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      }
    }
  }
  return;
}

} /* extern "C" */
