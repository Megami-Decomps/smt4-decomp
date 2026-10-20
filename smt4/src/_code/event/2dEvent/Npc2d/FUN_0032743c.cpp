/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032743c` (_code @ 0x32743c, 0x1c0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002459d8(...);
int FUN_002c4938(...);
int FUN_002c498c(...);
int FUN_002c5788(...);
int FUN_002c58c8(...);
int VectorSignedToFloat(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_001dfc64(...); /* 0x1dfc64 */
extern int FUN_002db92c(...); /* 0x2db92c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002459d8. */
extern int FUN_002bf4f8(unsigned int, unsigned char);
extern int FUN_002c1d5c(void);
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: FUN_002c58c8. */


void FUN_0032743c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  int temp_v2;
  unsigned long long temp_v3;
  
  piVar1 = (int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x98,1);
  FUN_002c4938();
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
  FUN_002459d8();
  piVar1[0x15] = param_1;
  temp_v1 = 0;
  piVar1[0x10] = (unsigned int)*(unsigned short *)(param_1 + 0x24);
  do {
    while( 1 ) {
      temp_v0 = FUN_002bf4f8(0x32,*(unsigned char *)(temp_v1 + 0x40356c));
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
  temp_v0 = FUN_002c1d5c();
  if (temp_v0 != 0) {
    piVar1[3] = 1;
  }
  else {
    piVar1[3] = 0;
    FUN_002c58c8(piVar1[0xf],piVar1[0x10]);
    FUN_002c58c8(0x32,0);
  }
  piVar1[6] = 0x3e99999a;
  FUN_002c5788("EVE_2dTex",2,0,0,FUN_001dfc64,FUN_002db92c,piVar1);
  return;
}

} /* extern "C" */
