/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f90c4` (_code @ 0x1f90c8, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable29GetEntryWithAoc(void);
int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: dataTable29GetEntryWithAoc. */


void FUN_001f90c4(int param_1,int *param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  unsigned int temp_v6;
  
  temp_v4 = *param_2;
  dataTable29GetEntryWithAoc();
  temp_v1 = 0;
  do {
    temp_v0 = temp_v4 + temp_v1 * 0x180;
    temp_v5 = *(char *)(temp_v0 + 0x34) != '\0';
    temp_v2 = 0;
    if (temp_v5) {
      temp_v2 = *(int *)(temp_v0 + 0x1a8);
    }
    if ((temp_v5 && temp_v2 != 0) && (temp_v2 < 0xb)) {
      temp_v3 = (unsigned int)*(unsigned char *)(temp_v0 + 0xb1);
      temp_v5 = temp_v3 == 0;
      if (temp_v5) {
        temp_v3 = *(unsigned int *)(temp_v0 + 0xb8);
      }
      if (temp_v5 && temp_v3 == 2) {
        temp_v6 = VectorSignedToFloat((int)*(short *)(param_1 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v0 + 0x3c) = temp_v6;
        temp_v6 = VectorSignedToFloat((int)*(short *)(param_1 + 0x16),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v0 + 0x40) = temp_v6;
        temp_v6 = VectorSignedToFloat((int)*(short *)(param_1 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v0 + 0x44) = temp_v6;
        temp_v6 = VectorSignedToFloat((int)*(short *)(param_1 + 0x1a),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v0 + 0x60) = temp_v6;
        *(unsigned int *)(temp_v0 + 0x54) = *(unsigned int *)(temp_v0 + 0x3c);
        *(unsigned int *)(temp_v0 + 0x58) = *(unsigned int *)(temp_v0 + 0x40);
        *(unsigned int *)(temp_v0 + 0x5c) = *(unsigned int *)(temp_v0 + 0x44);
        *(unsigned int *)(temp_v0 + 0xb8) = 0x18;
        *(unsigned int *)(temp_v0 + 0xbc) = 0;
        return;
      }
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x20) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
