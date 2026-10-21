/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cdddc` (_code @ 0x4cdddc, 0x1e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char [136], unsigned char *, int);
int FUN_0013c884(int, int);
int uiSetFloatPair(int);
int FUN_0014f0dc(int, unsigned char [12], unsigned char [12], unsigned char [48]);
int FUN_001523b8(int, int);
int FUN_00178b04(int, unsigned char *, int);
int FUN_00186e2c(unsigned char [12], unsigned int);
int FUN_001cd3ec(void);
int FUN_00249ce4(int);
int asdLoadFileAsyncSimple(...);
int mapEnvironmentApplyPreset(int, int);
int campCommonBgAcquire(void);
int FUN_0031e198(void);
int campButtonHelpAcquire(void);
int FUN_0036b824(...);
int FUN_0040ae70(unsigned int, int);
int resourceOwnerLoadNamed(int, unsigned char *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spBC; /* 0xbc: local_bc */
} param_1_stack;

extern unsigned char LAB_004cdfc4; /* 0x4cdfc4 */
extern unsigned char LAB_004ce028; /* 0x4ce028 */
extern unsigned char LAB_004ce044; /* 0x4ce044 */
extern unsigned char LAB_004ce05c; /* 0x4ce05c */
extern unsigned char LAB_004ce07c; /* 0x4ce07c */
extern unsigned char LAB_004ce094; /* 0x4ce094 */
extern unsigned char LAB_004ce0ac; /* 0x4ce0ac */
extern int g_handleRegistry; /* 0x56fcc0 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: uiSetFloatPair. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_00186e2c. */
/* Supplied declaration required: FUN_001cd3ec. */
/* Supplied declaration required: FUN_00249ce4. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: mapEnvironmentApplyPreset. */
/* Supplied declaration required: campCommonBgAcquire. */
/* Supplied declaration required: FUN_0031e198. */
/* Supplied declaration required: campButtonHelpAcquire. */
/* Supplied declaration required: FUN_0036b824. */
extern unsigned int FUN_00387350(unsigned char *);
extern unsigned int modelListInit(void);
/* Supplied declaration required: FUN_0040ae70. */
extern int FUN_0040af60(unsigned int);
/* Supplied declaration required: resourceOwnerLoadNamed. */


void FUN_004cdddc(int param_1)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [12];
  unsigned char temp_v4 [12];
  unsigned char temp_v5 [48];
  unsigned char temp_v6 [136];
  
  temp_v0 = 0x20;
  FUN_00178b04(0x20,&LAB_004cdfc4,0x18d);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  *(unsigned int *)(param_1 + 0x20) = temp_v1;
  FUN_001cd3ec();
  temp_v0 = 0x20;
  FUN_00178b04(0x20,&LAB_004cdfc4,0x191);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  *(unsigned int *)(param_1 + 0x24) = temp_v1;
  FUN_001cd3ec();
  temp_v0 = 0;
  do {
    textFormatBuffer(temp_v6,&LAB_004ce028,temp_v0 + 1);
    temp_v2 = 0x20;
    FUN_00178b04(0x20,&LAB_004cdfc4,0x198);
    temp_v1 = 0;
    if (temp_v2 != 0) {
      temp_v1 = modelListInit();
    }
    *(unsigned int *)(param_1 + temp_v0 * 4 + 0x28) = temp_v1;
    FUN_001cd3ec();
    temp_v2 = g_handleRegistry;
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  *(int *)(param_1 + 0x558) = g_handleRegistry;
  resourceOwnerLoadNamed(temp_v2,&LAB_004ce044);
  temp_v0 = FUN_0040af60(*(unsigned int *)(param_1 + 0x558));
  if (temp_v0 != 0) {
    FUN_0040ae70(*(unsigned int *)(param_1 + 0x558),1);
  }
  FUN_00249ce4(200);
  mapEnvironmentApplyPreset(4,0);
  temp_v1 = FUN_00387350(&LAB_004ce05c);
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x544) = temp_v1;
  FUN_0013c884(param_1 + 0x38,1);
  temp_v0 = param_1 + 0x38;
  FUN_00186e2c(temp_v3,*(unsigned int *)(param_1 + 0x544));
  uiSetFloatPair(temp_v0);
  FUN_0014f0dc(temp_v0,temp_v3,temp_v4,temp_v5);
  FUN_001523b8(temp_v0,1);
  FUN_0036b824(param_1 + 0x38);
  *(int *)(g_handleRegistry + 0xc) = param_1 + 0x38;
  campCommonBgAcquire();
  campButtonHelpAcquire();
  asdLoadFileAsyncSimple(&LAB_004ce07c,param_1 + 0x10,0);
  asdLoadFileAsyncSimple(&LAB_004ce094,param_1 + 0x14,0);
  asdLoadFileAsyncSimple(&LAB_004ce0ac,param_1 + 0x58c,0);
  FUN_0031e198();
  return;
}

} /* extern "C" */
