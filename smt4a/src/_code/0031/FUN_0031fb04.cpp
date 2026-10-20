/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031fb04` (_code @ 0x31fb04, 0x1f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001469a8(...);
int jobStop(int, int);
int asdMemFree(...);
int scrScriptProcessDestroy(int);
int FUN_001a0d08(int *);
int dataTableFree(int);
int ptrListRemoveClearOwner(unsigned int, unsigned int);
int FUN_001aeafc(unsigned int);
int FUN_002e3140(void);
int asdOperatorDelete(...);
int uniteCameraDestroy(void);
int FUN_0038b3f8(int, int);
int mapSettings5BSetValueIfActive(int);
int FUN_00408184(int, int);
int ptrTable44FreeAll(void);
int software_interrupt(int);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int *g_unite; /* 0x57f290 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001469a8. */
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: dataTableFree. */
/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: FUN_001aeafc. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: asdOperatorDelete. */
extern int FUN_002e50d4(void);
/* Supplied declaration required: uniteCameraDestroy. */
/* Supplied declaration required: FUN_0038b3f8. */
/* Supplied declaration required: mapSettings5BSetValueIfActive. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: ptrTable44FreeAll. */


void FUN_0031fb04(void)

{
/* irregular: 16 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  
  piVar1 = g_unite;
  if (g_unite == (int *)0x0) {
    return;
  }
  piVar3 = g_unite + 0x249b;
  *(unsigned char *)(g_unite + 0x2499) = 1;
  software_interrupt(0x24);
  if (*piVar3 < 0) {
    FUN_002e3140();
  }
  *(unsigned char *)(piVar1 + 0x249c) = 1;
  FUN_001a0d08(piVar3);
  if (*piVar3 != 0) {
    software_interrupt(0x23);
    *piVar3 = 0;
  }
  FUN_001469a8(piVar1[0x249a]);
  temp_v0 = piVar1[0x249a];
  if (temp_v0 != 0) {
    FUN_001469a8();
    asdOperatorDelete(temp_v0);
  }
  piVar1[0x249a] = 0;
  asdMemFree(piVar1[0x249d]);
  piVar1[0x249d] = 0;
  temp_v0 = FUN_002e50d4();
  FUN_00408184(0x25,temp_v0 - piVar1[0x107]);
  if ((char)piVar1[0x2496] != '\0') {
    FUN_001aeafc(g_handleRegistry);
  }
  if ((int *)piVar1[0x2484] != (int *)0x0) {
    (**(romwright_code **)(*(int *)piVar1[0x2484] + 4))();
    piVar1[0x2484] = 0;
  }
  uniteCameraDestroy();
  ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(piVar1[0x2482] + 4));
  ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(piVar1[0x2483] + 4));
  if ((int *)piVar1[0x2482] != (int *)0x0) {
    (**(romwright_code **)(*(int *)piVar1[0x2482] + 4))();
    piVar1[0x2482] = 0;
  }
  if ((int *)piVar1[0x2483] != (int *)0x0) {
    (**(romwright_code **)(*(int *)piVar1[0x2483] + 4))();
    piVar1[0x2483] = 0;
  }
  temp_v0 = 0;
  do {
    if (*(short *)((int)piVar1 + temp_v0 * 2 + 0x6688) != 0) {
      FUN_0038b3f8((int)*(short *)((int)piVar1 + temp_v0 * 2 + 0x6688),1);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  scrScriptProcessDestroy(piVar1[0x10b]);
  asdMemFree(piVar1[0x10a]);
  asdMemFree(piVar1[0x109]);
  if (*piVar1 != 0) {
    ptrTable44FreeAll();
    asdOperatorDelete();
  }
  *piVar1 = 0;
  jobStop(piVar1[0xfe],0);
  asdMemFree(piVar1);
  g_unite = (int *)0x0;
  dataTableFree(0x24);
  dataTableFree(0x22);
  mapSettings5BSetValueIfActive(1);
  return;
}

} /* extern "C" */
