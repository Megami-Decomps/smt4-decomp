/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024b718` (_code @ 0x24b718, 0x578 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(...);
int FUN_001641b4(int);
int dialogClose(int);
int FUN_003ea20c(void);
int FUN_004c89e8(void);
int FUN_004c8b10(void);
int FUN_004c8bb8(...);

extern int g_btlScriptUnit; /* 0x57113c */
extern unsigned int g_btlActionReflect; /* 0x5712f0 */
extern unsigned int DAT_005713b8; /* 0x5713b8 */
extern unsigned int DAT_005713bc; /* 0x5713bc */
extern unsigned int DAT_005713c0; /* 0x5713c0 */
extern unsigned int DAT_005713c4; /* 0x5713c4 */
extern unsigned int DAT_005713c8; /* 0x5713c8 */
extern unsigned int DAT_005713cc; /* 0x5713cc */
extern unsigned int DAT_005713d0; /* 0x5713d0 */
extern unsigned int DAT_005713d4; /* 0x5713d4 */
extern unsigned int DAT_005713d8; /* 0x5713d8 */
extern unsigned int DAT_005713dc; /* 0x5713dc */
extern unsigned int DAT_005713e0; /* 0x5713e0 */
extern unsigned int DAT_005713e4; /* 0x5713e4 */
extern unsigned int DAT_005713e8; /* 0x5713e8 */
extern unsigned int DAT_005713ec; /* 0x5713ec */
extern int g_btlCamera; /* 0x571508 */
extern int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: FUN_001517b4. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_001641b4. */
extern int jobGetWork(void);
/* Supplied declaration required: dialogClose. */
extern int dialogIsActive(void);
/* Supplied declaration required: FUN_003ea20c. */
extern int FUN_003eb1cc(int);
extern int FUN_003ece6c(int);
extern int FUN_0040ddec(unsigned int, unsigned int);
extern int FUN_004a9428(void);
/* Supplied declaration required: FUN_004c89e8. */
/* Supplied declaration required: FUN_004c8b10. */
/* Supplied declaration required: FUN_004c8bb8. */
extern int FUN_004c8ecc(void);
extern int btlUnitGet(void);


unsigned int FUN_0024b718(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar8;
  unsigned char temp_v7;
  
  temp_v3 = jobGetWork();
  if (!(((DAT_005713e4 | DAT_005713ec) & *(unsigned int *)(temp_v3 + 0x45ac)) == 0 &&
       ((DAT_005713e0 | DAT_005713e8) & *(unsigned int *)(temp_v3 + 0x45a8)) == 0)) {
    temp_v4 = ~DAT_005713b8;
    temp_v6 = ~DAT_005713c0;
    *(unsigned int *)(temp_v3 + 0x45a4) = *(unsigned int *)(temp_v3 + 0x45a4) & ~DAT_005713bc & ~DAT_005713c4;
    *(unsigned int *)(temp_v3 + 0x45a0) = *(unsigned int *)(temp_v3 + 0x45a0) & temp_v4 & temp_v6;
    temp_v3 = dialogIsActive();
  }
  else {
    puVar8 = (unsigned int *)(temp_v3 + 0x45a0);
    temp_v4 = *puVar8;
    temp_v6 = *(unsigned int *)(temp_v3 + 0x45a4);
    if (!((DAT_005713d4 & temp_v6) == 0 && (DAT_005713d0 & temp_v4) == 0)) {
      temp_v4 = temp_v4 & ~DAT_005713b8 & ~DAT_005713c0;
      temp_v6 = temp_v6 & ~DAT_005713bc & ~DAT_005713c4;
      *puVar8 = temp_v4;
      *(unsigned int *)(temp_v3 + 0x45a4) = temp_v6;
      if ((temp_v4 & DAT_005713d8) != 0 || (temp_v6 & DAT_005713dc) != 0) {
        return 0;
      }
      FUN_004c8b10();
      temp_v3 = dialogIsActive();
    }
    else {
      if ((temp_v6 & DAT_005713cc) != 0 || (temp_v4 & DAT_005713c8) != 0) {
        temp_v0 = ~DAT_005713bc;
        temp_v1 = ~DAT_005713c4;
        *puVar8 = temp_v4 & ~DAT_005713b8 & ~DAT_005713c0;
        *(unsigned int *)(temp_v3 + 0x45a4) = temp_v6 & temp_v0 & temp_v1;
        return 0;
      }
      temp_v5 = jobIsValid(*(unsigned int *)(temp_v3 + 0x40));
      if (temp_v5 != 0) {
        temp_v4 = ~DAT_005713bc;
        temp_v6 = ~DAT_005713c4;
        *puVar8 = *puVar8 & ~DAT_005713b8 & ~DAT_005713c0;
        *(unsigned int *)(temp_v3 + 0x45a4) = *(unsigned int *)(temp_v3 + 0x45a4) & temp_v4 & temp_v6;
        return 0;
      }
      temp_v5 = *(int *)(temp_v3 + 0x88);
      if (temp_v5 != 0x1e) {
        if (temp_v5 == 7) {
          temp_v4 = ~DAT_005713b8;
          temp_v6 = ~DAT_005713c0;
          *(unsigned int *)(temp_v3 + 0x45a4) = *(unsigned int *)(temp_v3 + 0x45a4) & ~DAT_005713bc & ~DAT_005713c4;
          *puVar8 = *puVar8 & temp_v4 & temp_v6;
          return 0;
        }
        if (temp_v5 == 0x1c || temp_v5 == 0x1d) {
          temp_v4 = ~DAT_005713b8;
          temp_v6 = ~DAT_005713c0;
          *(unsigned int *)(temp_v3 + 0x45a4) = *(unsigned int *)(temp_v3 + 0x45a4) & ~DAT_005713bc & ~DAT_005713c4;
          *puVar8 = *puVar8 & temp_v4 & temp_v6;
          return 0;
        }
        if (temp_v5 == 4) {
          temp_v4 = ~DAT_005713bc;
          temp_v6 = ~DAT_005713c4;
          *puVar8 = *puVar8 & ~DAT_005713b8 & ~DAT_005713c0;
          *(unsigned int *)(temp_v3 + 0x45a4) = *(unsigned int *)(temp_v3 + 0x45a4) & temp_v4 & temp_v6;
          return 0;
        }
        if (g_btlScriptUnit != 0) {
          temp_v5 = btlUnitGet();
          temp_v7 = temp_v5 != 0;
          if (g_btlScriptUnit != 0 && temp_v7) {
            temp_v5 = *(int *)(temp_v5 + 0x28);
          }
          if (((g_btlScriptUnit != 0 && temp_v7) && temp_v5 != 0) &&
             (temp_v2 = *(short *)(temp_v5 + 0x1be), (temp_v2 == 7 || temp_v2 == 9) || temp_v2 == 0xd)) {
            temp_v6 = ~DAT_005713b8;
            temp_v4 = ~DAT_005713c0;
            *(unsigned int *)(temp_v3 + 0x45a4) = *(unsigned int *)(temp_v3 + 0x45a4) & ~DAT_005713bc & ~DAT_005713c4;
            *puVar8 = *puVar8 & temp_v6 & temp_v4;
            return 0;
          }
        }
        temp_v5 = FUN_0040ddec(g_btlActionReflect,0x34);
        if (0 < temp_v5) {
          return 0;
        }
        if (g_btlUiBlock == 0) {
          return 0;
        }
        temp_v5 = FUN_004a9428();
        if (temp_v5 == 0) {
          return 0;
        }
        temp_v5 = FUN_003ece6c(temp_v3);
        if (temp_v5 == 0) {
          return 0;
        }
        temp_v5 = FUN_003eb1cc(temp_v3);
        if (temp_v5 != 0) {
          return 0;
        }
        if (*(int *)(g_btlCamera + 0x38) != 3) {
          if (*(int *)(g_btlCamera + 0x38) == 4) {
            temp_v6 = ~DAT_005713b8;
            temp_v4 = ~DAT_005713c0;
            *(unsigned int *)(temp_v3 + 0x45a4) = *(unsigned int *)(temp_v3 + 0x45a4) & ~DAT_005713bc & ~DAT_005713c4;
            *puVar8 = *puVar8 & temp_v6 & temp_v4;
            temp_v3 = FUN_004c8ecc();
            if (temp_v3 == 0) {
              return 0;
            }
            if (*(int *)(temp_v3 + 8) != 7 && *(int *)(temp_v3 + 8) != 6) {
              return 0;
            }
            temp_v3 = dialogIsActive();
            if (temp_v3 != 0) {
              dialogClose(1);
            }
            return 0;
          }
        }
        else if (*(char *)(g_btlCamera + 0x6a8) != '\0') {
          return 0;
        }
        if ((DAT_005713bc & *(unsigned int *)(temp_v3 + 0x45a4)) != 0 || (DAT_005713b8 & *puVar8) != 0) {
          temp_v5 = 1;
          FUN_001517b4();
          if (temp_v5 == 0) {
            return 0;
          }
          FUN_004c89e8();
          dialogClose(1);
          temp_v4 = ~DAT_005713bc;
          *puVar8 = *puVar8 & ~DAT_005713b8;
          *(unsigned int *)(temp_v3 + 0x45a4) = *(unsigned int *)(temp_v3 + 0x45a4) & temp_v4;
          FUN_001641b4(0x100020f);
          return 0;
        }
        if ((*(unsigned int *)(temp_v3 + 0x45a4) & DAT_005713c4) != 0 || (DAT_005713c0 & *puVar8) != 0) {
          temp_v5 = 1;
          FUN_001517b4(1,1);
          if (temp_v5 == 0) {
            return 0;
          }
          FUN_004c89e8();
          dialogClose(1);
          temp_v4 = ~DAT_005713c4;
          *puVar8 = *puVar8 & ~DAT_005713c0;
          *(unsigned int *)(temp_v3 + 0x45a4) = *(unsigned int *)(temp_v3 + 0x45a4) & temp_v4;
          FUN_001641b4(0x100020f);
          return 0;
        }
        temp_v5 = 7;
        FUN_001517b4(7,1);
        if (temp_v5 != 0) {
          FUN_004c89e8();
          FUN_004c8bb8(0);
          temp_v4 = DAT_005713bc | *(unsigned int *)(temp_v3 + 0x45a4);
          *puVar8 = DAT_005713b8 | *puVar8;
          *(unsigned int *)(temp_v3 + 0x45a4) = temp_v4;
          FUN_001641b4(0x100020e);
          return 0;
        }
        temp_v5 = 8;
        FUN_001517b4(8,1);
        if (temp_v5 == 0) {
          return 0;
        }
        temp_v5 = temp_v3;
        FUN_003ea20c();
        if (temp_v5 == 0) {
          return 0;
        }
        FUN_004c89e8();
        FUN_004c8bb8(1,0);
        temp_v4 = DAT_005713c4 | *(unsigned int *)(temp_v3 + 0x45a4);
        *puVar8 = *puVar8 | DAT_005713c0;
        *(unsigned int *)(temp_v3 + 0x45a4) = temp_v4;
        FUN_001641b4(0x100020e);
        return 0;
      }
      temp_v4 = ~DAT_005713b8;
      temp_v6 = ~DAT_005713c0;
      *(unsigned int *)(temp_v3 + 0x45a4) = *(unsigned int *)(temp_v3 + 0x45a4) & ~DAT_005713bc & ~DAT_005713c4;
      *puVar8 = *puVar8 & temp_v4 & temp_v6;
      temp_v3 = dialogIsActive();
    }
  }
  if (temp_v3 != 0) {
    dialogClose(1);
  }
  return 0;
}

} /* extern "C" */
