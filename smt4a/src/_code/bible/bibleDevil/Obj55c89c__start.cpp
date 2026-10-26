/* NON_MATCHING: Retail instruction scheduling/register allocation differs (177 retail versus 150 compiled rows). */
#include "classes/Obj55c89c.h"
#include "romwright_types.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

int taskCreateDraw(...);
int FUN_0019de98(...);
int FUN_002c8550(...);
int FUN_0034a9c4(...);
int fusionReleaseRegisteredHandle(void);
int rectangleInitializeSelection(...);
int FUN_004a1958(...);
int FUN_004a3e04(...);
int partyIdsReset(...);
int partyIdsActivateEntry(...);
int slotPoolResetTrackedState(void);
int FUN_004cf7cc(...);
int FUN_004d05c4(...);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char FUN_004a6e54; /* 0x4a6e54 */
extern unsigned char animatedPageSelectionRelease; /* 0x4a6e7c */
extern unsigned char FUN_004a6f64; /* 0x4a6f64 */
extern unsigned char FUN_004a7260; /* 0x4a7260 */
extern unsigned char DAT_0055c90c; /* 0x55c90c */
extern int *g_animatedPageSelection; /* 0x57f0b4 */
extern unsigned int DAT_0057f0b8; /* 0x57f0b8 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_002c8550. */
/* Supplied declaration required: FUN_0034a9c4. */
/* Supplied declaration required: fusionReleaseRegisteredHandle. */
/* Supplied declaration required: rectangleInitializeSelection. */
/* Supplied declaration required: FUN_004a1958. */
/* Supplied declaration required: FUN_004a3e04. */
/* Supplied declaration required: partyIdsReset. */
/* Supplied declaration required: partyIdsActivateEntry. */
/* Supplied declaration required: slotPoolResetTrackedState. */
/* Supplied declaration required: FUN_004cf7cc. */
extern int flaggedValueHolderGetTotal(int *);
extern int rangeGetMinimumLimit(int *);
/* Supplied declaration required: FUN_004d05c4. */
extern unsigned int *_ZN9Obj422594C1Ev(void);


} /* extern "C" */

void Obj55c89c::start()

{
    int *param_1 = (int *)this;
/* irregular: 16 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  unsigned int *puVar5;
  int temp_v1;
  
  *(unsigned char *)((int)param_1 + 0x861) = 1;
  *(unsigned char *)(param_1 + 0x25) = 0;
  *(unsigned short *)((int)param_1 + 0xa872) = 0xffff;
  *(unsigned char *)(param_1 + 0x2a1c) = 0;
  *(unsigned char *)((int)param_1 + 0x95) = 0;
  *(unsigned char *)((int)param_1 + 0xa876) = 0;
  slotPoolResetTrackedState();
  (**(romwright_code **)(*param_1 + 0x20))(param_1);
  FUN_002c8550(2);
  piVar1 = (int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,4,1);
  g_animatedPageSelection = piVar1;
  *piVar1 = (int)param_1;
  asdProcessCreateSimple("BIBLE DEVIL CALC", 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(&FUN_004a6e54), reinterpret_cast<AsdProcFunc>(&animatedPageSelectionRelease), reinterpret_cast<u32>(piVar1));
  param_1[1] = (int)puVar2;
  taskCreateDraw("BIBLE DEVIL UP",0x71,1,0,&FUN_004a6f64,0,g_animatedPageSelection,puVar2);
  param_1[2] = (int)puVar3;
  taskCreateDraw("BIBLE DEVIL DOWN",0xea,1,0,&FUN_004a7260,0,g_animatedPageSelection,param_1[1]);
  param_1[3] = (int)puVar2;
  rectangleInitializeSelection(param_1 + 0x32,0x140,0,0x14);
  temp_v0 = 0x68;
  asdOperatorNew(0x68);
  puVar5 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar5 = (unsigned int *)_ZN9Obj422594C1Ev();
    *puVar5 = (unsigned int)&DAT_0055c90c;
  }
  param_1[0x213] = (int)puVar5;
  puVar5[0x19] = (unsigned int)(param_1 + 0x32);
  FUN_004a1958(param_1);
  partyIdsReset((int)param_1 + 0x96);
  partyIdsActivateEntry((int)param_1 + 0x96,0);
  temp_v0 = rangeGetMinimumLimit(param_1 + 8);
  temp_v1 = 0;
  if (temp_v1 < temp_v0) {
    do {
      if ((short)param_1[temp_v1 * 8 + 0x21a] != 0) {
        partyIdsActivateEntry((int)param_1 + 0x96,(short)param_1[temp_v1 * 8 + 0x21a]);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v0);
  }
  FUN_004cf7cc(param_1 + 0x37);
  temp_v0 = param_1[10];
  if (temp_v0 >= 10) {
    temp_v0 = 10;
  }
  FUN_004d05c4(param_1 + 0x206,0x14,0x40e,temp_v0);
  *(unsigned char *)(param_1 + 0x20a) = 1;
  FUN_0019de98(0,0xf4f4f4ff);
  param_1[5] = 0;
  param_1[6] = 0;
  fusionReleaseRegisteredHandle();
  DAT_0057f0b8 = 0xffffffff;
  FUN_004a3e04(param_1);
  temp_v0 = flaggedValueHolderGetTotal(param_1 + 8);
  FUN_0034a9c4((short)param_1[temp_v0 * 8 + 0x21a],0);
  if ((char)param_1[0x218] == '\x01') {
    FUN_002c8550(2);
    return;
  }
  return;
}

