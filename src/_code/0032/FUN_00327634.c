/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00327634` (_code @ 0x327634, 0x1c0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_001dfb60(); /* 0x1dfb60 */
extern int FUN_002db8c4(); /* 0x2db8c4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00245b44. */
extern int FUN_002bf6d0(unsigned int, unsigned char);
extern int FUN_002c1f28(void);
/* Supplied declaration required: FUN_002c4b30. */
extern int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_002c5ab8. */


void FUN_00327634(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  int temp_v2;
  unsigned long long temp_v3;
  
  piVar1 = (int *)FUN_002c4b84(0x100,0x100,0,0x98,1);
  FUN_002c4b30(piVar1,0x98);
  temp_v3 = 0;
  piVar1[8] = 0x3f800000;
  piVar1[9] = 0x3f800000;
  piVar1[10] = 0;
  piVar1[1] = 0x41;
  piVar1[0xf] = 0x26;
  piVar1[0x11] = -1;
  *piVar1 = param_1;
  *(unsigned char *)(piVar1 + 0x19) = 1;
  piVar1[0x1a] = 0;
  piVar1[0x1b] = 0;
  *(unsigned char *)(piVar1 + 0x1c) = 0;
  *(unsigned char *)((int)piVar1 + 0x71) = 0;
  FUN_00245b44();
  piVar1[0x15] = param_1;
  temp_v1 = 0;
  piVar1[0x10] = (unsigned int)*(unsigned short *)(param_1 + 0x24);
  do {
    while( 1 ) {
      temp_v0 = FUN_002bf6d0(0x32,*(unsigned char *)(temp_v1 + 0x4035c0));
      temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
      piVar1[temp_v1 * 2 + 0x1d] = temp_v2;
      temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      piVar1[temp_v1 * 2 + 0x1e] = temp_v2;
      if (temp_v1 != 0) break;
      if (*(short **)(temp_v0 + 0xc) != (short *)0x0) {
        temp_v2 = VectorSignedToFloat((int)**(short **)(temp_v0 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
        piVar1[0x23] = temp_v2;
        temp_v0 = VectorSignedToFloat((int)*(short *)(*(int *)(temp_v0 + 0xc) + 2),
                                    (unsigned char)(in_fpscr >> 0x16) & 3);
        piVar1[0x24] = temp_v0;
      }
      temp_v1 = 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  piVar1[0x1f] = 0x42900000;
  piVar1[4] = 0x48;
  piVar1[10] = 0x3e87ae14;
  piVar1[7] = (int)temp_v3;
  piVar1[9] = (int)temp_v3;
  piVar1[0xe] = 5;
  piVar1[5] = (int)(float)piVar1[0x20];
  temp_v0 = FUN_002c1f28();
  if (temp_v0 != 0) {
    piVar1[3] = 1;
  }
  else {
    piVar1[3] = 0;
    FUN_002c5ab8(piVar1[0xf],piVar1[0x10]);
    FUN_002c5ab8(0x32,0);
  }
  piVar1[6] = 0x3e99999a;
  FUN_002c5978("EVE_2dTex",2,0,0,FUN_001dfb60,FUN_002db8c4,piVar1);
  return;
}
