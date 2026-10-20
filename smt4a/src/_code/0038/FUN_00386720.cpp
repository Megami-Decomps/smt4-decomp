/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00386720` (_code @ 0x386720, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00227a70(void);
int FUN_00244ac8(void);
int FUN_002747dc(void);
int FUN_002a2e98(unsigned int, unsigned int);
int FUN_002ddea0(void);
int FUN_002df914(void);
int FUN_0033feb8(int);
int FUN_00364740(unsigned int, unsigned int);
int FUN_004839b4(int);
int stateSetterSetFromBase(int, int, unsigned int);
int VectorSignedToFloat(int, int);

extern int g_lmapMainState; /* 0x580238 */
extern int g_lmapScene; /* 0x581288 */
extern unsigned int DAT_005f1600; /* 0x5f1600 */
extern unsigned char DAT_005f1614; /* 0x5f1614 */
extern unsigned char DAT_005f185a; /* 0x5f185a */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00227a70. */
/* Supplied declaration required: FUN_00244ac8. */
/* Supplied declaration required: FUN_002747dc. */
/* Supplied declaration required: FUN_002a2e98. */
/* Supplied declaration required: FUN_002ddea0. */
/* Supplied declaration required: FUN_002df914. */
/* Supplied declaration required: FUN_0033feb8. */
/* Supplied declaration required: FUN_00364740. */
/* Supplied declaration required: FUN_004839b4. */
/* Supplied declaration required: stateSetterSetFromBase. */


unsigned int FUN_00386720(void)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  
  temp_v0 = g_lmapMainState;
  switch(*(unsigned int *)(g_lmapMainState + 0x18)) {
  case 0:
    puVar5 = (unsigned int *)(g_lmapMainState + 0x28);
    temp_v2 = *(unsigned int *)(g_lmapScene + 0x1c);
    temp_v3 = *(unsigned int *)(g_lmapScene + 0x20);
    temp_v4 = *(unsigned int *)(g_lmapScene + 0x24);
    *(unsigned int *)(g_lmapMainState + 0x20) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x24) = temp_v3;
    *puVar5 = temp_v4;
    *(unsigned int *)(temp_v0 + 0x2c) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x30) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x34) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x30) = 0x44480000;
    *(unsigned int *)(temp_v0 + 0xdc) = 0;
    *(unsigned char *)(temp_v0 + 0xe0) = 1;
    *(unsigned int *)(temp_v0 + 0x48) = 99;
    DAT_005f1600 = 99;
    FUN_00227a70();
    FUN_002a2e98(*(unsigned int *)(temp_v0 + 0x40),*(unsigned int *)(temp_v0 + 0x48));
    *(unsigned int *)(temp_v0 + 0x18) = 1;
    *(unsigned int *)(temp_v0 + 0x1c) = 0;
    break;
  case 1:
    FUN_0033feb8(g_lmapMainState);
    temp_v1 = *(int *)(temp_v0 + 0x1c) + 1;
    *(int *)(temp_v0 + 0x1c) = temp_v1;
    temp_v5 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(g_lmapScene + 0x20) =
         *(float *)(temp_v0 + 0x24) +
         (*(float *)(temp_v0 + 0x30) - *(float *)(temp_v0 + 0x24)) * temp_v5 * 0.033333335f;
    if (*(int *)(temp_v0 + 0x1c) >= 0x1e) {
      DAT_005f1614 = 0;
      DAT_005f185a = 1;
      *(unsigned int *)(temp_v0 + 0xdc) = 0x3f800000;
      *(unsigned char *)(temp_v0 + 0xe0) = 1;
      *(unsigned int *)(temp_v0 + 0x18) = 2;
    }
    break;
  case 2:
    FUN_0033feb8(g_lmapMainState);
    break;
  case 5:
    *(unsigned int *)(g_lmapMainState + 0x90) = 0x43480000;
    FUN_002df914();
    temp_v0 = g_lmapMainState;
    *(unsigned char *)(g_lmapMainState + 0xb) = 0;
    *(unsigned int *)(temp_v0 + 0xf4) = *(unsigned int *)(temp_v0 + 0xf4) & 0xfffffffd;
    FUN_00244ac8();
    temp_v1 = g_lmapMainState;
    temp_v4 = *(unsigned int *)(temp_v0 + 0x40);
    FUN_002747dc();
    FUN_00364740(temp_v4,*(unsigned int *)(temp_v1 + 0x48));
    FUN_002ddea0();
    stateSetterSetFromBase(temp_v0 + 0xf4,*(int *)(temp_v0 + 0x40) - 100,*(unsigned int *)(temp_v0 + 0x48));
    FUN_004839b4(temp_v0 + 0xf4);
    DAT_005f1614 = 0;
    DAT_005f185a = 1;
  }
  return 0;
}

} /* extern "C" */
