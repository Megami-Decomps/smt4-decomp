/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338bf0` (_code @ 0x338bf0, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aea28(unsigned int);
int FUN_00227a70(void);
int FUN_00234b30(void);
int FUN_002737a8(void);
int FUN_00297c3c(void);
int FUN_002a2e98(unsigned int, unsigned int);
int FUN_002df914(void);
int FUN_00324bc8(...);
int FUN_00328794(void);
int FUN_003699e4(void);
int FUN_0036a434(int);
int FUN_0036aa04(int);
int FUN_00378000(void);
int FUN_0039933c(void);
int FUN_003b5714(unsigned int, unsigned int, unsigned int);
int FUN_003c323c(void);
int FUN_003ca5a4(void);
int FUN_00483834(int);
int FUN_004839b4(int);
int FUN_00483abc(int, int, unsigned int);
int FUN_00483acc(int);
int FUN_004bc95c(unsigned int, unsigned int);
int VectorSignedToFloat(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int g_lmapMainState; /* 0x580238 */
extern int g_lmapScene; /* 0x581288 */
extern unsigned int DAT_005f1600; /* 0x5f1600 */
extern unsigned char DAT_005f161f; /* 0x5f161f */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001aea28. */
/* Supplied declaration required: FUN_00227a70. */
/* Supplied declaration required: FUN_00234b30. */
/* Supplied declaration required: FUN_002737a8. */
/* Supplied declaration required: FUN_00297c3c. */
/* Supplied declaration required: FUN_002a2e98. */
/* Supplied declaration required: FUN_002df914. */
/* Supplied declaration required: FUN_00324bc8. */
/* Supplied declaration required: FUN_00328794. */
/* Supplied declaration required: FUN_003699e4. */
/* Supplied declaration required: FUN_0036a434. */
/* Supplied declaration required: FUN_0036aa04. */
/* Supplied declaration required: FUN_00378000. */
extern char *FUN_003798f0(void);
/* Supplied declaration required: FUN_0039933c. */
/* Supplied declaration required: FUN_003b5714. */
/* Supplied declaration required: FUN_003c323c. */
/* Supplied declaration required: FUN_003ca5a4. */
/* Supplied declaration required: FUN_00483834. */
/* Supplied declaration required: FUN_004839b4. */
/* Supplied declaration required: FUN_00483abc. */
/* Supplied declaration required: FUN_00483acc. */
/* Supplied declaration required: FUN_004bc95c. */


void FUN_00338bf0(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 25 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar5;
  int temp_v5;
  unsigned int in_fpscr;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v1 = g_lmapMainState;
  FUN_003b5714(*(unsigned int *)(g_lmapMainState + 0x40),param_1,param_2);
  pcVar1 = (char *)FUN_003798f0();
  FUN_00324bc8((int)*pcVar1,(int)pcVar1[1],pcVar1[2]);
  *(unsigned int *)(temp_v1 + 0x48) = param_1;
  temp_v3 = g_lmapScene;
  puVar5 = (unsigned int *)(g_lmapScene + 0x1c);
  temp_v6 = VectorSignedToFloat((int)*(short *)(pcVar1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_005f1600 = param_1;
  *(unsigned int *)(g_lmapScene + 0x1c) = temp_v6;
  temp_v6 = VectorSignedToFloat((int)*(short *)(pcVar1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v3 + 0x20) = temp_v6;
  temp_v7 = VectorSignedToFloat((int)*(short *)(pcVar1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v3 + 0x24) = temp_v7;
  temp_v6 = *puVar5;
  *(unsigned int *)(temp_v3 + 0x30) = temp_v7;
  *(unsigned int *)(temp_v3 + 0x28) = temp_v6;
  *(unsigned int *)(temp_v3 + 0x2c) = *(unsigned int *)(temp_v3 + 0x20);
  *(unsigned int *)(temp_v3 + 0x3c) = temp_v7;
  *(unsigned int *)(temp_v3 + 0x34) = temp_v6;
  *(unsigned int *)(temp_v3 + 0x38) = *(unsigned int *)(temp_v3 + 0x20);
  *(unsigned int *)(temp_v3 + 0x4c) = 0x43340000;
  *(unsigned int *)(temp_v3 + 0x50) = 0x43340000;
  FUN_00227a70();
  FUN_002a2e98(*(unsigned int *)(temp_v1 + 0x40),*(unsigned int *)(temp_v1 + 0x48));
  FUN_002df914();
  FUN_0039933c();
  FUN_00378000();
  FUN_00483acc(temp_v1 + 0xf4);
  FUN_00483abc(temp_v1 + 0xf4,*(int *)(temp_v1 + 0x40) - 100,*(unsigned int *)(temp_v1 + 0x48));
  FUN_004839b4(temp_v1 + 0xf4);
  FUN_004bc95c(*(unsigned int *)(temp_v1 + 0x40),param_1);
  FUN_0036a434(temp_v1);
  FUN_003699e4();
  FUN_003c323c();
  FUN_003ca5a4();
  temp_v5 = 0;
  temp_v3 = temp_v2;
  do {
    temp_v0 = *(int *)(temp_v1 + temp_v5 * 4 + 0xa54);
    if (temp_v0 != 0) {
      temp_v3 = *(int *)(temp_v0 + 4);
    }
    if (temp_v0 != 0 && temp_v3 != 0) {
      FUN_001aea28(DAT_0056fcc0);
      temp_v3 = temp_v4;
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x20);
  FUN_00328794();
  temp_v3 = g_lmapMainState;
  if (*(int *)(g_lmapMainState + 0x40) != 100) {
    FUN_003699e4();
  }
  temp_v1 = 0;
  do {
    temp_v5 = *(int *)(temp_v3 + temp_v1 * 4 + 0xa54);
    if (temp_v5 != 0) {
      temp_v5 = *(int *)(temp_v5 + 4);
      *(unsigned int *)(temp_v5 + 4) = *(unsigned int *)(temp_v5 + 4) & 0xfffffffc;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x20);
  DAT_005f161f = 0;
  FUN_0036aa04(temp_v3);
  FUN_00483834(temp_v3 + 0xf4);
  FUN_00297c3c();
  FUN_00234b30();
  FUN_002737a8();
  FUN_00324bc8(0xffffffff,0xffffffff);
  return;
}

} /* extern "C" */
