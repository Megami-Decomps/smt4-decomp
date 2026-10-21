/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b51a4` (_code @ 0x3b51a4, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(...);
int controllerSetDestination(...);
int controllerSetRotationEulerDegrees(...);
int FUN_003fe86c(...);
int FUN_0040aa6c(...);
int FUN_0040aad4(...);
int handleRegistryRegisterObject(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_mapGimic; /* 0x580ca0 */
extern unsigned char g_mapEntries; /* 0x580ca8 */

/* Supplied declaration required: FUN_00178b04. */
extern int gameFlagIsSet(void);
/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: controllerSetRotationEulerDegrees. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern unsigned int modelListInit(void);
/* Supplied declaration required: handleRegistryRegisterObject. */


void FUN_003b51a4(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v1 = g_mapGimic;
  temp_v4 = 0;
  while ((temp_v0 = temp_v4 * 0x30, *(int *)(&g_mapEntries + temp_v0) != (int)*(short *)(g_mapGimic + 6)
         || (*(int *)(temp_v0 + 0x580cac) != (int)*(short *)(g_mapGimic + 8)))) {
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x13) {
      return;
    }
  }
  *(int *)(g_mapGimic + 0x9dc) = temp_v4;
  *(unsigned int *)(temp_v1 + 0x9b8) = *(unsigned int *)(temp_v0 + 0x580cb0);
  *(unsigned int *)(temp_v1 + 0x9bc) = *(unsigned int *)(temp_v0 + 0x580cb4);
  *(unsigned int *)(temp_v1 + 0x9c0) = *(unsigned int *)(temp_v0 + 0x580cb8);
  *(unsigned int *)(temp_v1 + 0x9c4) = *(unsigned int *)(temp_v0 + 0x580cbc);
  *(unsigned int *)(temp_v1 + 0x9d8) = *(unsigned int *)(temp_v0 + 0x580cd4);
  temp_v4 = gameFlagIsSet();
  temp_v2 = 0;
  if (temp_v4 != 0) {
    temp_v2 = 2;
  }
  *(unsigned short *)(temp_v1 + 0x9b6) = temp_v2;
  *(unsigned char *)(temp_v1 + 0x9b4) = 1;
  temp_v4 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapGimic.cpp",0xa04);
  temp_v3 = 0;
  if (temp_v4 != 0) {
    temp_v3 = modelListInit();
  }
  *(unsigned int *)(temp_v1 + 0x9c8) = temp_v3;
  FUN_0040aa6c();
  FUN_0040aad4(*(unsigned int *)(temp_v1 + 0x9c8),0);
  temp_v3 = *(unsigned int *)(*(int *)(temp_v1 + 0x9c8) + 4);
  controllerSetDestination(temp_v3,temp_v1 + 0x9b8);
  controllerSetRotationEulerDegrees(temp_v3);
  FUN_003fe86c(temp_v3,(int)*(short *)(temp_v1 + 0x9b6),2);
  handleRegistryRegisterObject(g_handleRegistry,temp_v3);
  return;
}

} /* extern "C" */
