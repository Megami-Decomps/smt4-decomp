/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b5154` (_code @ 0x1b5154, 0x32c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027e874(void);
int FUN_00295ba4(int);
int FUN_002bc01c(int);
int FUN_002c1658(...);
int FUN_003c033c(...);

extern int g_btlScriptUnit; /* 0x43427c */
extern unsigned int g_btlActionReflect; /* 0x434290 */
extern int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: FUN_0027e874. */
extern int btlUnitGet(void);
/* Supplied declaration required: FUN_00295ba4. */
extern int dialogIsActive(void);
/* Supplied declaration required: FUN_002bc01c. */
extern int jobIsValid(unsigned int);
extern int jobGetWork(void);
/* Supplied declaration required: FUN_002c1658. */
extern int FUN_00337324(int);
extern int FUN_003382e8(int);
extern int FUN_00344f2c(unsigned int, unsigned int);
extern int FUN_003adab8(void);
/* Supplied declaration required: FUN_003c033c. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_001b5154(void)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  
  temp_v1 = jobGetWork();
  if ((*(unsigned int *)(temp_v1 + 0x44a8) & 0x80001) != 0) {
    *(unsigned int *)(temp_v1 + 0x44a0) = *(unsigned int *)(temp_v1 + 0x44a0) & 0xfffffebf;
    temp_v1 = dialogIsActive();
  }
  else {
    puVar6 = (unsigned int *)(temp_v1 + 0x44a0);
    temp_v2 = *puVar6;
    if ((temp_v2 & 0x100000) != 0) {
      *puVar6 = temp_v2 & 0xfffffebf;
      temp_v1 = dialogIsActive();
    }
    else {
      if ((temp_v2 & 0x200) != 0) {
        *puVar6 = *puVar6 & 0xfffffebf;
        return 0;
      }
      temp_v3 = jobIsValid(*(unsigned int *)(temp_v1 + 0x20));
      if (temp_v3 != 0) {
        *puVar6 = *puVar6 & 0xfffffebf;
        temp_v1 = dialogIsActive();
      }
      else if ((*(unsigned int *)(temp_v1 + 0x7c) & 1) != 0) {
        *puVar6 = *puVar6 & 0xfffffebf;
        temp_v1 = dialogIsActive();
      }
      else {
        temp_v3 = *(int *)(temp_v1 + 100);
        if (temp_v3 != 0x16) {
          if (temp_v3 == 0x14 || temp_v3 == 0x15) {
            *puVar6 = *puVar6 & 0xfffffebf;
            return 0;
          }
          if (g_btlScriptUnit != 0) {
            temp_v4 = btlUnitGet();
            temp_v3 = 0;
            if (temp_v4 != 0) {
              temp_v3 = *(int *)(temp_v4 + 0x28);
            }
            if ((temp_v4 != 0 && temp_v3 != 0) &&
               (temp_v0 = *(short *)(temp_v3 + 0x14c), (temp_v0 == 7 || temp_v0 == 9) || temp_v0 == 0xd)) {
              *puVar6 = *puVar6 & 0xfffffebf;
              temp_v1 = dialogIsActive();
              if (temp_v1 != 0) {
                FUN_00295ba4(1);
              }
              return 0;
            }
          }
          temp_v3 = FUN_00344f2c(g_btlActionReflect,0x2a);
          if (0 < temp_v3) {
            return 0;
          }
          if (((g_btlUiBlock == 0) || (temp_v3 = FUN_003adab8(), temp_v3 == 0)) ||
             (temp_v3 = FUN_003382e8(temp_v1), temp_v3 == 0)) {
            return 0;
          }
          if ((*puVar6 & 0x40) != 0) {
            temp_v1 = 1;
            FUN_002c1658();
            if (temp_v1 == 0) {
              return 0;
            }
            FUN_0027e874();
            FUN_00295ba4(1);
            *puVar6 = *puVar6 & 0xffffffbf;
            FUN_002bc01c(0x100016e);
            return 0;
          }
          if ((*puVar6 & 0x100) != 0) {
            temp_v1 = 1;
            FUN_002c1658(1,1);
            if (temp_v1 == 0) {
              return 0;
            }
            FUN_0027e874();
            FUN_00295ba4(1);
            *puVar6 = *puVar6 & 0xfffffeff;
            FUN_002bc01c(0x100016e);
            return 0;
          }
          temp_v3 = 7;
          FUN_002c1658(7,1);
          if (temp_v3 != 0) {
            FUN_0027e874();
            FUN_003c033c(0);
            *puVar6 = *puVar6 | 0x40;
            FUN_002bc01c(0x100016d);
            return 0;
          }
          temp_v3 = 8;
          FUN_002c1658(8,1);
          if (temp_v3 == 0) {
            return 0;
          }
          temp_v1 = FUN_00337324(temp_v1);
          if (temp_v1 == 0) {
            return 0;
          }
          FUN_0027e874();
          FUN_003c033c(1,0);
          *puVar6 = *puVar6 | 0x100;
          FUN_002bc01c(0x100016d);
          return 0;
        }
        *puVar6 = *puVar6 & 0xfffffebf;
        temp_v1 = dialogIsActive();
      }
    }
  }
  if (temp_v1 != 0) {
    FUN_00295ba4(1);
  }
  return 0;
}

} /* extern "C" */
