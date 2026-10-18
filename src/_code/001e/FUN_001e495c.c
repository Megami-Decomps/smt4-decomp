/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e495c` (_code @ 0x1e495c, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_004005d4; /* 0x4005d4 */
extern unsigned int *DAT_004342c8; /* 0x4342c8 */
extern unsigned int *DAT_00435ce8; /* 0x435ce8 */

/* Supplied declaration required: FUN_002272d0. */
/* Supplied declaration required: FUN_0022737c. */
/* Supplied declaration required: FUN_00227394. */
extern unsigned int *FUN_0022a4d8(unsigned int, unsigned int);
extern unsigned int *FUN_0022a5f8(unsigned int, unsigned int);
extern unsigned int FUN_00240578(int);
/* Supplied declaration required: FUN_002564cc. */
/* Supplied declaration required: FUN_0025b968. */
extern unsigned int FUN_0025b978(void);
/* Supplied declaration required: FUN_0025c524. */
/* Supplied declaration required: FUN_00262b40. */
/* Supplied declaration required: FUN_00263408. */
/* Supplied declaration required: FUN_0027dca0. */
/* Supplied declaration required: FUN_002bf86c. */
extern int FUN_002bffbc(unsigned int);
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002c4b30. */
extern int FUN_002c5e2c(unsigned int *);
/* Supplied declaration required: FUN_003d8b08. */
/* Supplied declaration required: FUN_003d8c44. */
/* Supplied declaration required: FUN_003d8d60. */
/* Supplied declaration required: FUN_003d8eb4. */
/* Supplied declaration required: FUN_003d9854. */
extern int func_0x0033a820(int, int);


unsigned int FUN_001e495c(void)

{
/* irregular: 2 goto(s); 17 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int *piVar8;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar11;
  unsigned int temp_v7 [34];
  
  temp_v1 = FUN_002c0ac8();
  puVar7 = DAT_00435ce8;
  if (DAT_00435ce8 == (unsigned int *)0x0) {
    return 0;
  }
  switch(*DAT_00435ce8) {
  case 0:
    if (temp_v1 != 0) {
      piVar8 = (int *)(temp_v1 + 0x1e98);
      temp_v4 = 0;
      if (*piVar8 != 0) {
        temp_v5 = 4;
        do {
          temp_v4 = temp_v5 + 1;
          temp_v5 = *piVar8 + temp_v5 * 0x114;
          temp_v3 = *(unsigned int *)(temp_v5 + 0x50);
          if ((temp_v3 & 1) != 0 && (temp_v3 & 0x80) != 0) {
            *(unsigned int *)(temp_v5 + 0x50) = temp_v3 & 0xfffffff7;
          }
          temp_v5 = temp_v4;
        } while (temp_v4 < 0x36);
      }
      if (temp_v1 != 0) {
        temp_v4 = *piVar8;
      }
      if (temp_v1 != 0 && temp_v4 != 0) {
        temp_v4 = 0;
        do {
          temp_v5 = temp_v4 + 1;
          temp_v4 = *piVar8 + temp_v4 * 0x114;
          *(unsigned int *)(temp_v4 + 100) = *(unsigned int *)(temp_v4 + 0x68);
          temp_v4 = temp_v5;
        } while (temp_v5 < 0x6d);
      }
    }
    temp_v2 = *(unsigned int *)(temp_v1 + 0x58);
    temp_v7[0] = 4;
    FUN_00263408(temp_v2,0xeb,0x10,0x20);
    puVar7[3] = temp_v2;
    FUN_00227394();
    FUN_0022737c(puVar7[3],0xc,0x10);
    FUN_00262b40(puVar7[3],0x4006ac);
    FUN_002272d0(puVar7[3],0x4006a4);
    FUN_002272d0(puVar7[3],0x40069c);
    FUN_002272d0(puVar7[3],0x400694);
    FUN_0025c524(puVar7[3],1);
    temp_v2 = 1;
    break;
  case 1:
    temp_v4 = FUN_002bffbc(0);
    if (temp_v4 == 0) {
      temp_v1 = FUN_002bffbc(1);
      if (temp_v1 == 0) {
        return 0;
      }
      FUN_002c45b8(puVar7[3],0);
      puVar7[3] = 0;
      return 0xffffffff;
    }
    temp_v4 = FUN_002564cc(puVar7[3]);
    FUN_002c45b8(puVar7[3],0);
    puVar7[3] = 0;
    if (temp_v4 == 0) goto code_r0x003d936c;
    if (temp_v4 == 1) {
      temp_v2 = 5;
    }
    else {
      if (temp_v4 != 2) {
        return 0xffffffff;
      }
      temp_v2 = 6;
    }
    break;
  case 2:
    temp_v4 = FUN_002bffbc(0);
    if (temp_v4 != 0) {
      temp_v4 = FUN_002564cc(puVar7[3]);
      FUN_002c45b8(puVar7[3],0);
      puVar7[3] = 0;
      if (temp_v4 == 0) {
        FUN_003d8c44(puVar7,temp_v1);
        temp_v2 = 3;
        break;
      }
      if (temp_v4 == 1) goto code_r0x003d9470;
    }
    else {
      temp_v1 = FUN_002bffbc(1);
      if (temp_v1 == 0) {
        return 0;
      }
      FUN_002c45b8(puVar7[3],0);
      puVar7[3] = 0;
    }
  case 5:
    temp_v2 = 0;
    break;
  case 3:
    temp_v4 = FUN_002bffbc(0);
    if (temp_v4 == 0) {
      temp_v4 = FUN_002bffbc(1);
      if (temp_v4 == 0) {
        FUN_003d8b08(puVar7,temp_v1);
        return 0;
      }
      temp_v2 = 0;
      break;
    }
    FUN_003d8d60(puVar7,temp_v1,*(unsigned int *)(temp_v1 + 0x58));
    temp_v2 = 7;
    break;
  case 4:
    temp_v4 = FUN_002bffbc(0);
    if (temp_v4 != 0) {
      temp_v3 = FUN_002564cc(puVar7[3]);
      FUN_002c45b8(puVar7[3],0);
      puVar7[3] = 0;
      if (temp_v3 < 3) {
        FUN_003d8eb4(puVar7,temp_v1,*(unsigned int *)(temp_v1 + 0x58),temp_v3 & 0xffff);
        temp_v2 = 8;
        break;
      }
    }
    else {
      temp_v4 = FUN_002bffbc(1);
      if (temp_v4 == 0) {
        return 0;
      }
      FUN_002c45b8(puVar7[3],0);
      puVar7[3] = 0;
    }
code_r0x003d936c:
    temp_v2 = *(unsigned int *)(temp_v1 + 0x58);
    temp_v7[0] = 4;
    FUN_00263408(temp_v2,0xeb,0x10,0x20);
    puVar7[3] = temp_v2;
    FUN_00227394();
    FUN_0022737c(puVar7[3],0xc,0x10);
    FUN_00262b40(puVar7[3],"MODE");
    FUN_002272d0(puVar7[3],"슌쪕튕垏");
    FUN_002272d0(puVar7[3],"䪃膃覃튕垏");
    FUN_0025c524(puVar7[3],1);
    temp_v2 = 2;
    break;
  case 6:
    FUN_002c4b30(temp_v7,0x80);
    temp_v2 = FUN_00240578(temp_v1);
    FUN_002bf86c(temp_v7,temp_v2);
    temp_v2 = FUN_0025b978();
    FUN_0025b968(1);
    temp_v4 = FUN_002c5e2c(temp_v7);
    FUN_0025b968(temp_v2);
    if (*(char *)(temp_v4 + 10) == '\x01') {
      FUN_003d9854(puVar7,temp_v1,temp_v4);
    }
    *puVar7 = 0;
    return 0;
  case 7:
    temp_v4 = FUN_002bffbc(1);
    if (temp_v4 == 0) {
      temp_v2 = puVar7[3];
      temp_v4 = *(int *)(temp_v1 + 0x1e98) + *(short *)(puVar7 + 4) * 0x114;
      FUN_0027dca0(temp_v1);
      temp_v1 = func_0x0033a820(temp_v1,(int)*(short *)(puVar7 + 4));
      puVar7 = (unsigned int *)FUN_0022a4d8(temp_v2,1);
      *(unsigned int *)(temp_v4 + 0xc) = *puVar7;
      puVar7 = (unsigned int *)FUN_0022a4d8(temp_v2,2);
      *(unsigned int *)(temp_v4 + 0x10) = *puVar7;
      puVar7 = (unsigned int *)FUN_0022a4d8(temp_v2,3);
      *(unsigned int *)(temp_v4 + 0x14) = *puVar7;
      *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v4 + 0xc);
      *(unsigned int *)(temp_v1 + 0x10) = *(unsigned int *)(temp_v4 + 0x10);
      *(unsigned int *)(temp_v1 + 0x14) = *(unsigned int *)(temp_v4 + 0x14);
      return 0;
    }
    FUN_002c45b8(puVar7[3],0);
    puVar7[3] = 0;
    temp_v2 = 3;
    break;
  case 8:
    temp_v4 = FUN_002bffbc(1);
    if (temp_v4 == 0) {
      temp_v0 = *(short *)(puVar7 + 5);
      temp_v2 = puVar7[3];
      if ((temp_v0 != 0) && (temp_v0 != 1)) {
        if (temp_v0 != 2) {
          return 0;
        }
        puVar7 = (unsigned int *)FUN_0022a5f8(temp_v2,0);
        DAT_004342c8[9] = *puVar7;
        return 0;
      }
      if (temp_v0 == 0) {
        puVar7 = (unsigned int *)(temp_v1 + 0x1ea4);
        puVar11 = DAT_004342c8 + 3;
      }
      else {
        puVar7 = (unsigned int *)(temp_v1 + 0x1eb0);
        puVar11 = DAT_004342c8 + 6;
      }
      puVar6 = (unsigned int *)FUN_0022a4d8(temp_v2,0);
      *puVar11 = *puVar6;
      puVar6 = (unsigned int *)FUN_0022a4d8(temp_v2,1);
      puVar11[1] = *puVar6;
      puVar6 = (unsigned int *)FUN_0022a4d8(temp_v2,2);
      puVar11[2] = *puVar6;
      temp_v2 = puVar11[1];
      temp_v6 = puVar11[2];
      *puVar7 = *puVar11;
      puVar7[1] = temp_v2;
      puVar7[2] = temp_v6;
      puVar7 = DAT_004342c8;
      temp_v2 = puVar11[1];
      temp_v6 = puVar11[2];
      *DAT_004342c8 = *puVar11;
      puVar7[1] = temp_v2;
      puVar7[2] = temp_v6;
      return 0;
    }
    FUN_002c45b8(puVar7[3],0);
    puVar7[3] = 0;
code_r0x003d9470:
    temp_v2 = *(unsigned int *)(temp_v1 + 0x58);
    temp_v7[0] = 4;
    FUN_00263408(temp_v2,0xeb,0x10,0x20);
    puVar7[3] = temp_v2;
    FUN_00227394();
    FUN_0022737c(puVar7[3],0xc,0x10);
    FUN_00262b40(puVar7[3],"CAMERA");
    FUN_002272d0(puVar7[3],0x4005ec);
    FUN_002272d0(puVar7[3],0x4005e4);
    FUN_002272d0(puVar7[3],&DAT_004005d4);
    FUN_0025c524(puVar7[3],1);
    *puVar7 = 4;
    return 0;
  case 9:
    return 0xffffffff;
  default:
    return 0;
  }
  *puVar7 = temp_v2;
  return 0;
}
