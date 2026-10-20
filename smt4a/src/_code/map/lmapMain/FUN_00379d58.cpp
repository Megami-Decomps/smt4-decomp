/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379d58` (_code @ 0x379d58, 0x284 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(int, unsigned char *, int);
int FUN_003c323c(void);
int FUN_0040619c(unsigned int, int);
int FUN_0040a908(void);
int FUN_0040a918(int, int);
int moriModelContentCreateBinding(int);
int FUN_0040a9a0(int, unsigned int);
int FUN_0040ab9c(unsigned int, unsigned int);
int FUN_00416168(unsigned int, unsigned int);
int VectorSignedToFloat(int, int);
int nn_math_ARMv6_MTX33CopyAsm(int *, unsigned int *);

/* stack frame of void: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp50C; /* 0x50c: local_50c */
    unsigned int sp510; /* 0x510: local_510 */
    unsigned int sp518; /* 0x518: local_518 */
    unsigned int sp51C; /* 0x51c: local_51c */
    unsigned int sp524; /* 0x524: local_524 */
    unsigned int sp528; /* 0x528: local_528 */
    unsigned int sp52C; /* 0x52c: local_52c */
    unsigned int sp530; /* 0x530: local_530 */
    unsigned int sp534; /* 0x534: local_534 */
    unsigned int sp538; /* 0x538: local_538 */
    unsigned int sp540; /* 0x540: local_540 */
    unsigned int sp554; /* 0x554: local_554 */
    unsigned int sp560; /* 0x560: local_560 */
} void_stack;

extern unsigned char LAB_00379fe4; /* 0x379fe4 */
extern int g_lmapMainState; /* 0x580238 */
extern unsigned int DAT_005c4c28; /* 0x5c4c28 */
extern int DAT_005f1600; /* 0x5f1600 */
extern unsigned int DAT_0064c030; /* 0x64c030 */
extern float DAT_0064c034; /* 0x64c034 */
extern float DAT_0064c038; /* 0x64c038 */
extern float DAT_0064c03c; /* 0x64c03c */
extern unsigned int DAT_0064c040; /* 0x64c040 */
extern float DAT_0064c044; /* 0x64c044 */
extern float DAT_0064c048; /* 0x64c048 */
extern float DAT_0064c04c; /* 0x64c04c */
extern unsigned int DAT_0064c050; /* 0x64c050 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00178b04. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: FUN_003c323c. */
extern int FUN_003fdadc(void);
/* Supplied declaration required: FUN_0040619c. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
/* Supplied declaration required: moriModelContentCreateBinding. */
/* Supplied declaration required: FUN_0040a9a0. */
/* Supplied declaration required: FUN_0040ab9c. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_00416168. */
/* Supplied declaration required: nn_math_ARMv6_MTX33CopyAsm. */


void FUN_00379d58(void)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned long long temp_v11;
  unsigned long long temp_v12;
  unsigned long long temp_v13;
  unsigned long long temp_v14;
  unsigned long long temp_v15;
  int temp_v16;
  unsigned int uStack_55c;
  unsigned int uStack_558;
  unsigned int temp_v17;
  unsigned int uStack_550;
  unsigned int uStack_54c;
  unsigned int uStack_548;
  unsigned int uStack_544;
  unsigned int temp_v18;
  float temp_v19 [4];
  float temp_v20;
  unsigned int temp_v21;
  unsigned int uStack_520;
  float temp_v22;
  unsigned int temp_v23;
  unsigned int uStack_514;
  float temp_v24;
  unsigned int temp_v25;
  
  temp_v0 = g_lmapMainState;
  if (g_lmapMainState != 0) {
    temp_v5 = *(unsigned int *)(g_lmapMainState + 0xadc);
    temp_v1 = 0x20;
    FUN_00178b04(0x20,&LAB_00379fe4,0x25a0);
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = FUN_0040ac08();
    }
    piVar6 = (int *)(temp_v0 + 0xae4);
    *(unsigned int *)(temp_v0 + 0xae4) = temp_v2;
    FUN_0040a908();
    FUN_0040a918(*piVar6,0x10000);
    FUN_0040a9a0(*piVar6,temp_v5);
    FUN_0040ab9c(*(unsigned int *)(temp_v0 + 0xae0),*(unsigned int *)(*piVar6 + 0xc));
    FUN_00416168(*(unsigned int *)(*piVar6 + 0xc),*(unsigned int *)(*(int *)(temp_v0 + 0xae0) + 0xc));
    moriModelContentCreateBinding(*piVar6);
    *(unsigned int *)(temp_v0 + 0xad8) = 0;
    *(unsigned int *)(temp_v0 + 0xadc) = 0;
    FUN_003c323c();
    temp_v1 = 0;
    temp_v6 = *(int *)(*(int *)(*piVar6 + 8) + 0x10);
    if (0 < temp_v6) {
      temp_v15 = 0x3f800000;
      temp_v10 = 0.0f;
      temp_v11 = 0xc6bfe000455f7000;
      temp_v12 = 0xc67d2000c682b400;
      temp_v13 = 0xc63e0000c671e000;
      temp_v14 = 0x456bf000c65ac000;
      do {
        if (((DAT_005c4c28 & 1) == 0) && (temp_v3 = __cxa_guard_acquire(&DAT_005c4c28), temp_v3 != 0)) {
          DAT_0064c030 = (unsigned int)temp_v15;
          DAT_0064c034 = temp_v10;
          DAT_0064c038 = temp_v10;
          DAT_0064c03c = temp_v10;
          DAT_0064c040 = DAT_0064c030;
          DAT_0064c044 = temp_v10;
          DAT_0064c048 = temp_v10;
          DAT_0064c04c = temp_v10;
          DAT_0064c050 = DAT_0064c030;
        }
        nn_math_ARMv6_MTX33CopyAsm(&temp_v16,&DAT_0064c030);
        if (DAT_005f1600 == 99) {
          temp_v2 = (unsigned int)((unsigned long long)temp_v14 >> 0x20);
        }
        else {
          temp_v2 = (unsigned int)temp_v11;
        }
        FUN_0040619c(*(unsigned int *)(*(int *)(temp_v0 + 0xae4) + 8),temp_v1);
        temp_v3 = FUN_003fdadc();
        temp_v19[0] = temp_v10;
        temp_v19[1] = temp_v10;
        temp_v7 = (float)VectorSignedToFloat(*(char *)(temp_v3 + 5) - 0x31,(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v19[2] = temp_v10;
        temp_v9 = (float)VectorSignedToFloat(((*(char *)(temp_v3 + 7) - 0x30) * 10 +
                                            (int)*(char *)(temp_v3 + 8)) - 0x31,
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v19[3] = (float)(int)((unsigned long long)temp_v11 >> 0x20);
        temp_v20 = temp_v10;
        temp_v22 = temp_v10;
        temp_v24 = temp_v10;
        temp_v25 = (int)temp_v14;
        temp_v4 = *(int *)(temp_v0 + 0x40) - 100;
        temp_v21 = (int)temp_v12;
        uStack_520 = (int)((unsigned long long)temp_v12 >> 0x20);
        temp_v23 = (int)temp_v13;
        uStack_514 = (int)((unsigned long long)temp_v13 >> 0x20);
        temp_v8 = temp_v19[temp_v4 * 3 + 2];
        temp_v3 = temp_v0 + temp_v1 * 0x88;
        temp_v1 = temp_v1 + 1;
        *(float *)(temp_v3 + 0xaf4) = temp_v19[temp_v4 * 3] + temp_v7 * (float)temp_v11 + 1787.5f;
        *(unsigned int *)(temp_v3 + 0xaf8) = 0x41200000;
        *(float *)(temp_v3 + 0xafc) = temp_v8 + temp_v9 * (float)temp_v11 + 1787.5f;
        *(unsigned int *)(temp_v3 + 0xb00) = temp_v16;
        *(unsigned int *)(temp_v3 + 0xb04) = uStack_55c;
        *(unsigned int *)(temp_v3 + 0xb08) = uStack_558;
        *(unsigned int *)(temp_v3 + 0xb0c) = temp_v17;
        *(unsigned int *)(temp_v3 + 0xb10) = uStack_550;
        *(unsigned int *)(temp_v3 + 0xb14) = uStack_54c;
        *(unsigned int *)(temp_v3 + 0xb18) = uStack_548;
        *(unsigned int *)(temp_v3 + 0xb1c) = uStack_544;
        *(unsigned int *)(temp_v3 + 0xb20) = temp_v18;
        *(unsigned int *)(temp_v3 + 0xb24) = temp_v2;
        *(unsigned int *)(temp_v3 + 0xb28) = temp_v2;
        *(unsigned int *)(temp_v3 + 0xb2c) = temp_v2;
      } while (temp_v1 < temp_v6);
    }
  }
  return;
}

} /* extern "C" */
