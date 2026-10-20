/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00422940` (_code @ 0x422940, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00158f64(...);
int FUN_00159030(...);
int FUN_00159d60(...);
int asdOperatorNew(...);
int memAlloc(...);
int FUN_0016dfc4(...);
int FUN_0016f368(...);
int nn_os_CriticalSection_Initialize(...);
int FUN_002e3140(...);
int sysMemClear(...);
int FUN_002fb0d4(...);

typedef int romwright_code(...);
/* stack frame of param_3: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern unsigned char LAB_0010031d; /* 0x10031d */
extern unsigned char LAB_00100327; /* 0x100327 */
extern unsigned char LAB_0010032d; /* 0x10032d */
extern int FUN_00422bf0(...); /* 0x422bf0 */
extern signed char DAT_005880d1; /* 0x5880d1 */
extern unsigned int *DAT_005880d4; /* 0x5880d4 */
extern int DAT_005880d8; /* 0x5880d8 */
extern unsigned int DAT_005880dc; /* 0x5880dc */
extern unsigned int *DAT_005880e0; /* 0x5880e0 */
extern int DAT_005880e4; /* 0x5880e4 */
extern unsigned int DAT_005880e8; /* 0x5880e8 */
extern unsigned int DAT_005880ec; /* 0x5880ec */
extern unsigned int DAT_005880f0; /* 0x5880f0 */
extern unsigned int DAT_00618518; /* 0x618518 */

/* Supplied declaration required: FUN_00158f64. */
/* Supplied declaration required: FUN_00159030. */
/* Supplied declaration required: FUN_00159d60. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_0016dfc4. */
/* Supplied declaration required: FUN_0016f368. */
/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_002fb0d4. */


unsigned int FUN_00422940(unsigned int *param_1,int param_2,char param_3)

{
/* irregular: 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1 [2];
  int temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned char *temp_v5;
  
  FUN_00158f64();
  FUN_00159030();
  FUN_00159d60();
  FUN_0016f368();
  DAT_005880d1 = param_3;
  if (DAT_005880d4 != (unsigned int *)0x0) {
    temp_v0 = 0;
  }
  else {
    DAT_005880d4 = param_1;
    DAT_005880e4 = param_2;
    DAT_005880d8 = (**(romwright_code **)*param_1)(param_1,param_2 * 0x70,4);
    if (DAT_005880d8 == 0) {
      DAT_005880d4 = (unsigned int *)0x0;
      DAT_005880e4 = 0;
      return 0;
    }
    sysMemClear(DAT_005880d8,DAT_005880e4 * 0x70);
    DAT_005880e8 = 0;
    DAT_005880ec = 0;
    nn_os_CriticalSection_Initialize(&DAT_00618518);
    if (DAT_005880d1 != '\0') {
      temp_v0 = 0x100;
      memAlloc(0x100,0x100,0,0x1000,0x1000,1);
      puVar2 = (unsigned int *)0x18;
      DAT_005880dc = temp_v0;
      asdOperatorNew(0x18,0);
      if (puVar2 != (unsigned int *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(unsigned char *)(puVar2 + 4) = 0;
      }
      DAT_005880e0 = puVar2;
      FUN_0016dfc4();
      temp_v1[0] = 0;
      temp_v2 = 4;
      temp_v3 = &LAB_0010031d;
      puVar2 = &DAT_005880f0;
      temp_v4 = &LAB_0010032d;
      temp_v5 = &LAB_00100327;
      FUN_002fb0d4(&DAT_005880f0,&temp_v2,FUN_00422bf0,temp_v1,DAT_005880e0[3] + DAT_005880e0[2],2
                   ,0xfffffffe,0);
      if ((int)puVar2 < 0) {
        FUN_002e3140();
      }
    }
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
