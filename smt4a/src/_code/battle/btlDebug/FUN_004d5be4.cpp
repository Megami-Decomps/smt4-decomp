/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d5be4` (_code @ 0x4d5be4, 0x3dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int g_btlCamera; /* 0x571508 */
extern unsigned int DAT_00571514; /* 0x571514 */
extern unsigned int DAT_00571518; /* 0x571518 */
extern unsigned int DAT_00571520; /* 0x571520 */
extern unsigned int DAT_00571524; /* 0x571524 */
extern unsigned int DAT_00571528; /* 0x571528 */
extern unsigned int DAT_0057152c; /* 0x57152c */
extern unsigned int DAT_00571530; /* 0x571530 */
extern unsigned int DAT_00571570; /* 0x571570 */
extern unsigned int DAT_00571574; /* 0x571574 */
extern unsigned int DAT_00571578; /* 0x571578 */
extern unsigned int DAT_0057157c; /* 0x57157c */
extern unsigned int DAT_00571580; /* 0x571580 */
extern unsigned int DAT_00571584; /* 0x571584 */
extern unsigned int DAT_00571588; /* 0x571588 */
extern unsigned int DAT_0057158c; /* 0x57158c */
extern unsigned int DAT_00571590; /* 0x571590 */
extern unsigned int DAT_00571594; /* 0x571594 */
extern unsigned int DAT_00571598; /* 0x571598 */
extern unsigned int DAT_0057159c; /* 0x57159c */
extern unsigned int DAT_005715a0; /* 0x5715a0 */
extern unsigned int DAT_005715a4; /* 0x5715a4 */
extern unsigned int DAT_005715a8; /* 0x5715a8 */
extern unsigned int DAT_005715ac; /* 0x5715ac */
extern unsigned int DAT_005715b0; /* 0x5715b0 */
extern unsigned int DAT_005715b4; /* 0x5715b4 */
extern unsigned int DAT_00571718; /* 0x571718 */
extern unsigned int DAT_0057171c; /* 0x57171c */
extern unsigned int DAT_0057aa10; /* 0x57aa10 */
extern unsigned int DAT_005e1554; /* 0x5e1554 */
extern unsigned int DAT_005e155c; /* 0x5e155c */

extern unsigned int *asdListBoxGetIntValuePtr(unsigned int, unsigned int);
extern int listBoxItemHasOwner(unsigned int);
extern unsigned int *asdListBoxGetFloatValuePtr(unsigned int);


void FUN_004d5be4(int param_1,int param_2,unsigned int param_3)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  switch(param_3) {
  case 0:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    if (temp_v0 != 0) {
      temp_v2 = *(unsigned int *)(g_btlCamera + 0x64c) | 0x100;
    }
    else {
      temp_v2 = *(unsigned int *)(g_btlCamera + 0x64c) & 0xfffffeff;
    }
    *(unsigned int *)(g_btlCamera + 0x64c) = temp_v2;
    return;
  case 1:
    puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(g_btlCamera + 0x578) = *puVar3;
    return;
  case 2:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    puVar2 = (unsigned int *)(param_2 + 0x45a8);
    if (temp_v0 != 0) {
      temp_v2 = DAT_0057171c | *(unsigned int *)(param_2 + 0x45ac);
      *puVar2 = DAT_00571718 | *puVar2;
      *(unsigned int *)(param_2 + 0x45ac) = temp_v2;
      return;
    }
    temp_v2 = ~DAT_00571718;
    *(unsigned int *)(param_2 + 0x45ac) = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_0057171c;
    *puVar2 = *puVar2 & temp_v2;
    return;
  case 3:
    puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10));
    DAT_005e1554 = *puVar3;
    return;
  case 4:
    puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10));
    DAT_005e155c = *puVar3;
    return;
  case 5:
    puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10));
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571570;
    break;
  case 6:
    puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10));
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571574;
    break;
  case 7:
    puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10));
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571578;
    break;
  case 8:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_0057157c;
    break;
  case 9:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571514;
    break;
  case 10:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571518;
    break;
  case 0xb:
    puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10));
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571580;
    break;
  case 0xc:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571584;
    break;
  case 0xd:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571520;
    break;
  case 0xe:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571588;
    break;
  case 0xf:
    puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10));
    temp_v1 = *puVar3;
    puVar3 = &DAT_0057158c;
    break;
  case 0x10:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571590;
    break;
  case 0x11:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571524;
    break;
  case 0x12:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571594;
    break;
  case 0x13:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571598;
    break;
  case 0x14:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571528;
    break;
  case 0x15:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_0057159c;
    break;
  case 0x16:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_005715a0;
    break;
  case 0x17:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_0057152c;
    break;
  case 0x18:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_005715a4;
    break;
  case 0x19:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_005715a8;
    break;
  case 0x1a:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_005715ac;
    break;
  case 0x1b:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_005715b0;
    break;
  case 0x1c:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_005715b4;
    break;
  case 0x1d:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_0057aa10;
    break;
  case 0x1e:
    puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),param_3);
    temp_v1 = *puVar3;
    puVar3 = &DAT_00571530;
    break;
  default:
    return;
  }
  *puVar3 = temp_v1;
  return;
}

} /* extern "C" */
