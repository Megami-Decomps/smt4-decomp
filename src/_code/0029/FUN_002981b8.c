/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002981b8` (_code @ 0x2981b8, 0x224 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_0028d1d4. */
/* Supplied declaration required: FUN_0028ec90. */
/* Supplied declaration required: FUN_00293074. */
/* Supplied declaration required: FUN_002931f0. */
extern int FUN_002934d4(void);
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_00297e30. */
extern unsigned int FUN_00297f40(int, unsigned int);
/* Supplied declaration required: FUN_002983dc. */
/* Supplied declaration required: FUN_00299558. */
extern int FUN_0029d8e4(unsigned int);
extern unsigned int FUN_0029ebf8(int);
extern int FUN_0029f0f4(unsigned int);
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002a0f50. */
/* Supplied declaration required: FUN_002b88c4. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002b8ccc(void);
/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002c4450. */
/* Supplied declaration required: FUN_002cfe24. */


/* WARNING: Removing unreachable block (ram,0x002988d4) */
/* WARNING: Removing unreachable block (ram,0x00298908) */
/* WARNING: Removing unreachable block (ram,0x0029890c) */
/* WARNING: Removing unreachable block (ram,0x00298910) */
/* WARNING: Removing unreachable block (ram,0x00298914) */
/* WARNING: Removing unreachable block (ram,0x00298930) */
/* WARNING: Removing unreachable block (ram,0x002989cc) */
/* WARNING: Removing unreachable block (ram,0x00298944) */
/* WARNING: Removing unreachable block (ram,0x0029896c) */
/* WARNING: Removing unreachable block (ram,0x00298984) */
/* WARNING: Removing unreachable block (ram,0x00298988) */
/* WARNING: Removing unreachable block (ram,0x0029898c) */
/* WARNING: Removing unreachable block (ram,0x00298990) */
/* WARNING: Removing unreachable block (ram,0x002989b0) */
/* WARNING: Removing unreachable block (ram,0x00298994) */
/* WARNING: Removing unreachable block (ram,0x00298950) */
/* WARNING: Removing unreachable block (ram,0x002989ec) */
/* WARNING: Removing unreachable block (ram,0x002989f8) */
/* WARNING: Removing unreachable block (ram,0x00298a08) */
/* WARNING: Removing unreachable block (ram,0x00298610) */
/* WARNING: Removing unreachable block (ram,0x0029852c) */
/* WARNING: Removing unreachable block (ram,0x00298538) */
/* WARNING: Removing unreachable block (ram,0x0029853c) */
/* WARNING: Removing unreachable block (ram,0x00298540) */
/* WARNING: Removing unreachable block (ram,0x00298520) */
/* WARNING: Removing unreachable block (ram,0x00298528) */
/* WARNING: Removing unreachable block (ram,0x00298564) */
/* WARNING: Removing unreachable block (ram,0x00298584) */
/* WARNING: Removing unreachable block (ram,0x00298588) */
/* WARNING: Removing unreachable block (ram,0x0029858c) */
/* WARNING: Removing unreachable block (ram,0x00298614) */
/* WARNING: Removing unreachable block (ram,0x0029863c) */
/* WARNING: Removing unreachable block (ram,0x00298650) */
/* WARNING: Removing unreachable block (ram,0x00298654) */
/* WARNING: Removing unreachable block (ram,0x00298658) */
/* WARNING: Removing unreachable block (ram,0x0029865c) */
/* WARNING: Removing unreachable block (ram,0x00298660) */
/* WARNING: Removing unreachable block (ram,0x00298664) */
/* WARNING: Removing unreachable block (ram,0x00298668) */
/* WARNING: Removing unreachable block (ram,0x00298694) */
/* WARNING: Removing unreachable block (ram,0x00298824) */
/* WARNING: Removing unreachable block (ram,0x0029883c) */
/* WARNING: Removing unreachable block (ram,0x00298840) */
/* WARNING: Removing unreachable block (ram,0x00298844) */
/* WARNING: Removing unreachable block (ram,0x00298858) */
/* WARNING: Removing unreachable block (ram,0x00298a30) */

void FUN_002981b8(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 62 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  
  if (*(char *)(param_1 + 0x3083) != '\0') {
    *(unsigned int *)(param_1 + 0x305c) = 0;
    FUN_0028ec90(param_1);
    FUN_00299558(param_1 + 0x33a8,0);
    FUN_002bf030(param_1 + 0x20,0);
    temp_v4 = 0;
    do {
      FUN_002bf030(param_1 + temp_v4 * 0x8c + 0x138,0);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 8);
    *(unsigned int *)(param_1 + 0x3054) = 0x2d;
    FUN_002983dc(param_1,0x10,1);
    return;
  }
  FUN_00293c98();
  temp_v4 = FUN_002934d4();
  if ((temp_v4 == 0) && (temp_v4 = FUN_00293c98(), (*(unsigned int *)(temp_v4 + 0x44a0) & 0x200) == 0)) {
    if (param_3 != -1) {
      if (param_3 == 0xb) {
        FUN_002983dc(param_1,*(unsigned int *)(param_1 + 0x304c),1);
        return;
      }
      if (param_3 != 1) {
        if (param_3 != 2) {
          if (param_3 == 7) {
            FUN_002983dc(param_1,10,1);
            return;
          }
          if (param_3 == 3) {
            if (*(int *)(param_1 + 0x3048) == 0x22) {
              FUN_0029fae8(param_1 + 0x33a8,4,1,4,1,1);
            }
            if (*(int *)(param_1 + 0x3048) == 0x13 || *(int *)(param_1 + 0x3048) == 0x16) {
              FUN_002a0f50();
              FUN_002b8b78();
            }
            temp_v4 = *(int *)(param_1 + 0x3048);
            if ((temp_v4 == 0x22 || temp_v4 == 0x23) || temp_v4 == 0x24) {
              FUN_002a0f50();
              FUN_002b8b78();
            }
            temp_v4 = FUN_002b8ccc();
            if (temp_v4 == 0x3d) {
              FUN_00293c98();
              temp_v4 = FUN_002934d4();
              if (temp_v4 == 0) {
                FUN_002a0f50();
                FUN_002b8b78();
              }
            }
            if (*(int *)(param_1 + 0x3048) == 7) {
              if (*(int *)(param_1 + 0x304c) - 8U < 6) {
                FUN_002931f0();
              }
              else {
                temp_v1 = FUN_00297f40(param_1,1);
                FUN_00297e30(param_1,temp_v1,*(unsigned int *)(param_1 + 0x305c));
              }
            }
            FUN_00293074();
            *(unsigned int *)(param_1 + 0x304c) = *(unsigned int *)(param_1 + 0x3048);
            *(unsigned int *)(param_1 + 0x3044) = 0;
            *(unsigned int *)(param_1 + 0x3048) = 0xc;
            temp_v4 = 0;
            if (temp_v4 < *(short *)(param_1 + 0x5714)) {
              do {
                FUN_002b9008();
                temp_v4 = temp_v4 + 1;
              } while (temp_v4 < *(short *)(param_1 + 0x5714));
            }
            *(unsigned short *)(param_1 + 0x5714) = 0;
            FUN_002c4450(param_1 + 0x5716,0x40,0xffffffff);
            temp_v2 = FUN_0029ebf8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
            temp_v4 = 0;
            if (temp_v4 < (int)temp_v2) {
              do {
                if ((temp_v2 & 1) == 0) {
                  temp_v3 = temp_v4 + (int)(8 - temp_v2) / 2 + 0x106;
                }
                else {
                  temp_v3 = temp_v4 + (int)(7 - temp_v2) / 2 + 0xff;
                }
                temp_v0 = FUN_002b88c4(0x15,temp_v3);
                temp_v3 = temp_v4 * 2;
                temp_v4 = temp_v4 + 1;
                *(unsigned short *)(param_1 + temp_v3 + 0x5716) = temp_v0;
                *(short *)(param_1 + 0x5714) = *(short *)(param_1 + 0x5714) + 1;
              } while (temp_v4 < (int)temp_v2);
            }
            puVar6 = (unsigned int *)(param_1 + 0x340c);
            temp_v3 = 0;
            temp_v4 = FUN_0029d8e4(*puVar6);
            if (0 < temp_v4) {
              do {
                if (*(int *)(param_1 + 0x305c) == 1) {
                  temp_v4 = 0xc2;
                }
                else if (*(int *)(param_1 + 0x305c) == 2) {
                  temp_v4 = 0xbb;
                }
                else {
                  temp_v4 = 0xb3;
                }
                temp_v0 = FUN_002b88c4(0x15,temp_v4 + temp_v3);
                temp_v4 = temp_v3 * 2;
                temp_v3 = temp_v3 + 1;
                *(unsigned short *)(param_1 + temp_v4 + 0x572c) = temp_v0;
                *(short *)(param_1 + 0x5714) = *(short *)(param_1 + 0x5714) + 1;
                temp_v4 = FUN_0029d8e4(*puVar6);
              } while (temp_v3 < temp_v4);
            }
            temp_v4 = FUN_0029f0f4(*puVar6);
            temp_v3 = FUN_0029d8e4(*puVar6);
            if (temp_v3 < temp_v4) {
              if (*(int *)(param_1 + 0x305c) != 1) {
                if (*(int *)(param_1 + 0x305c) != 2) {
                  temp_v0 = FUN_002b88c4(0x15,0x196);
                  *(unsigned short *)(param_1 + 0x5726) = temp_v0;
                  temp_v0 = FUN_002b88c4(0x15,0x194);
                  *(unsigned short *)(param_1 + 0x5728) = temp_v0;
                  temp_v0 = FUN_002b88c4(0x15,0x195);
                  *(unsigned short *)(param_1 + 0x572a) = temp_v0;
                }
                else {
                  temp_v0 = FUN_002b88c4(0x15,0x193);
                  *(unsigned short *)(param_1 + 0x5726) = temp_v0;
                  temp_v0 = FUN_002b88c4(0x15,0x191);
                  *(unsigned short *)(param_1 + 0x5728) = temp_v0;
                  temp_v0 = FUN_002b88c4(0x15,0x192);
                  *(unsigned short *)(param_1 + 0x572a) = temp_v0;
                }
              }
              else {
                temp_v0 = FUN_002b88c4(0x15,0x199);
                *(unsigned short *)(param_1 + 0x5726) = temp_v0;
                temp_v0 = FUN_002b88c4(0x15,0x197);
                *(unsigned short *)(param_1 + 0x5728) = temp_v0;
                temp_v0 = FUN_002b88c4(0x15,0x198);
                *(unsigned short *)(param_1 + 0x572a) = temp_v0;
              }
              *(short *)(param_1 + 0x5714) = *(short *)(param_1 + 0x5714) + 3;
            }
            return;
          }
          FUN_002983dc(param_1,1,1);
          return;
        }
      }
      else {
        *(unsigned int *)(param_1 + 0x3470) = 0;
        *(unsigned int *)(param_1 + 0x3474) = 0;
        *(unsigned int *)(param_1 + 0x3478) = 0;
        *(unsigned int *)(param_1 + 0x347c) = 0;
      }
      FUN_002983dc(param_1,8,1);
      return;
    }
    temp_v4 = *(int *)(param_1 + 0x3048);
    if ((temp_v4 == 0x1a) || (temp_v4 == 0x1b)) {
      FUN_002983dc(param_1,1);
      temp_v1 = FUN_00297f40(param_1,1);
      FUN_00297e30(param_1,temp_v1,*(unsigned int *)(param_1 + 0x305c));
      return;
    }
    if (temp_v4 != 0x11) {
      FUN_00293c98();
      temp_v4 = FUN_002934d4();
      if ((temp_v4 == 0) && (temp_v4 = FUN_00293c98(), (*(unsigned int *)(temp_v4 + 0x44a0) & 0x200) == 0)) {
        FUN_002cfe24(param_1,param_2,1,param_4);
        return;
      }
    }
    FUN_0028d1d4(param_1,param_2,param_4);
    return;
  }
  FUN_002cfe24(param_1,param_2,1,param_4);
  return;
}
