/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00187a84` (_code @ 0x187a84, 0x280 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a0fc(int, int, int);

/* stack frame of param_4: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_4_stack;

/* Supplied declaration required: FUN_0019a0fc. */


void FUN_00187a84(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v2 = param_1 + 0x1198;
  *(unsigned int *)(param_1 + 0x1198) = *(unsigned int *)(param_1 + 0x5b8);
  *(unsigned int *)(param_1 + 0x119c) = *(unsigned int *)(param_1 + 0x5bc);
  *(unsigned int *)(param_1 + 0x11a0) = *(unsigned int *)(param_1 + 0x5c0);
  *(unsigned int *)(param_1 + 0x11a4) = *(unsigned int *)(param_1 + 0x5c4);
  *(unsigned int *)(param_1 + 0x11a8) = *(unsigned int *)(param_1 + 0x5c8);
  *(unsigned int *)(param_1 + 0x11ac) = *(unsigned int *)(param_1 + 0x5cc);
  *(unsigned int *)(param_1 + 0x11b0) = *(unsigned int *)(param_1 + 0x5d0);
  *(unsigned int *)(param_1 + 0x11b4) = *(unsigned int *)(param_1 + 0x5d4);
  *(unsigned int *)(param_1 + 0x11b8) = *(unsigned int *)(param_1 + 0x5d8);
  *(unsigned int *)(param_1 + 0x11bc) = *(unsigned int *)(param_1 + 0x5dc);
  *(unsigned int *)(param_1 + 0x11c0) = *(unsigned int *)(param_1 + 0x5e0);
  *(unsigned int *)(param_1 + 0x11c4) = *(unsigned int *)(param_1 + 0x5e4);
  *(unsigned int *)(param_1 + 0x11c8) = *(unsigned int *)(param_1 + 0x5e8);
  *(unsigned int *)(param_1 + 0x11cc) = *(unsigned int *)(param_1 + 0x5ec);
  *(unsigned int *)(param_1 + 0x11d0) = *(unsigned int *)(param_1 + 0x5f0);
  *(unsigned int *)(param_1 + 0x11d4) = *(unsigned int *)(param_1 + 0x5f4);
  if (param_2 != (unsigned int *)0x0) {
    temp_v0 = param_2[1];
    temp_v1 = param_2[2];
    temp_v3 = param_2[3];
    temp_v4 = param_2[4];
    temp_v5 = param_2[5];
    temp_v6 = param_2[6];
    temp_v7 = param_2[7];
    *(unsigned int *)(param_1 + 0x1158) = *param_2;
    *(unsigned int *)(param_1 + 0x115c) = temp_v0;
    *(unsigned int *)(param_1 + 0x1160) = temp_v1;
    *(unsigned int *)(param_1 + 0x1164) = temp_v3;
    *(unsigned int *)(param_1 + 0x1168) = temp_v4;
    *(unsigned int *)(param_1 + 0x116c) = temp_v5;
    *(unsigned int *)(param_1 + 0x1170) = temp_v6;
    *(unsigned int *)(param_1 + 0x1174) = temp_v7;
    temp_v0 = param_2[8];
    temp_v1 = param_2[9];
    temp_v3 = param_2[10];
    temp_v7 = param_2[0xb];
    temp_v4 = param_2[0xc];
    temp_v5 = param_2[0xd];
    temp_v6 = param_2[0xe];
    *(unsigned int *)(param_1 + 0x1194) = param_2[0xf];
    *(unsigned int *)(param_1 + 0x1178) = temp_v0;
    *(unsigned int *)(param_1 + 0x117c) = temp_v1;
    *(unsigned int *)(param_1 + 0x1180) = temp_v3;
    *(unsigned int *)(param_1 + 0x1184) = temp_v7;
    *(unsigned int *)(param_1 + 0x1188) = temp_v4;
    *(unsigned int *)(param_1 + 0x118c) = temp_v5;
    *(unsigned int *)(param_1 + 0x1190) = temp_v6;
    FUN_0019a0fc(temp_v2,temp_v2,param_1 + 0x1158);
  }
  else {
    *(unsigned int *)(param_1 + 0x1158) = *(unsigned int *)(param_1 + 0x5b8);
    *(unsigned int *)(param_1 + 0x115c) = *(unsigned int *)(param_1 + 0x5bc);
    *(unsigned int *)(param_1 + 0x1160) = *(unsigned int *)(param_1 + 0x5c0);
    *(unsigned int *)(param_1 + 0x1164) = *(unsigned int *)(param_1 + 0x5c4);
    *(unsigned int *)(param_1 + 0x1168) = *(unsigned int *)(param_1 + 0x5c8);
    *(unsigned int *)(param_1 + 0x116c) = *(unsigned int *)(param_1 + 0x5cc);
    *(unsigned int *)(param_1 + 0x1170) = *(unsigned int *)(param_1 + 0x5d0);
    *(unsigned int *)(param_1 + 0x1174) = *(unsigned int *)(param_1 + 0x5d4);
    *(unsigned int *)(param_1 + 0x1178) = *(unsigned int *)(param_1 + 0x5d8);
    *(unsigned int *)(param_1 + 0x117c) = *(unsigned int *)(param_1 + 0x5dc);
    *(unsigned int *)(param_1 + 0x1180) = *(unsigned int *)(param_1 + 0x5e0);
    *(unsigned int *)(param_1 + 0x1184) = *(unsigned int *)(param_1 + 0x5e4);
    *(unsigned int *)(param_1 + 0x1188) = *(unsigned int *)(param_1 + 0x5e8);
    *(unsigned int *)(param_1 + 0x118c) = *(unsigned int *)(param_1 + 0x5ec);
    *(unsigned int *)(param_1 + 0x1190) = *(unsigned int *)(param_1 + 0x5f0);
    *(unsigned int *)(param_1 + 0x1194) = *(unsigned int *)(param_1 + 0x5f4);
  }
  if (param_3 != (unsigned int *)0x0) {
    temp_v0 = param_3[1];
    temp_v1 = param_3[2];
    temp_v3 = param_3[3];
    temp_v4 = param_3[4];
    temp_v5 = param_3[5];
    temp_v6 = param_3[6];
    temp_v7 = param_3[7];
    *(unsigned int *)(param_1 + 0x1118) = *param_3;
    *(unsigned int *)(param_1 + 0x111c) = temp_v0;
    *(unsigned int *)(param_1 + 0x1120) = temp_v1;
    *(unsigned int *)(param_1 + 0x1124) = temp_v3;
    *(unsigned int *)(param_1 + 0x1128) = temp_v4;
    *(unsigned int *)(param_1 + 0x112c) = temp_v5;
    *(unsigned int *)(param_1 + 0x1130) = temp_v6;
    *(unsigned int *)(param_1 + 0x1134) = temp_v7;
    temp_v0 = param_3[8];
    temp_v1 = param_3[9];
    temp_v3 = param_3[10];
    temp_v4 = param_3[0xb];
    temp_v7 = param_3[0xc];
    temp_v5 = param_3[0xd];
    temp_v6 = param_3[0xe];
    *(unsigned int *)(param_1 + 0x1154) = param_3[0xf];
    *(unsigned int *)(param_1 + 0x1138) = temp_v0;
    *(unsigned int *)(param_1 + 0x113c) = temp_v1;
    *(unsigned int *)(param_1 + 0x1140) = temp_v3;
    *(unsigned int *)(param_1 + 0x1144) = temp_v4;
    *(unsigned int *)(param_1 + 0x1148) = temp_v7;
    *(unsigned int *)(param_1 + 0x114c) = temp_v5;
    *(unsigned int *)(param_1 + 0x1150) = temp_v6;
    FUN_0019a0fc(temp_v2,temp_v2,param_1 + 0x1118);
  }
  else {
    *(unsigned int *)(param_1 + 0x1118) = *(unsigned int *)(param_1 + 0x5b8);
    *(unsigned int *)(param_1 + 0x111c) = *(unsigned int *)(param_1 + 0x5bc);
    *(unsigned int *)(param_1 + 0x1120) = *(unsigned int *)(param_1 + 0x5c0);
    *(unsigned int *)(param_1 + 0x1124) = *(unsigned int *)(param_1 + 0x5c4);
    *(unsigned int *)(param_1 + 0x1128) = *(unsigned int *)(param_1 + 0x5c8);
    *(unsigned int *)(param_1 + 0x112c) = *(unsigned int *)(param_1 + 0x5cc);
    *(unsigned int *)(param_1 + 0x1130) = *(unsigned int *)(param_1 + 0x5d0);
    *(unsigned int *)(param_1 + 0x1134) = *(unsigned int *)(param_1 + 0x5d4);
    *(unsigned int *)(param_1 + 0x1138) = *(unsigned int *)(param_1 + 0x5d8);
    *(unsigned int *)(param_1 + 0x113c) = *(unsigned int *)(param_1 + 0x5dc);
    *(unsigned int *)(param_1 + 0x1140) = *(unsigned int *)(param_1 + 0x5e0);
    *(unsigned int *)(param_1 + 0x1144) = *(unsigned int *)(param_1 + 0x5e4);
    *(unsigned int *)(param_1 + 0x1148) = *(unsigned int *)(param_1 + 0x5e8);
    *(unsigned int *)(param_1 + 0x114c) = *(unsigned int *)(param_1 + 0x5ec);
    *(unsigned int *)(param_1 + 0x1150) = *(unsigned int *)(param_1 + 0x5f0);
    *(unsigned int *)(param_1 + 0x1154) = *(unsigned int *)(param_1 + 0x5f4);
  }
  if (param_4 != (unsigned int *)0x0) {
    temp_v0 = param_4[1];
    temp_v1 = param_4[2];
    temp_v3 = param_4[3];
    temp_v4 = param_4[4];
    temp_v5 = param_4[5];
    temp_v6 = param_4[6];
    temp_v7 = param_4[7];
    *(unsigned int *)(param_1 + 0x534) = *param_4;
    *(unsigned int *)(param_1 + 0x538) = temp_v0;
    *(unsigned int *)(param_1 + 0x53c) = temp_v1;
    *(unsigned int *)(param_1 + 0x540) = temp_v3;
    *(unsigned int *)(param_1 + 0x544) = temp_v4;
    *(unsigned int *)(param_1 + 0x548) = temp_v5;
    *(unsigned int *)(param_1 + 0x54c) = temp_v6;
    *(unsigned int *)(param_1 + 0x550) = temp_v7;
    temp_v0 = param_4[8];
    temp_v1 = param_4[9];
    temp_v3 = param_4[10];
    temp_v7 = param_4[0xb];
    temp_v4 = param_4[0xc];
    temp_v5 = param_4[0xd];
    temp_v6 = param_4[0xe];
    *(unsigned int *)(param_1 + 0x570) = param_4[0xf];
    *(unsigned int *)(param_1 + 0x554) = temp_v0;
    *(unsigned int *)(param_1 + 0x558) = temp_v1;
    *(unsigned int *)(param_1 + 0x55c) = temp_v3;
    *(unsigned int *)(param_1 + 0x560) = temp_v7;
    *(unsigned int *)(param_1 + 0x564) = temp_v4;
    *(unsigned int *)(param_1 + 0x568) = temp_v5;
    *(unsigned int *)(param_1 + 0x56c) = temp_v6;
    FUN_0019a0fc(temp_v2,temp_v2,param_1 + 0x534);
    return;
  }
  *(unsigned int *)(param_1 + 0x534) = *(unsigned int *)(param_1 + 0x5b8);
  *(unsigned int *)(param_1 + 0x538) = *(unsigned int *)(param_1 + 0x5bc);
  *(unsigned int *)(param_1 + 0x53c) = *(unsigned int *)(param_1 + 0x5c0);
  *(unsigned int *)(param_1 + 0x540) = *(unsigned int *)(param_1 + 0x5c4);
  *(unsigned int *)(param_1 + 0x544) = *(unsigned int *)(param_1 + 0x5c8);
  *(unsigned int *)(param_1 + 0x548) = *(unsigned int *)(param_1 + 0x5cc);
  *(unsigned int *)(param_1 + 0x54c) = *(unsigned int *)(param_1 + 0x5d0);
  *(unsigned int *)(param_1 + 0x550) = *(unsigned int *)(param_1 + 0x5d4);
  *(unsigned int *)(param_1 + 0x570) = *(unsigned int *)(param_1 + 0x5f4);
  *(unsigned int *)(param_1 + 0x554) = *(unsigned int *)(param_1 + 0x5d8);
  *(unsigned int *)(param_1 + 0x558) = *(unsigned int *)(param_1 + 0x5dc);
  *(unsigned int *)(param_1 + 0x55c) = *(unsigned int *)(param_1 + 0x5e0);
  *(unsigned int *)(param_1 + 0x560) = *(unsigned int *)(param_1 + 0x5e4);
  *(unsigned int *)(param_1 + 0x564) = *(unsigned int *)(param_1 + 0x5e8);
  *(unsigned int *)(param_1 + 0x568) = *(unsigned int *)(param_1 + 0x5ec);
  *(unsigned int *)(param_1 + 0x56c) = *(unsigned int *)(param_1 + 0x5f0);
  return;
}

} /* extern "C" */
