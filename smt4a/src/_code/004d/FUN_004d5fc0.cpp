/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d5fc0` (_code @ 0x4d5fc0, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004f43b4(void);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned int *g_btlCamera; /* 0x571508 */
extern unsigned int DAT_0057150c; /* 0x57150c */
extern unsigned int DAT_00571510; /* 0x571510 */

extern int listBoxItemHasOwner(unsigned int);
extern unsigned int *asdListBoxGetFloatValuePtr(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004f43b4. */


void FUN_004d5fc0(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  switch(param_3) {
  case 0:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v0 != 0) {
      if ((g_btlCamera[0x193] & 0x20) != 0) {
        return;
      }
      FUN_004f43b4();
      return;
    }
    FUN_004f43b4();
    temp_v2 = g_btlCamera[0x193] & 0xffffffdf;
    break;
  case 1:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v0 != 0) {
      temp_v2 = g_btlCamera[0x193] | 0x40;
    }
    else {
      temp_v2 = g_btlCamera[0x193] & 0xffffffbf;
    }
    break;
  case 2:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v0 == 0) {
      g_btlCamera[0x193] = g_btlCamera[0x193] & 0xffffff7f;
      return;
    }
    temp_v2 = g_btlCamera[0x193] | 0x80;
    break;
  case 3:
    puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_0057150c;
    *puVar3 = temp_v1;
    return;
  case 4:
    puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571510;
    *puVar3 = temp_v1;
    return;
  case 5:
    puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    *g_btlCamera = *puVar3;
    return;
  case 6:
    puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    g_btlCamera[1] = *puVar3;
    return;
  case 7:
    puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    g_btlCamera[2] = *puVar3;
    return;
  default:
    return;
  }
  g_btlCamera[0x193] = temp_v2;
  return;
}

} /* extern "C" */
