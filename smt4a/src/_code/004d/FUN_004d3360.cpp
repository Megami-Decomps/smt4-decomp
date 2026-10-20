/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d3360` (_code @ 0x4d3360, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00165088(int, int);
int btlTalkBustUpReleaseAllSlots(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int DAT_00571690; /* 0x571690 */
extern unsigned int DAT_00571694; /* 0x571694 */
extern unsigned int DAT_00571698; /* 0x571698 */
extern unsigned int DAT_0057169c; /* 0x57169c */
extern unsigned int DAT_005716c0; /* 0x5716c0 */
extern unsigned int DAT_005716c4; /* 0x5716c4 */
extern unsigned int DAT_005716d0; /* 0x5716d0 */
extern unsigned int DAT_005716d4; /* 0x5716d4 */
extern int DAT_0057f58c; /* 0x57f58c */

/* Supplied declaration required: FUN_00165088. */
extern unsigned int *asdListBoxGetIntValuePtr(unsigned int);
extern int FUN_003216d0(void);
/* Supplied declaration required: btlTalkBustUpReleaseAllSlots. */
extern int listBoxItemHasOwner(unsigned int, unsigned int);
extern unsigned int FUN_003874fc(unsigned int);


void FUN_004d3360(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar6;
  
  temp_v0 = FUN_003874fc(*(unsigned int *)(param_1 + 0x10));
  puVar6 = (unsigned int *)(param_2 + 0x45a8);
  switch(temp_v0) {
  case 0:
    temp_v1 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 == 0) {
      temp_v2 = *puVar6 & ~DAT_00571690;
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_00571694;
      *puVar6 = temp_v2;
      *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
      return;
    }
    temp_v2 = DAT_00571694 | *(unsigned int *)(param_2 + 0x45ac);
    *puVar6 = *puVar6 | DAT_00571690;
    break;
  case 1:
    temp_v1 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 != 0) {
      temp_v2 = *puVar6 | DAT_00571698;
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) | DAT_0057169c;
    }
    else {
      temp_v2 = *puVar6 & ~DAT_00571698;
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_0057169c;
    }
    *puVar6 = temp_v2;
    *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
    if ((temp_v2 & DAT_00571698) != 0 || (temp_v3 & DAT_0057169c) != 0) {
      return;
    }
    temp_v1 = FUN_003216d0();
    if (temp_v1 == 0) {
      return;
    }
    btlTalkBustUpReleaseAllSlots();
    temp_v1 = DAT_0057f58c;
    if (*(char *)(DAT_0057f58c + 0x35) != '\0') {
      FUN_00165088(DAT_0057f58c,*(unsigned char *)(DAT_0057f58c + 9));
      *(unsigned char *)(temp_v1 + 8) = 3;
      *(unsigned char *)(temp_v1 + 0x35) = 0;
    }
    return;
  case 2:
    puVar2 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x2364) = *puVar2;
    return;
  case 3:
    temp_v1 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10),temp_v0);
    temp_v2 = DAT_005716c0;
    if (temp_v1 != 0) {
      *(unsigned int *)(param_2 + 0x45ac) = *(unsigned int *)(param_2 + 0x45ac) | DAT_005716c4;
      *puVar6 = temp_v2 | *puVar6;
      return;
    }
    temp_v2 = *puVar6 & ~DAT_005716c0;
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_005716c4;
    *puVar6 = temp_v2;
    *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
    return;
  case 4:
    temp_v1 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10),temp_v0);
    if (temp_v1 == 0) {
      temp_v2 = ~DAT_005716d4;
      *puVar6 = *puVar6 & ~DAT_005716d0;
      *(unsigned int *)(param_2 + 0x45ac) = *(unsigned int *)(param_2 + 0x45ac) & temp_v2;
      return;
    }
    temp_v2 = DAT_005716d4 | *(unsigned int *)(param_2 + 0x45ac);
    *puVar6 = DAT_005716d0 | *puVar6;
    break;
  default:
    return;
  }
  *(unsigned int *)(param_2 + 0x45ac) = temp_v2;
  return;
}

} /* extern "C" */
