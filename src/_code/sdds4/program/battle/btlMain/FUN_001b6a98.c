/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b6a98` (_code @ 0x1b6a98, 0x714 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_0019d84c. */
/* Supplied declaration required: FUN_0027dd94. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002a84bc. */
/* Supplied declaration required: FUN_002ae3f0. */
/* Supplied declaration required: FUN_002bf41c. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c4450. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c4b84. */
/* Supplied declaration required: FUN_0033a648. */
/* Supplied declaration required: FUN_00394c6c. */


void FUN_001b6a98(unsigned int *param_1)

{
/* irregular: 1 goto(s); 13 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int *puVar8;
  unsigned int temp_v6;
  
  FUN_0019d84c();
  FUN_002bf41c(*param_1);
  FUN_0027dd94(0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(unsigned char *)(param_1 + 0x112d) = 0;
  *(unsigned char *)((int)param_1 + 0x44b5) = 0;
  *(unsigned char *)((int)param_1 + 0x44b6) = 0;
  *(unsigned char *)((int)param_1 + 0x44b7) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(unsigned short *)((int)param_1 + 0x1fca) = 1;
  *(unsigned char *)(param_1 + 0x7a7) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6d] = 0;
  param_1[0xfc] = 0;
  FUN_00394c6c();
  param_1[0x127d] = 0;
  param_1[0x127e] = 0;
  *(unsigned short *)(param_1 + 0x127f) = 0;
  *(unsigned short *)((int)param_1 + 0x49fe) = 0;
  FUN_0033a648(param_1);
  param_1[0x30] = 0xffffffff;
  param_1[0x31] = 0xffffffff;
  FUN_002c4b30(param_1 + 0x32,0x74);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3e] = 0x3f800000;
  param_1[0x3f] = 0x3f800000;
  param_1[0x51] = 0xffffffff;
  param_1[0x52] = 0xffffffff;
  *(unsigned char *)(param_1 + 0x53) = 0;
  param_1[0x4f] = 0xffffffff;
  param_1[0x56] = 0;
  param_1[0x50] = 0xffffffff;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  temp_v0 = FUN_002c4b84(0x100,0x100,0,0x8f64,1);
  piVar7 = (int *)(param_1 + 0x7a6);
  temp_v6 = 0;
  *piVar7 = temp_v0;
  do {
    FUN_002c4b30(*piVar7 + temp_v6 * 0x114,0x114);
    *(short *)(*piVar7 + temp_v6 * 0x114 + 0x62) = (short)temp_v6;
    *(unsigned short *)(*piVar7 + temp_v6 * 0x114 + 0x60) = 0xffff;
    temp_v0 = temp_v6 * 0x114;
    *(unsigned int *)(*piVar7 + temp_v6 * 0x114 + 0xf0) = 0xffffffff;
    temp_v5 = temp_v6 * 0x114;
    temp_v6 = (temp_v6 + 1) & 0xffff;
    *(unsigned int *)(*piVar7 + temp_v0 + 0xf4) = 0xffffffff;
    *(unsigned int *)(*piVar7 + temp_v5 + 0x9c) = 0x96;
  } while (temp_v6 < 0x85);
  *(unsigned char *)((int)param_1 + 0x1e9d) = 0;
  temp_v0 = FUN_002c4b84(0x100,0x100,0,0x4b0,1);
  temp_v6 = 0;
  param_1[0x7ef] = temp_v0;
  do {
    puVar4 = (unsigned short *)(param_1[0x7ef] + temp_v6 * 0x18);
    temp_v6 = (temp_v6 + 1) & 0xffff;
    *puVar4 = 0xffff;
    puVar4[1] = 0xffff;
    puVar4[2] = 0;
    *(unsigned int *)(puVar4 + 4) = 0xffffffff;
    *(unsigned int *)(puVar4 + 6) = 0;
    *(unsigned int *)(puVar4 + 8) = 0;
    *(unsigned int *)(puVar4 + 10) = 0;
  } while (temp_v6 < 0x32);
  param_1[0x7a9] = 0;
  param_1[0x7aa] = 0;
  param_1[0x7ab] = 0;
  param_1[0x7ac] = 0;
  param_1[0x7ad] = 0;
  param_1[0x7ae] = 0;
  param_1[0x7af] = 0;
  temp_v0 = FUN_002c4b84(0x100,0x100,0,0x113e8,1);
  piVar7 = (int *)(param_1 + 0x7f0);
  temp_v6 = 0;
  *piVar7 = temp_v0;
LAB_001b6db0:
  puVar8 = (unsigned int *)(*piVar7 + temp_v6 * 0x288);
  *puVar8 = 0;
  puVar8[1] = 0;
  *(unsigned short *)(*piVar7 + temp_v6 * 0x288 + 0x6c) = 0;
  *(short *)(*piVar7 + temp_v6 * 0x288 + 0x6e) = (short)temp_v6;
  *(unsigned int *)(*piVar7 + temp_v6 * 0x288 + 0x278) = 0;
  temp_v0 = 0;
  temp_v5 = 0x32;
  *(unsigned int *)(*piVar7 + temp_v6 * 0x288 + 0x27c) = 0;
  *(unsigned int *)(*piVar7 + temp_v6 * 0x288 + 0x280) = 0;
  *(unsigned int *)(*piVar7 + temp_v6 * 0x288 + 0x284) = 0;
  do {
    *(unsigned short *)(*piVar7 + temp_v6 * 0x288 + 8) = 0;
    while( 1 ) {
      temp_v5 = temp_v5 - 1;
      temp_v0 = temp_v0 + 1;
      if (temp_v5 == 0) {
        temp_v0 = temp_v6 * 0x288;
        temp_v6 = (temp_v6 + 1) & 0xffff;
        *(unsigned short *)(*piVar7 + temp_v0 + 0xd4) = 0xffff;
        if (temp_v6 >= 0x6d) {
          FUN_002c4b30(param_1 + 0x84d,0xa8);
          FUN_002c4b30(param_1 + 0x877,0x54);
          FUN_002c4b30(param_1 + 0x41d,0xe10);
          FUN_002a84bc(param_1 + 0x7a3);
          *(unsigned short *)(param_1 + 0x7f1) = 0;
          *(unsigned short *)((int)param_1 + 0x1fc6) = 0;
          *(unsigned short *)(param_1 + 0x7f2) = 0xffff;
          *(unsigned char *)(param_1 + 0xbc1) = 0;
          param_1[0x7a2] = 0;
          param_1[0x10e5] = 0;
          param_1[0x10e6] = 0;
          param_1[0x1117] = 0;
          param_1[0x1118] = 0;
          param_1[0x1119] = 0;
          param_1[0x111a] = 0;
          param_1[0x111b] = 0;
          param_1[0x111c] = 0;
          param_1[0x111d] = 0;
          param_1[0x111e] = 0;
          param_1[0x111f] = 0;
          param_1[0x1120] = 0;
          param_1[0x1121] = 0;
          param_1[0x1122] = 0;
          param_1[0x1123] = 0;
          param_1[0x1124] = 0;
          param_1[0x1125] = 0;
          param_1[0x1126] = 0;
          FUN_002c4450(param_1 + 0x7f8,3,0xffffffff);
          temp_v1 = FUN_002c4b84(0x100,0x100,0,0x80,1);
          param_1[0x8c4] = temp_v1;
          FUN_002c4b30(temp_v1,0x80);
          param_1[0x8c5] = 0;
          *(unsigned short *)((int)param_1 + 0x2f1e) = 0xffff;
          *(unsigned short *)(param_1 + 0xbc8) = 0xffff;
          param_1[0x1128] = 0;
          param_1[0x1129] = 0;
          param_1[0x112a] = 0;
          param_1[0x112b] = 0;
          param_1[0x89a] = 0;
          param_1[0x89b] = 0;
          param_1[0x126f] = 0;
          param_1[0x1272] = 0;
          *(unsigned char *)(param_1 + 0x1271) = 0;
          *(unsigned char *)((int)param_1 + 0x49c5) = 0;
          param_1[0xbca] = 0;
          param_1[0x1274] = 0;
          param_1[0x1275] = 0;
          param_1[0x1294] = 0;
          param_1[0xbcb] = 0xffffffff;
          param_1[0xbcc] = 2;
          param_1[0xbcd] = 0;
          param_1[0x1283] = 0;
          param_1[0x1289] = 3;
          param_1[0x128b] = 0;
          param_1[0x128d] = 0;
          param_1[0x128f] = 0;
          param_1[0x1284] = 0;
          param_1[0x128a] = 3;
          param_1[0x128c] = 0;
          param_1[0x128e] = 0;
          param_1[0x1290] = 0;
          *(unsigned char *)(param_1 + 0x1114) = 0;
          param_1[0x1115] = 0xffffffff;
          param_1[0x1276] = 0xffffffff;
          param_1[0x127a] = 0xffffffff;
          param_1[0x1278] = 0;
          if (param_1[0x1291] != 0) {
            FUN_002c4360();
            param_1[0x1291] = 0;
          }
          if (param_1[0x1292] != 0) {
            FUN_002a755c();
            param_1[0x1292] = 0;
          }
          temp_v6 = 1;
          param_1[0x1293] = 0;
          param_1[0x23] = 0;
          param_1[0x24] = 0;
          param_1[0x25] = 0;
          param_1[0x26] = 0;
          param_1[0x27] = 0;
          param_1[0x28] = 0;
          param_1[0x29] = 0;
          param_1[0x2a] = 0;
          param_1[0x2b] = 0;
          param_1[0x2c] = 0;
          *(unsigned short *)(param_1 + 0x2d) = 0;
          do {
            temp_v2 = temp_v6;
            FUN_002ae3f0();
            temp_v4 = temp_v3;
            if (temp_v2 != 0) {
              temp_v4 = (unsigned int)*(unsigned char *)(temp_v2 + 0x4b);
            }
            if (temp_v2 != 0 && temp_v4 != 0) {
              *(unsigned short *)((int)param_1 + *(short *)(param_1 + 0x2d) * 2 + 0x8c) =
                   *(unsigned short *)(temp_v2 + 0x20);
              *(short *)(param_1 + 0x2d) = *(short *)(param_1 + 0x2d) + 1;
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 400);
          return;
        }
        goto LAB_001b6db0;
      }
      if (temp_v0 == 0) break;
      *(unsigned short *)(*piVar7 + temp_v6 * 0x288 + temp_v0 * 2 + 8) = 0xffff;
    }
  } while( 1 );
}
