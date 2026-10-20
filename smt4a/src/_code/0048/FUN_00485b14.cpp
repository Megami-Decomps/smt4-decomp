/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00485b14` (_code @ 0x485b14, 0x200 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641b4(int);
int flaggedEntryGetValueB(int);
int flaggedEntryGetValueA(int);
int flaggedEntrySetValueB(...);
int flaggedEntrySetValueA(int, int);

/* Supplied declaration required: FUN_001641b4. */
extern int FUN_001643a0(void);
extern int FUN_00165070(void);
extern int FUN_001802d4(int);
/* Supplied declaration required: flaggedEntryGetValueB. */
/* Supplied declaration required: flaggedEntryGetValueA. */
/* Supplied declaration required: flaggedEntrySetValueB. */
/* Supplied declaration required: flaggedEntrySetValueA. */


int FUN_00485b14(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  
  temp_v0 = 0;
  temp_v2 = FUN_001643a0();
  if ((temp_v2 == 1 || temp_v2 == 2) || temp_v2 == 6) {
    temp_v3 = FUN_00165070();
    temp_v4 = 3;
    do {
      if ((*(short *)(param_1 + temp_v4 * 2 + 0x438) == temp_v3) && (0 < temp_v3)) {
        temp_v6 = temp_v4 - 3;
        temp_v4 = (int)(((long long)(int)temp_v6 * -0x77777777 + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
        *(unsigned char *)(param_1 + 0x260) = 0;
        temp_v7 = *(int *)(param_1 + 0x14);
        temp_v8 = *(int *)(param_1 + 0x10);
        flaggedEntrySetValueB(param_1 + 0x198,((temp_v4 >> 3) - (temp_v4 >> 0x1f)) * -0xf + temp_v6);
        temp_v4 = (int)(((long long)(int)temp_v6 * -0x77777777 + ((unsigned long long)temp_v6 << 0x20)) >> 0x20);
        flaggedEntrySetValueA(param_1 + 0x198,(temp_v4 >> 3) - (temp_v4 >> 0x1f));
        temp_v5 = flaggedEntryGetValueB(param_1 + 0x198);
        *(unsigned int *)(param_1 + 0x10) = temp_v5;
        temp_v4 = flaggedEntryGetValueA(param_1 + 0x198);
        *(int *)(param_1 + 0x14) = temp_v4;
        temp_v0 = 1;
        if (*(int *)(param_1 + 0x10) != temp_v8 || temp_v4 != temp_v7) {
          FUN_001641b4(0x100020d);
        }
        break;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x8a);
    temp_v4 = 0x8b;
    do {
      if (*(short *)(param_1 + temp_v4 * 2 + 0x438) == temp_v3) {
        temp_v7 = flaggedEntryGetValueB(param_1 + 0x1fc);
        flaggedEntryGetValueA(param_1 + 0x1fc);
        temp_v1 = flaggedEntryGetValueA(param_1 + 0x198);
        if (*(char *)(param_1 + 0x29) == '\0') {
          *(unsigned char *)(param_1 + 0x260) = 1;
          flaggedEntrySetValueA(param_1 + 0x198,6);
          flaggedEntrySetValueB(param_1 + 0x1fc,temp_v4 - 0x8b);
          temp_v5 = flaggedEntryGetValueB(param_1 + 0x198);
          *(unsigned int *)(param_1 + 0x10) = temp_v5;
          temp_v5 = flaggedEntryGetValueA(param_1 + 0x198);
          *(unsigned int *)(param_1 + 0x14) = temp_v5;
        }
        if (temp_v2 != 2) {
          if (temp_v2 == 6) {
            return 6;
          }
          temp_v3 = FUN_001802d4(temp_v3);
          if (temp_v3 == 0) {
            return temp_v2;
          }
        }
        else {
          temp_v3 = flaggedEntryGetValueB(param_1 + 0x1fc);
          if ((temp_v3 == temp_v7) && (temp_v3 = flaggedEntryGetValueA(param_1 + 0x198), temp_v3 == temp_v1)) {
            return 2;
          }
        }
        FUN_001641b4(0x100020d);
        return temp_v2;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x91);
    if (temp_v0) {
      return temp_v2;
    }
  }
  return 0;
}

} /* extern "C" */
