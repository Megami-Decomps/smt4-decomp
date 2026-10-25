/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00133568` (_code @ 0x133568, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

int FUN_002aa790(int, int, unsigned int);
int FUN_002a691c(...);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern romwright_code *g_gfxAllocateCallback; /* 0x44e330 */
extern romwright_code *g_gfxReleaseCallback; /* 0x44e334 */
extern int *g_commandBufferCursor; /* 0x4652a0 */
extern unsigned int g_commandBufferEnd; /* 0x4652a4 */
extern int DAT_004652b4; /* 0x4652b4 */
extern unsigned int DAT_004655c4; /* 0x4655c4 */
extern unsigned int DAT_004655c8; /* 0x4655c8 */
extern unsigned int DAT_004655cc; /* 0x4655cc */
extern unsigned int DAT_004655d0; /* 0x4655d0 */
extern unsigned int DAT_004655d4; /* 0x4655d4 */
extern unsigned int DAT_004655d8; /* 0x4655d8 */
extern unsigned int DAT_004655dc; /* 0x4655dc */
extern unsigned int DAT_004655e0; /* 0x4655e0 */
extern unsigned int DAT_004655e4; /* 0x4655e4 */

/* Supplied declaration required: FUN_002aa790. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: FUN_002a691c. */


void FUN_00133568(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  *param_1 = 0x40000;
  temp_v2 = *param_1;
  temp_v1 = 1;
  do {
    temp_v0 = temp_v1 * 4;
    temp_v3 = temp_v1 * 4;
    temp_v1 = temp_v1 + 2;
    temp_v2 = temp_v2 | *(unsigned int *)(temp_v0 + 0x40b6ac);
    *param_1 = temp_v2;
    temp_v2 = temp_v2 | *(unsigned int *)(temp_v3 + 0x40b6b0);
    *param_1 = temp_v2;
  } while (temp_v1 < 0x13);
  DAT_004655c4 = 0x1010000;
  DAT_004655c8 = 8000;
  DAT_004655cc = 0xff00ff10;
  DAT_004655dc = 3;
  DAT_004655e0 = 0xffffff;
  DAT_004655d0 = 0;
  DAT_004655d4 = 3;
  DAT_004655d8 = 0;
  DAT_004655e4 = 0x3000000;
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0x10245;
    *g_commandBufferCursor = 1;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0x10244;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0x80289;
    *g_commandBufferCursor = -0x80000000;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xb0229;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0252;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0251;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0254;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0x10253;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0242;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf024a;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0x5025e;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  FUN_002a691c(0x101,7,0);
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf011f;
    *g_commandBufferCursor = 0x10140;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0100;
    *g_commandBufferCursor = 0xe40100;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0101;
    *g_commandBufferCursor = 0x1010000;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0107;
    *g_commandBufferCursor = 8000;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0105;
    *g_commandBufferCursor = -0xff00f0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0x10061;
    *g_commandBufferCursor = 3;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0x10062;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0065;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0066;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0067;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0x10118;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf011b;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0x7006a;
    *g_commandBufferCursor = 0xffffff;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0102;
    *g_commandBufferCursor = 3;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0x80126;
    *g_commandBufferCursor = 0x3000000;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  FUN_002a691c(0x40,0x10,0);
  FUN_002a691c(0x50,7,0x1f1f1f1f);
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0058;
    *g_commandBufferCursor = 0x100;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf004c;
    *g_commandBufferCursor = 1;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf006f;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0x20060;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xc0069;
    *g_commandBufferCursor = 0x20000;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    *g_commandBufferCursor = 0xf;
    g_commandBufferCursor[1] = 0xf0113;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    *g_commandBufferCursor = 0xf;
    g_commandBufferCursor[1] = 0xf0112;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0114;
    *g_commandBufferCursor = 3;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0115;
    *g_commandBufferCursor = 3;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  temp_v1 = 0;
  do {
    if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
      *g_commandBufferCursor = temp_v1 << 8;
      g_commandBufferCursor[1] = 0xf01c5;
      g_commandBufferCursor = g_commandBufferCursor + 2;
    }
    temp_v3 = 0;
    do {
      FUN_002a691c(0x1c8,8,0);
      temp_v3 = temp_v3 + 8;
    } while (temp_v3 < 0x100);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 7);
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf0290;
    *g_commandBufferCursor = -0x80000000;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  temp_v1 = 0;
  do {
    FUN_002a691c(0x291,8,0);
    temp_v1 = temp_v1 + 2;
  } while (temp_v1 < 0x60);
  if (g_gfxAllocateCallback == (romwright_code *)0x0) {
    temp_v4 = 0;
  }
  else {
    temp_v4 = (*g_gfxAllocateCallback)(0x10000,0x100,0,0x4000);
  }
  reinterpret_cast<int>(memClear(reinterpret_cast<void*>(temp_v4), 0x4000));
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf02cb;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  FUN_002aa790(0x2cc,0x200,temp_v4);
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf029b;
    *g_commandBufferCursor = 0x200;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  FUN_002aa790(0x29c,0xe00,temp_v4);
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf02bf;
    *g_commandBufferCursor = 0;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if (g_gfxReleaseCallback != (romwright_code *)0x0) {
    (*g_gfxReleaseCallback)(0x10000,0x100,0,temp_v4);
  }
  temp_v1 = 0;
  do {
    if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
      g_commandBufferCursor[1] = (temp_v1 + 0x2b1U) | 0xf0000;
      *g_commandBufferCursor = 0;
      g_commandBufferCursor = g_commandBufferCursor + 2;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  FUN_002a691c(0x28b,2);
  FUN_002a691c(0x205,0x24,0);
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf01d4;
    *g_commandBufferCursor = 1;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
    g_commandBufferCursor[1] = 0xf00ae;
    *g_commandBufferCursor = -0x1030710;
    g_commandBufferCursor = g_commandBufferCursor + 2;
  }
  temp_v1 = DAT_004652b4;
  temp_v3 = 0;
  do {
    pbVar3 = (unsigned char *)(temp_v1 + temp_v3 + 0x16b1);
    if ((*pbVar3 != 0) && ((unsigned int)g_commandBufferCursor < g_commandBufferEnd)) {
      *g_commandBufferCursor = *(int *)(temp_v1 + temp_v3 * 4 + 0x1300);
      g_commandBufferCursor[1] = *(unsigned int *)(temp_v3 * 4 + 0x4e4f54) | ((unsigned int)*pbVar3 << 0x10);
      g_commandBufferCursor = g_commandBufferCursor + 2;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0xbd);
  return;
}

} /* extern "C" */
