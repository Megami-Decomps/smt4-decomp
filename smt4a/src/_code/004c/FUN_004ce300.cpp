/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ce300` (_code @ 0x4ce300, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrScriptProcessStartEntry(undefined4);
int panelSetMode3(int, int);
int messageDismissNumericBanner(int);
int partyAddMoneyClamped(int);

typedef struct fn_004ce300_arg0 fn_004ce300_arg0;
struct fn_004ce300_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0xc];
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x538];
    int field_0x554; /* +0x554 */
    unsigned char pad_0x558[0x38];
    int field_0x590; /* +0x590 */
    unsigned char pad_0x594[0x4];
    undefined4 field_0x598; /* +0x598 */
};

extern int *gameGetSlotTable(void);
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: panelSetMode3. */
extern int FUN_0034919c(void);
extern int tableGroupFindEntryIndex(unsigned int, char *);
/* Supplied declaration required: messageDismissNumericBanner. */
/* Supplied declaration required: partyAddMoneyClamped. */


void FUN_004ce300(fn_004ce300_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  piVar1 = (int *)gameGetSlotTable();
  temp_v0 = *(int *)(param_1->field_0x590 + param_1->field_0x554 * 4);
  if (*piVar1 < temp_v0) {
    temp_v0 = FUN_0034919c();
    if (temp_v0 != 0) {
      messageDismissNumericBanner(0);
    }
    temp_v0 = tableGroupFindEntryIndex(param_1->field_0x10,"fountian_no_money");
    if (-1 < temp_v0) {
      scrScriptProcessStartEntry(param_1->field_0x18);
    }
    param_1->field_0x598 = 10;
    return;
  }
  panelSetMode3(-temp_v0,0);
  temp_v0 = tableGroupFindEntryIndex(param_1->field_0x10,"fountian_healing");
  if (-1 < temp_v0) {
    scrScriptProcessStartEntry(param_1->field_0x18);
  }
  param_1->field_0x598 = 9;
  temp_v0 = scrRunOpcodesStub(param_1->field_0x18);
  if (temp_v0 == 2) {
    partyAddMoneyClamped(-*(int *)(param_1->field_0x590 + param_1->field_0x554 * 4));
    param_1->field_0x598 = 10;
  }
  return;
}

} /* extern "C" */
