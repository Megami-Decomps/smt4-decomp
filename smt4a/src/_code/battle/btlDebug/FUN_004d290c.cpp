/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d290c` (_code @ 0x4d290c, 0x9f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameGetSlotTable(void);

extern unsigned int DAT_00571640; /* 0x571640 */
extern unsigned int DAT_00571644; /* 0x571644 */
extern unsigned int DAT_00571648; /* 0x571648 */
extern unsigned int DAT_0057164c; /* 0x57164c */
extern unsigned int DAT_00571650; /* 0x571650 */
extern unsigned int DAT_00571654; /* 0x571654 */
extern unsigned int DAT_00571658; /* 0x571658 */
extern unsigned int DAT_0057165c; /* 0x57165c */
extern unsigned int DAT_00571660; /* 0x571660 */
extern unsigned int DAT_00571664; /* 0x571664 */
extern unsigned int DAT_00571668; /* 0x571668 */
extern unsigned int DAT_0057166c; /* 0x57166c */
extern unsigned int DAT_00571670; /* 0x571670 */
extern unsigned int DAT_00571674; /* 0x571674 */
extern unsigned int DAT_00571678; /* 0x571678 */
extern unsigned int DAT_0057167c; /* 0x57167c */
extern unsigned int DAT_00571680; /* 0x571680 */
extern unsigned int DAT_00571684; /* 0x571684 */
extern unsigned int DAT_00571688; /* 0x571688 */
extern unsigned int DAT_0057168c; /* 0x57168c */
extern unsigned int DAT_005716b8; /* 0x5716b8 */
extern unsigned int DAT_005716bc; /* 0x5716bc */
extern unsigned int DAT_005716d8; /* 0x5716d8 */
extern unsigned int DAT_005716dc; /* 0x5716dc */
extern unsigned int DAT_005716e0; /* 0x5716e0 */
extern unsigned int DAT_005716e4; /* 0x5716e4 */
extern unsigned int DAT_005716e8; /* 0x5716e8 */
extern unsigned int DAT_005716ec; /* 0x5716ec */
extern unsigned int DAT_005716f0; /* 0x5716f0 */
extern unsigned int DAT_005716f4; /* 0x5716f4 */
extern unsigned int DAT_005716f8; /* 0x5716f8 */
extern unsigned int DAT_005716fc; /* 0x5716fc */
extern unsigned int DAT_00571700; /* 0x571700 */
extern unsigned int DAT_00571704; /* 0x571704 */
extern unsigned int DAT_00571708; /* 0x571708 */
extern unsigned int DAT_0057170c; /* 0x57170c */
extern unsigned int DAT_00571710; /* 0x571710 */
extern unsigned int DAT_00571714; /* 0x571714 */
extern unsigned int DAT_00571728; /* 0x571728 */
extern unsigned int DAT_0057172c; /* 0x57172c */
extern unsigned int DAT_00571730; /* 0x571730 */
extern unsigned int DAT_00571734; /* 0x571734 */
extern unsigned int DAT_00571738; /* 0x571738 */
extern unsigned int DAT_0057173c; /* 0x57173c */
extern unsigned int DAT_00571758; /* 0x571758 */
extern unsigned int DAT_0057175c; /* 0x57175c */
extern unsigned int DAT_00571768; /* 0x571768 */
extern unsigned int DAT_0057176c; /* 0x57176c */
extern unsigned int DAT_00571778; /* 0x571778 */
extern unsigned int DAT_0057177c; /* 0x57177c */
extern unsigned int DAT_0057a6e8; /* 0x57a6e8 */

/* Supplied declaration required: gameGetSlotTable. */
extern unsigned int *asdListBoxGetIntValuePtr(unsigned int, unsigned int);
extern int FUN_0032c430(unsigned int);
extern unsigned int FUN_003874fc(unsigned int);


void FUN_004d290c(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_003874fc(*(unsigned int *)(param_1 + 0x10));
  switch(temp_v0) {
  case 0:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 != 0) {
      temp_v2 = DAT_00571640 | *(unsigned int *)(param_2 + 0x45a8);
      temp_v3 = DAT_00571644 | *(unsigned int *)(param_2 + 0x45ac);
      break;
    }
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac);
    temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571640;
    temp_v4 = DAT_00571644;
    temp_v3 = ~temp_v4 & temp_v3;
    *(unsigned int *)(param_2 + 0x45a8) = temp_v2;
    *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
    return;
  case 1:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    puVar3 = (unsigned int *)(param_2 + 0x45a8);
    if (temp_v1 != 0) {
      temp_v2 = DAT_00571648 | *puVar3;
      temp_v3 = DAT_0057164c | *(unsigned int *)(param_2 + 0x45ac);
      break;
    }
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_0057164c;
    *puVar3 = *puVar3 & ~DAT_00571648;
    *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
    return;
  case 2:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 != 0) {
      temp_v2 = DAT_00571650 | *(unsigned int *)(param_2 + 0x45a8);
      temp_v3 = DAT_00571654 | *(unsigned int *)(param_2 + 0x45ac);
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571650;
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_00571654;
    }
    *(unsigned int *)(param_2 + 0x45a8) = temp_v2;
    *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
    return;
  case 3:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 != 0) {
      temp_v2 = DAT_00571658 | *(unsigned int *)(param_2 + 0x45a8);
      temp_v3 = DAT_0057165c | *(unsigned int *)(param_2 + 0x45ac);
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571658;
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_0057165c;
    }
    break;
  case 4:
    puVar4 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x4d5c) = *puVar4;
    return;
  case 5:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 != 0) {
      temp_v2 = DAT_00571660 | *(unsigned int *)(param_2 + 0x45a8);
      temp_v3 = DAT_00571664 | *(unsigned int *)(param_2 + 0x45ac);
      break;
    }
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac);
    temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571660;
    temp_v4 = DAT_00571664;
    temp_v3 = ~temp_v4 & temp_v3;
    *(unsigned int *)(param_2 + 0x45a8) = temp_v2;
    *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
    return;
  case 6:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 != 0) {
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac);
      temp_v2 = DAT_00571668 | *(unsigned int *)(param_2 + 0x45a8);
      temp_v4 = DAT_0057166c;
      temp_v3 = temp_v3 | temp_v4;
      break;
    }
    temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571668;
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_0057166c;
    *(unsigned int *)(param_2 + 0x45a8) = temp_v2;
    *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
    return;
  case 7:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 != 0) {
      temp_v2 = DAT_00571670 | *(unsigned int *)(param_2 + 0x45a8);
      temp_v3 = DAT_00571674 | *(unsigned int *)(param_2 + 0x45ac);
    }
    else {
      temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571670;
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_00571674;
    }
    break;
  case 8:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 == 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571768;
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_0057176c;
      *(unsigned int *)(param_2 + 0x45a8) = temp_v2;
      *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
      return;
    }
    temp_v2 = DAT_00571768 | *(unsigned int *)(param_2 + 0x45a8);
    temp_v3 = DAT_0057176c | *(unsigned int *)(param_2 + 0x45ac);
    *(unsigned int *)(param_2 + 0x45a8) = temp_v2;
    *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
    return;
  case 9:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 == 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571678;
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_0057167c;
      break;
    }
    temp_v4 = *(unsigned int *)(param_2 + 0x45ac);
    temp_v2 = *(unsigned int *)(param_2 + 0x45a8) | DAT_00571678;
    temp_v3 = DAT_0057167c;
    temp_v3 = temp_v3 | temp_v4;
    break;
  case 10:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 == 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571680;
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_00571684;
      break;
    }
    temp_v4 = *(unsigned int *)(param_2 + 0x45ac);
    temp_v2 = DAT_00571680 | *(unsigned int *)(param_2 + 0x45a8);
    temp_v3 = DAT_00571684;
    temp_v3 = temp_v3 | temp_v4;
    break;
  case 0xb:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    puVar3 = (unsigned int *)(param_2 + 0x45a8);
    if (temp_v1 != 0) {
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) | DAT_0057168c;
      *puVar3 = DAT_00571688 | *puVar3;
      *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
      return;
    }
    temp_v2 = *puVar3 & ~DAT_00571688;
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_0057168c;
    break;
  case 0xc:
    puVar4 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    temp_v0 = *puVar4;
    puVar4 = (unsigned int *)(param_2 + 0x4cd4);
    *puVar4 = temp_v0;
    return;
  case 0xd:
    puVar4 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    temp_v0 = *puVar4;
    puVar4 = (unsigned int *)gameGetSlotTable();
    *puVar4 = temp_v0;
    return;
  case 0xe:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 == 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_005716b8;
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_005716bc;
      break;
    }
    temp_v2 = DAT_005716b8 | *(unsigned int *)(param_2 + 0x45a8);
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac) | DAT_005716bc;
    *(unsigned int *)(param_2 + 0x45a8) = temp_v2;
    *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
    return;
  case 0xf:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 != 0) {
      temp_v3 = DAT_005716d8 | *(unsigned int *)(param_2 + 0x45a8);
      *(unsigned int *)(param_2 + 0x45ac) = DAT_005716dc | *(unsigned int *)(param_2 + 0x45ac);
      *(unsigned int *)(param_2 + 0x45a8) = temp_v3;
      return;
    }
    temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_005716d8;
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_005716dc;
    *(unsigned int *)(param_2 + 0x45a8) = temp_v2;
    *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
    return;
  case 0x10:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 != 0) {
      temp_v2 = DAT_005716e0 | *(unsigned int *)(param_2 + 0x45a8);
      temp_v3 = DAT_005716e4 | *(unsigned int *)(param_2 + 0x45ac);
      break;
    }
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac);
    temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_005716e0;
    temp_v4 = DAT_005716e4;
    temp_v3 = ~temp_v4 & temp_v3;
    break;
  case 0x11:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 == 0) {
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_005716ec;
      *(unsigned int *)(param_2 + 0x45a8) = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_005716e8;
      *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
      return;
    }
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac);
    temp_v2 = *(unsigned int *)(param_2 + 0x45a8) | DAT_005716e8;
    temp_v4 = DAT_005716ec;
    temp_v3 = temp_v3 | temp_v4;
    break;
  case 0x12:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    puVar3 = (unsigned int *)(param_2 + 0x45a8);
    if (temp_v1 == 0) {
      temp_v3 = ~DAT_005716f0;
      *(unsigned int *)(param_2 + 0x45ac) = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_005716f4;
      *puVar3 = *puVar3 & temp_v3;
      return;
    }
    temp_v3 = DAT_005716f0 | *puVar3;
    *(unsigned int *)(param_2 + 0x45ac) = *(unsigned int *)(param_2 + 0x45ac) | DAT_005716f4;
    *puVar3 = temp_v3;
    return;
  case 0x13:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 != 0) {
      temp_v3 = DAT_005716f8 | *(unsigned int *)(param_2 + 0x45a8);
      *(unsigned int *)(param_2 + 0x45ac) = DAT_005716fc | *(unsigned int *)(param_2 + 0x45ac);
      *(unsigned int *)(param_2 + 0x45a8) = temp_v3;
      return;
    }
    temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_005716f8;
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_005716fc;
    *(unsigned int *)(param_2 + 0x45a8) = temp_v2;
    *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
    return;
  case 0x14:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 == 0) {
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac);
      temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571700;
      temp_v4 = DAT_00571704;
      temp_v3 = ~temp_v4 & temp_v3;
      break;
    }
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac);
    temp_v2 = *(unsigned int *)(param_2 + 0x45a8) | DAT_00571700;
    temp_v4 = DAT_00571704;
    temp_v3 = temp_v3 | temp_v4;
    break;
  case 0x15:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    puVar3 = (unsigned int *)(param_2 + 0x45a8);
    if (temp_v1 == 0) {
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_0057170c;
      *puVar3 = *puVar3 & ~DAT_00571708;
      *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
      return;
    }
    temp_v2 = DAT_00571708 | *puVar3;
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac) | DAT_0057170c;
    break;
  case 0x16:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 == 0) {
      temp_v3 = ~DAT_00571710;
      *(unsigned int *)(param_2 + 0x45ac) = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_00571714;
      *(unsigned int *)(param_2 + 0x45a8) = *(unsigned int *)(param_2 + 0x45a8) & temp_v3;
      return;
    }
    temp_v3 = DAT_00571710 | *(unsigned int *)(param_2 + 0x45a8);
    *(unsigned int *)(param_2 + 0x45ac) = DAT_00571714 | *(unsigned int *)(param_2 + 0x45ac);
    *(unsigned int *)(param_2 + 0x45a8) = temp_v3;
    return;
  case 0x17:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 == 0) {
      temp_v3 = ~DAT_00571728;
      *(unsigned int *)(param_2 + 0x45ac) = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_0057172c;
      *(unsigned int *)(param_2 + 0x45a8) = *(unsigned int *)(param_2 + 0x45a8) & temp_v3;
      return;
    }
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac);
    temp_v2 = DAT_00571728 | *(unsigned int *)(param_2 + 0x45a8);
    temp_v4 = DAT_0057172c;
    temp_v3 = temp_v3 | temp_v4;
    break;
  case 0x18:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 == 0) {
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac);
      temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571730;
      temp_v4 = DAT_00571734;
      temp_v3 = temp_v3 & ~temp_v4;
      break;
    }
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac);
    temp_v2 = *(unsigned int *)(param_2 + 0x45a8) | DAT_00571730;
    temp_v4 = DAT_00571734;
    temp_v3 = temp_v3 | temp_v4;
    break;
  case 0x19:
    puVar4 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x302c) = *puVar4;
    return;
  case 0x1a:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 == 0) {
      temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571738;
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_0057173c;
      break;
    }
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac);
    temp_v2 = DAT_00571738 | *(unsigned int *)(param_2 + 0x45a8);
    temp_v4 = DAT_0057173c;
    temp_v3 = temp_v3 | temp_v4;
    break;
  case 0x1b:
    puVar4 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x3034) = *puVar4;
    return;
  case 0x1c:
    puVar4 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    DAT_0057a6e8 = *puVar4;
    return;
  case 0x1d:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v1 != 0) {
      temp_v2 = DAT_00571758 | *(unsigned int *)(param_2 + 0x45a8);
      temp_v3 = DAT_0057175c | *(unsigned int *)(param_2 + 0x45ac);
      break;
    }
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac);
    temp_v2 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571758;
    temp_v4 = DAT_0057175c;
    temp_v3 = temp_v3 & ~temp_v4;
    break;
  case 0x1e:
    puVar4 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    temp_v0 = *puVar4;
    temp_v1 = gameGetSlotTable();
    *(short *)(temp_v1 + 0x2c4e) = (short)temp_v0;
    return;
  case 0x1f:
    temp_v1 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    puVar3 = (unsigned int *)(param_2 + 0x45a8);
    if (temp_v1 != 0) {
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) | DAT_0057177c;
      *puVar3 = *puVar3 | DAT_00571778;
      *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
      return;
    }
    temp_v2 = *puVar3 & ~DAT_00571778;
    temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_0057177c;
    break;
  case 0x20:
    puVar4 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    temp_v0 = *puVar4;
    puVar4 = (unsigned int *)(param_2 + 0x4d6c);
    *puVar4 = temp_v0;
    return;
  default:
    return;
  }
  *(unsigned int *)(param_2 + 0x45a8) = temp_v2;
  *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
  return;
}

} /* extern "C" */
