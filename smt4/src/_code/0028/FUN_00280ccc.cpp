/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00280ccc` (_code @ 0x280ccc, 0xab8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "game/GameState.h"
/* The decompiler copies some game state fields as raw words of another type: those uses cast. */
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {


int CONCAT44(double, double);
int FUN_001f7c78(void);
int mapIfActivateRecord(int, unsigned int);
int __hardfp_atan2f(void);
int mathPositionHeadingDegrees(void);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} void_stack;

extern int g_entryTableInfo; /* 0x447a28 */










































extern unsigned char g_namedEntryTable; /* 0x4a1264 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001f7c78. */
/* Supplied declaration required: mapIfActivateRecord. */
extern int FUN_0027d968(void);
/* Supplied declaration required: __hardfp_atan2f. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
/* Supplied declaration required: libc_strcpy. */
extern int gameFlagIsSet(unsigned int);


void FUN_00280ccc(void)

{
/* irregular: 4 goto(s); irregular input(s): in_fpscr, in_s0, in_s1, in_s2, in_s3, in_s4, in_s5, in_s6; 11 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int *puVar4;
  int *piVar5;
  int temp_v3;
  float *pfVar7;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v8;
  unsigned int temp_v9;
  unsigned int in_s1;
  float temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  float in_s2;
  float in_s3;
  float in_s4;
  float in_s5;
  float in_s6;
  unsigned int temp_v13;
  unsigned int temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  int temp_v23;
  unsigned long long temp_v24;
  
  temp_v6 = 0;
  temp_v18 = (unsigned long long)in_s1;
  temp_v23 = 0;
  g_gameState.area = -1;
  g_gameState.unk058 = 0xffffffff;
  g_gameState.overviewRecord = 0xffffffff;
  g_gameState.map.destinationSet = 0;
  g_gameState.unk0B8 = '\0';
  g_gameState.unk0C0 = 0xffff;
  if (0 < g_entryTableInfo) {
    temp_v8 = in_s3 + 360.0f;
    temp_v21 = 50.0f;
    temp_v22 = 45.0f;
    temp_v20 = 0.0f;
    temp_v17 = in_s0;
    do {
      temp_v0 = temp_v6 * 0x178;
      if (*(char *)(temp_v0 + 0x4a13c8) == '\0') {
        temp_v3 = *(int *)(temp_v6 * 4 + 0x4a0fe4);
        piVar5 = *(int **)(*(int *)(temp_v3 + 0x14) + 0x1c);
        temp_v7 = *piVar5;
        temp_v10 = (float)temp_v18;
        if (temp_v7 != 0) {
          if (temp_v7 != 1) {
            if (temp_v7 == 2) {
              temp_v7 = 0;
              do {
                temp_v4 = temp_v7 * 0xc + temp_v6 * 0x178;
                temp_v9 = in_fpscr & 0xfffffff;
                in_fpscr = temp_v9 | ((unsigned int)(temp_v20 <=
                                           (temp_v17 * *(float *)(&g_namedEntryTable + temp_v4 + 0x7c) +
                                            (temp_v10 + temp_v22) *
                                            *(float *)(&g_namedEntryTable + temp_v4 + 0x80) +
                                           in_s2 * *(float *)(&g_namedEntryTable + temp_v4 + 0x84)) -
                                           *(float *)(&g_namedEntryTable +
                                                     temp_v7 * 4 + temp_v6 * 0x178 + 0xc4)) << 0x1d);
                if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) goto LAB_00281704;
                temp_v7 = temp_v7 + 1;
              } while (temp_v7 < 6);
              temp_v7 = *(int *)(*(int *)(temp_v3 + 0x14) + 4);
              if (-1 < temp_v7) {
                if (*(char *)(temp_v0 + 0x4a138c) != '\0') {
                  temp_v10 = *(float *)(temp_v0 + 0x4a12dc);
                  in_fpscr = temp_v9 | ((unsigned int)(temp_v20 <= in_s3) << 0x1d);
                  if ((!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) ||
                     (temp_v9 = temp_v9 | ((unsigned int)(temp_v20 < temp_v10) << 0x1f) |
                               ((unsigned int)(temp_v20 == temp_v10) << 0x1e),
                     in_fpscr = temp_v9 | ((unsigned int)((temp_v20 != temp_v20) || (temp_v10 != temp_v10)) << 0x1c),
                     temp_v1 = (unsigned char)(temp_v9 >> 0x18), temp_v12 = in_s3,
                     !(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
                    temp_v10 = temp_v10 + 360.0f;
                    temp_v12 = temp_v8;
                  }
                  temp_v9 = (unsigned int)temp_v12;
                  temp_v11 = (unsigned int)temp_v10;
                  temp_v4 = (int)(((long long)(int)temp_v9 * -0x49f49f49 + ((unsigned long long)temp_v9 << 0x20))
                               >> 0x20);
                  temp_v5 = (int)(((long long)(int)temp_v11 * -0x49f49f49 + ((unsigned long long)temp_v11 << 0x20))
                               >> 0x20);
                  temp_v10 = (float)VectorSignedToFloat(temp_v9 + ((temp_v4 >> 8) - (temp_v4 >> 0x1f)) *
                                                               -0x168,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v12 = (float)VectorSignedToFloat(temp_v11 + ((temp_v5 >> 8) - (temp_v5 >> 0x1f)) *
                                                               -0x168,(unsigned char)(in_fpscr >> 0x16) & 3);
                  if (((int)(temp_v10 - temp_v12) >= 0x43340001) ||
                     (0xc3340000 < (unsigned int)(temp_v10 - temp_v12))) {
                    in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 <= temp_v10) << 0x1d);
                    if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                      temp_v10 = temp_v10 + 360.0f;
                    }
                    else {
                      temp_v12 = temp_v12 + 360.0f;
                    }
                  }
                  if (((unsigned int)(temp_v12 - temp_v10) < 0xc2b40001) &&
                     ((int)(temp_v12 - temp_v10) < 0x42b40001)) goto LAB_00281704;
                }
                temp_v4 = *(int *)(temp_v0 + 0x4a1390);
                if (temp_v4 != 3) {
                  g_gameState.pendingGroupId = *(unsigned int *)(temp_v0 + 0x4a1394);
                  g_gameState.unk044 = (int)*(short *)(temp_v0 + 0x4a13ce);
                  g_gameState.unk048 = (int)*(char *)(temp_v0 + 0x4a13d0);
                  g_gameState.unk0B4 = (int)*(char *)(temp_v0 + 0x4a13d1);
                  g_gameState.argument = *(unsigned int *)(*(int *)(temp_v3 + 0x14) + 8);
                  g_gameState.unk078 = *(unsigned int *)(*(int *)(temp_v3 + 0x14) + 0xc);
                  g_gameState.unk07C = *(unsigned int *)(*(int *)(temp_v3 + 0x14) + 0x10);
                  g_gameState.overviewRecord = *(unsigned int *)(temp_v0 + 0x4a1388);
                  puVar4 = *(unsigned int **)(temp_v3 + 0xc);
                  (*(unsigned int *)&g_gameState.overviewPosition.x) = *puVar4;
                  (*(unsigned int *)&g_gameState.overviewPosition.y) = puVar4[1];
                  (*(unsigned int *)&g_gameState.overviewPosition.z) = puVar4[2];
                  g_gameState.area = temp_v7;
                  g_gameState.activeGroupId = temp_v4;
                  if (!(temp_v7 == 0x14 || temp_v7 == 0x16)) {
                    temp_v10 = *(float *)(temp_v0 + 0x4a12dc) + 180.0f;
                  }
                  else {
                    temp_v10 = in_s0;
                    mathPositionHeadingDegrees();
                  }
                  g_gameState.overviewHeading = temp_v10;
                  if ((int)temp_v10 >= 0x43b40001) {
                    g_gameState.overviewHeading = temp_v10 - 360.0f;
                  }
                  g_gameState.position.x = *(float *)(temp_v0 + 0x4a12d0) * 250.0f;
                  g_gameState.position.y = *(float *)(temp_v0 + 0x4a12d4) * 250.0f;
                  g_gameState.position.z = *(float *)(temp_v0 + 0x4a12d8) * 250.0f;
                  if (*(int *)(temp_v0 + 0x4a1390) == -0x7fdefbfa) {
                    g_gameState.position.x = *(float *)(temp_v0 + 0x4a12d0) * 120.0f;
                    g_gameState.position.y = *(float *)(temp_v0 + 0x4a12d4) * 120.0f;
                    g_gameState.position.z = *(float *)(temp_v0 + 0x4a12d8) * 120.0f;
                  }
                  g_gameState.position.z = *(float *)(temp_v0 + 0x4a12cc) + g_gameState.position.z;
                  g_gameState.position.y = *(float *)(temp_v0 + 0x4a12c8) + g_gameState.position.y;
                  g_gameState.position.x = *(float *)(temp_v0 + 0x4a12c4) + g_gameState.position.x;
                  g_gameState.heading = *(float *)(temp_v0 + 0x4a12dc);
                  temp_v3 = *(int *)(temp_v6 * 4 + 0x4a0fe4);
                  g_gameState.unk0F8 = *(unsigned char *)(*(int *)(temp_v3 + 0x14) + 0x14);
                  g_gameState.unk0F9 = *(unsigned char *)(*(int *)(temp_v3 + 0x14) + 0x15);
                  g_gameState.unk0FA = *(unsigned char *)(*(int *)(temp_v3 + 0x14) + 0x16);
                  g_gameState.unk0FB = *(unsigned char *)(*(int *)(temp_v3 + 0x14) + 0x17);
                  g_gameState.unk0FC = *(unsigned char *)(*(int *)(temp_v3 + 0x14) + 0x18);
                  g_gameState.unk0FD = *(unsigned char *)(*(int *)(temp_v3 + 0x14) + 0x19);
                  g_gameState.tableKind = (int)*(short *)(temp_v0 + 0x4a13ca);
                  g_gameState.recordId = (int)*(short *)(temp_v0 + 0x4a13cc);
                  g_gameState.unk0BE = *(unsigned short *)(temp_v0 + 0x4a13c0);
                  g_gameState.unk0C0 = *(unsigned short *)(temp_v0 + 0x4a13c2);
                  if (*(char *)(temp_v0 + 0x4a13d2) != '\0') {
                    g_gameState.unk0B9 = *(unsigned char *)(temp_v0 + 0x4a13d3);
                    g_gameState.unk0BA = *(unsigned char *)(temp_v0 + 0x4a13d4);
                    g_gameState.unk0BB = *(unsigned char *)(temp_v0 + 0x4a13d5);
                    g_gameState.unk0BC = *(unsigned char *)(temp_v0 + 0x4a13d6);
                    g_gameState.unk0B8 = *(char *)(temp_v0 + 0x4a13d2);
                  }
                  else if ((((((((g_gameState.activeGroupId == -0x6fefebee) &&
                                (temp_v3 = gameFlagIsSet(0x62), temp_v3 == 0)) ||
                               ((g_gameState.activeGroupId == -0x6fefebfe &&
                                (temp_v3 = gameFlagIsSet(0xa8), temp_v3 == 0)))) ||
                              ((g_gameState.activeGroupId == 0x10105021 &&
                               (temp_v3 = gameFlagIsSet(0x697), temp_v3 == 0)))) ||
                             ((g_gameState.activeGroupId == 0x10105020 &&
                              (temp_v3 = gameFlagIsSet(0x697), temp_v3 == 0)))) ||
                            ((((g_gameState.activeGroupId == 0x10105013 &&
                               (temp_v3 = gameFlagIsSet(0x697), temp_v3 == 0)) ||
                              ((g_gameState.activeGroupId == -0x6fdfebf9 &&
                               (temp_v3 = gameFlagIsSet(0x151), temp_v3 == 0)))) ||
                             ((g_gameState.activeGroupId == -0x6fcfebfb &&
                              (temp_v3 = gameFlagIsSet(0x160), temp_v3 == 0)))))) ||
                           ((g_gameState.activeGroupId == -0x6fcfebfb &&
                            ((temp_v3 = gameFlagIsSet(0x15e), temp_v3 != 0 &&
                             (temp_v3 = gameFlagIsSet(0x15f), temp_v3 == 0)))))) &&
                          (temp_v3 = FUN_0027d968(), temp_v3 != -1)) {
                    g_gameState.unk0B8 = '\x01';
                    g_gameState.unk0B9 = 3;
                    g_gameState.unk0BA = 0;
                    g_gameState.unk0BB = 0;
                    g_gameState.unk0BC = 0;
                  }
                  g_gameState.entryValue = *(int *)(temp_v0 + 0x4a1398);
                  if (g_gameState.entryValue == -1) {
                    g_gameState.entryValue = 0;
                  }
                  else {
                    g_gameState.unk058 = 0xffffffff;
                    libc_strcpy(reinterpret_cast<unsigned int *>(g_gameState.entryText), reinterpret_cast<unsigned int *>(temp_v0 + 0x4a139c));
                  }
                  temp_v23 = mapIfActivateRecord(1,g_gameState.overviewRecord);
                }
                else {
                  g_gameState.map.destinationSet = 1;
                  puVar4 = *(unsigned int **)(temp_v3 + 0xc);
                  (*(unsigned int *)&g_gameState.map.destination.x) = *puVar4;
                  (*(unsigned int *)&g_gameState.map.destination.y) = puVar4[1];
                  (*(unsigned int *)&g_gameState.map.destination.z) = puVar4[2];
                  g_gameState.map.destinationFloor = *(unsigned int *)(temp_v0 + 0x4a12dc);
                  g_gameState.map.destinationKind = *(unsigned int *)(*(int *)(temp_v3 + 0x14) + 8);
                }
              }
            }
          }
          else {
            puVar4 = *(unsigned int **)(temp_v3 + 0xc);
            temp_v16 = *puVar4;
            temp_v14 = puVar4[1];
            temp_v13 = puVar4[2];
            temp_v15 = (temp_v17 * *(float *)(temp_v0 + 0x4a12e0) +
                      (temp_v10 + temp_v21) * *(float *)(temp_v0 + 0x4a12e4) +
                     in_s2 * *(float *)(temp_v0 + 0x4a12e8)) - *(float *)(temp_v0 + 0x4a1328);
            temp_v9 = in_fpscr & 0xfffffff;
            in_fpscr = temp_v9 | ((unsigned int)(temp_v20 <= temp_v15) << 0x1d);
            temp_v12 = (in_s4 * *(float *)(temp_v0 + 0x4a12e0) +
                      (in_s5 + temp_v21) * *(float *)(temp_v0 + 0x4a12e4) +
                     in_s6 * *(float *)(temp_v0 + 0x4a12e8)) - *(float *)(temp_v0 + 0x4a1328);
            if ((!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) &&
               (temp_v9 = temp_v9 | ((unsigned int)(temp_v12 < temp_v20) << 0x1f),
               in_fpscr = temp_v9 | ((unsigned int)((temp_v12 != temp_v12) || (temp_v20 != temp_v20)) << 0x1c),
               (unsigned char)(temp_v9 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
              temp_v7 = -1;
            }
            else {
              temp_v9 = in_fpscr & 0xfffffff;
              temp_v11 = temp_v9 | ((unsigned int)(temp_v15 < temp_v20) << 0x1f);
              in_fpscr = temp_v11 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v20 != temp_v20)) << 0x1c);
              if (((unsigned char)(temp_v11 >> 0x1f) != ((unsigned char)(in_fpscr >> 0x1c) & 1)) ||
                 (in_fpscr = temp_v9 | ((unsigned int)(temp_v20 <= temp_v12) << 0x1d), romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))
                 ) goto LAB_00281704;
              temp_v7 = 1;
            }
            temp_v15 = in_s2;
            temp_v12 = temp_v20;
            if (*(short *)(temp_v0 + 0x4a13d8) != 0) {
              temp_v15 = temp_v20;
              temp_v12 = temp_v17;
            }
            temp_v4 = 0;
            do {
              temp_v5 = temp_v4 * 0xc + temp_v0;
              in_fpscr = (in_fpscr & 0xfffffff) |
                         ((unsigned int)(temp_v20 <=
                                (temp_v12 * *(float *)(&g_namedEntryTable + temp_v5 + 0x88) +
                                 (temp_v10 + temp_v21) * *(float *)(&g_namedEntryTable + temp_v5 + 0x8c) +
                                temp_v15 * *(float *)(&g_namedEntryTable + temp_v5 + 0x90)) -
                                *(float *)(&g_namedEntryTable + temp_v4 * 4 + temp_v0 + 200)) << 0x1d);
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                *(unsigned short *)(temp_v0 + 0x4a13da) = 0;
                goto LAB_00281704;
              }
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < 4);
            *(short *)(temp_v0 + 0x4a13da) = (short)temp_v7;
            if ((*(char *)(temp_v0 + 0x4a138c) == '\0' || temp_v7 == 1) &&
               (temp_v7 = *(int *)(*(int *)(temp_v3 + 0x14) + 4), -1 < temp_v7)) {
              g_gameState.activeGroupId = *(int *)(temp_v0 + 0x4a1390);
              g_gameState.pendingGroupId = *(unsigned int *)(temp_v0 + 0x4a1394);
              g_gameState.unk044 = (int)*(short *)(temp_v0 + 0x4a13ce);
              g_gameState.unk048 = (int)*(char *)(temp_v0 + 0x4a13d0);
              g_gameState.unk0B4 = (int)*(char *)(temp_v0 + 0x4a13d1);
              g_gameState.argument = *(unsigned int *)(*(int *)(temp_v3 + 0x14) + 8);
              g_gameState.unk078 = *(unsigned int *)(*(int *)(temp_v3 + 0x14) + 0xc);
              g_gameState.unk07C = *(unsigned int *)(*(int *)(temp_v3 + 0x14) + 0x10);
              g_gameState.heading = *(float *)(temp_v0 + 0x4a12dc);
              g_gameState.overviewHeading = g_gameState.heading + 180.0f;
              if ((int)g_gameState.overviewHeading >= 0x43b40001) {
                g_gameState.overviewHeading = g_gameState.overviewHeading - 360.0f;
              }
              g_gameState.position.x = *(float *)(temp_v0 + 0x4a12c4) + *(float *)(temp_v0 + 0x4a12d0) * 250.0f;
              g_gameState.position.y = *(float *)(temp_v0 + 0x4a12c8) + *(float *)(temp_v0 + 0x4a12d4) * 250.0f;
              g_gameState.position.z = *(float *)(temp_v0 + 0x4a12cc) + *(float *)(temp_v0 + 0x4a12d8) * 250.0f;
              g_gameState.unk0F8 = *(unsigned char *)(*(int *)(temp_v3 + 0x14) + 0x14);
              g_gameState.unk0F9 = *(unsigned char *)(*(int *)(temp_v3 + 0x14) + 0x15);
              g_gameState.unk0FA = *(unsigned char *)(*(int *)(temp_v3 + 0x14) + 0x16);
              g_gameState.unk0FB = *(unsigned char *)(*(int *)(temp_v3 + 0x14) + 0x17);
              g_gameState.unk0FC = *(unsigned char *)(*(int *)(temp_v3 + 0x14) + 0x18);
              g_gameState.unk0FD = *(unsigned char *)(*(int *)(temp_v3 + 0x14) + 0x19);
              g_gameState.tableKind = (int)*(short *)(temp_v0 + 0x4a13ca);
              g_gameState.recordId = (int)*(short *)(temp_v0 + 0x4a13cc);
              g_gameState.unk0BE = *(unsigned short *)(temp_v0 + 0x4a13c0);
              g_gameState.unk0C0 = *(unsigned short *)(temp_v0 + 0x4a13c2);
              if (*(char *)(temp_v0 + 0x4a13d2) != '\0') {
                g_gameState.unk0B9 = *(unsigned char *)(temp_v0 + 0x4a13d3);
                g_gameState.unk0BA = *(unsigned char *)(temp_v0 + 0x4a13d4);
                g_gameState.unk0BB = *(unsigned char *)(temp_v0 + 0x4a13d5);
                g_gameState.unk0BC = *(unsigned char *)(temp_v0 + 0x4a13d6);
                g_gameState.unk0B8 = *(char *)(temp_v0 + 0x4a13d2);
              }
              g_gameState.entryValue = *(int *)(temp_v0 + 0x4a1398);
              g_gameState.area = temp_v7;
              (*(unsigned int *)&g_gameState.overviewPosition.x) = temp_v16;
              (*(unsigned int *)&g_gameState.overviewPosition.y) = temp_v14;
              (*(unsigned int *)&g_gameState.overviewPosition.z) = temp_v13;
              if (g_gameState.entryValue == -1) {
                g_gameState.entryValue = 0;
              }
              else {
                g_gameState.unk058 = 0xffffffff;
                libc_strcpy(reinterpret_cast<unsigned int *>(g_gameState.entryText), reinterpret_cast<unsigned int *>(temp_v0 + 0x4a139c));
              }
            }
          }
        }
        else {
          pfVar7 = *(float **)(temp_v3 + 0xc);
          temp_v15 = *pfVar7;
          temp_v18 = CONCAT44(temp_v15,temp_v10);
          temp_v12 = (float)piVar5[1] + 150.0f;
          temp_v19 = pfVar7[2];
          temp_v24 = CONCAT44(pfVar7[1],temp_v19);
          temp_v10 = temp_v10 - pfVar7[1];
          temp_v10 = romwright_sqrt_4((temp_v17 - temp_v15) * (temp_v17 - temp_v15) + temp_v10 * temp_v10 +
                        (in_s2 - temp_v19) * (in_s2 - temp_v19));
          temp_v9 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 < temp_v10) << 0x1f) |
                   ((unsigned int)(temp_v12 == temp_v10) << 0x1e);
          in_fpscr = temp_v9 | ((unsigned int)((temp_v12 != temp_v12) || (temp_v10 != temp_v10)) << 0x1c);
          temp_v1 = (unsigned char)(temp_v9 >> 0x18);
          temp_v9 = in_fpscr >> 0x1c;
          if ((int)romwright_sqrt_4((temp_v15 - temp_v17) * (temp_v15 - temp_v17) + (temp_v19 - in_s2) * (temp_v19 - in_s2))
              < 0x43480000) {
            temp_v10 = in_s3;
            __hardfp_atan2f();
            temp_v11 = in_fpscr & 0xfffffff;
            FUN_001f7c78();
            in_fpscr = (temp_v11 & 0xfffffff) | ((unsigned int)(temp_v20 <= temp_v10) << 0x1d);
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              temp_v10 = -temp_v10;
            }
            if ((int)temp_v10 >= 0x42b40000) {
              temp_v2 = 0;
            }
            else {
              temp_v2 = 1;
            }
          }
          else {
            temp_v2 = 0;
          }
          if (((unsigned char)((!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)temp_v9 & 1)) & temp_v2)) &&
             (temp_v3 = *(int *)(*(int *)(*(int *)(temp_v6 * 4 + 0x4a0fe4) + 0x14) + 4), -1 < temp_v3)) {
            g_gameState.activeGroupId = *(int *)(temp_v0 + 0x4a1390);
            g_gameState.pendingGroupId = *(unsigned int *)(temp_v0 + 0x4a1394);
            g_gameState.unk044 = (int)*(short *)(temp_v0 + 0x4a13ce);
            g_gameState.unk048 = (int)*(char *)(temp_v0 + 0x4a13d0);
            g_gameState.unk0B4 = (int)*(char *)(temp_v0 + 0x4a13d1);
            (*(unsigned int *)&g_gameState.overviewPosition.x) = (unsigned int)(temp_v18 >> 0x20);
            (*(unsigned int *)&g_gameState.overviewPosition.y) = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
            (*(unsigned int *)&g_gameState.overviewPosition.z) = (unsigned int)temp_v24;
            g_gameState.unk0BE = *(unsigned short *)(temp_v0 + 0x4a13c0);
            g_gameState.entryValue = *(int *)(temp_v0 + 0x4a1398);
            g_gameState.area = temp_v3;
            if (g_gameState.entryValue == -1) {
              g_gameState.entryValue = 0;
            }
            else {
              g_gameState.unk058 = 0xffffffff;
              libc_strcpy(reinterpret_cast<unsigned int *>(g_gameState.entryText), reinterpret_cast<unsigned int *>(temp_v0 + 0x4a139c));
            }
          }
        }
      }
LAB_00281704:
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < g_entryTableInfo);
    if (temp_v23 != 0) {
      return;
    }
  }
  mapIfActivateRecord(0,0xffffffff);
  return;
}

} /* extern "C" */
