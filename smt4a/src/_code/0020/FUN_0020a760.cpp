/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020a760` (_code @ 0x20a760, 0x434 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023e908(void);
int FUN_003f3a04(...);
int FUN_003f5220(...);

int FUN_001517b4(int, int);
int eventQueueAddUniqueIfValid(int);
int uiSpriteSetKeyframe(int, int, int);
int FUN_0020b718(int, int);
int useCounterStart(void);
int FUN_0026fa30(void);
int FUN_002a4878(...);
int FUN_002a4894(...);
int FUN_002a4914(...);
int FUN_002a4964(...);
int objClearFlagPair(...);
int FUN_0031f208(int);
int sortMenuAcquire(int);
int FUN_003343f0(int);
int SBORROW4(...);

extern int g_partyPanel; /* 0x57f268 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: FUN_0020b718. */
/* Supplied declaration required: useCounterStart. */
/* Supplied declaration required: FUN_0023e908. */
/* Supplied declaration required: FUN_0026fa30. */
/* Supplied declaration required: FUN_002a4878. */
/* Supplied declaration required: FUN_002a4894. */
/* Supplied declaration required: FUN_002a4914. */
/* Supplied declaration required: FUN_002a4964. */
extern int FUN_002a7410(void);
/* Supplied declaration required: objClearFlagPair. */
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: sortMenuAcquire. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_003f3a04. */
/* Supplied declaration required: FUN_003f5220. */


unsigned int FUN_0020a760(int param_1)

{
/* irregular: 18 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  
  temp_v5 = g_partyPanel;
  temp_v1 = 10;
  FUN_001517b4(10,1);
  if (temp_v1 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(char *)(temp_v5 + 0x1210) != '\0') {
      return 0;
    }
    temp_v5 = FUN_002a7410();
    if (temp_v5 != 0) {
      return 0;
    }
    temp_v5 = 9;
    FUN_001517b4(9,1);
    if (temp_v5 == 0) {
      return 0;
    }
    sortMenuAcquire(0);
    FUN_0031f208(2);
    FUN_0031f208(1);
    FUN_0031f208(4);
    FUN_0031f208(5);
    FUN_0031f208(0x1f);
    FUN_0031f208(3);
    useCounterStart();
    FUN_0020b718(0xf,1);
    FUN_003343f0(1);
    eventQueueAddUniqueIfValid(0x100020e);
    return 1;
  }
  temp_v0 = *(unsigned char *)(temp_v5 + 0x42) ^ 1;
  *(unsigned char *)(temp_v5 + 0x42) = temp_v0;
  if (temp_v0 != 0) {
    uiSpriteSetKeyframe(temp_v5 + 0x4c8,6,0);
  }
  else {
    uiSpriteSetKeyframe(temp_v5 + 0x4c8,4,0);
  }
  eventQueueAddUniqueIfValid(0x100020e);
  if (*(int *)(temp_v5 + 0x1c) != 6) {
    if (*(int *)(temp_v5 + 0x1c) == 8) {
      if (*(char *)(temp_v5 + 0x42) != '\0') {
        temp_v2 = FUN_002a4878(temp_v5 + 0xd50);
        temp_v3 = temp_v5 + 0xdb4;
        FUN_002a4914(temp_v3,temp_v2);
        temp_v1 = FUN_002a4894(temp_v5 + 0xd50);
        if (temp_v1 < 1) {
          FUN_002a4964(temp_v3,0);
        }
        else {
          temp_v1 = FUN_002a4894(temp_v5 + 0xd50);
          temp_v1 = *(int *)(temp_v5 + 0x2c) * 3 + temp_v1;
          FUN_002a4964(temp_v3,temp_v1);
        }
      }
      else {
        temp_v3 = temp_v5 + 0xdb4;
        temp_v4 = FUN_002a4894();
        temp_v7 = SBORROW4(temp_v4,4);
        temp_v1 = temp_v4 - 4;
        temp_v6 = temp_v4 == 4;
        if (temp_v4 >= 4) {
          temp_v4 = *(int *)(temp_v5 + 0x30);
          temp_v7 = SBORROW4(temp_v4,1);
          temp_v1 = temp_v4 - 1;
          temp_v6 = temp_v4 == 1;
        }
        if (temp_v6 || temp_v1 < 0 != temp_v7) {
          *(unsigned int *)(temp_v5 + 0x2c) = 0;
        }
        else {
          *(unsigned int *)(temp_v5 + 0x2c) = 1;
        }
        FUN_0026fa30();
        temp_v2 = FUN_002a4878(temp_v3);
        FUN_002a4914(temp_v5 + 0xd50,temp_v2);
        temp_v1 = FUN_002a4894(temp_v3);
        if (temp_v1 >= 4) {
          if (*(int *)(temp_v5 + 0x30) >= 2) {
            temp_v1 = FUN_002a4894(temp_v3);
            FUN_002a4964(temp_v5 + 0xd50,*(int *)(temp_v5 + 0x2c) * -3 + temp_v1);
          }
          else {
            FUN_002a4964(temp_v5 + 0xd50,3);
          }
        }
        else {
          temp_v2 = FUN_002a4894(temp_v3);
          FUN_002a4964(temp_v5 + 0xd50,temp_v2);
        }
        temp_v4 = temp_v5 + 0xd50;
        objClearFlagPair(temp_v4);
      }
    }
  }
  else if (*(char *)(temp_v5 + 0x42) != '\0') {
    temp_v2 = FUN_002a4878();
    temp_v3 = temp_v5 + 0xcec;
    FUN_002a4914(temp_v3,temp_v2);
    temp_v1 = FUN_002a4894(temp_v5 + 0xc88);
    temp_v1 = *(int *)(temp_v5 + 0x2c) * 3 + temp_v1;
    FUN_002a4964(temp_v3,temp_v1);
  }
  else {
    temp_v3 = temp_v5 + 0xcec;
    temp_v4 = FUN_002a4894();
    temp_v7 = SBORROW4(temp_v4,3);
    temp_v1 = temp_v4 - 3;
    temp_v6 = temp_v4 == 3;
    if (temp_v4 >= 3) {
      temp_v4 = *(int *)(temp_v5 + 0x30);
      temp_v7 = SBORROW4(temp_v4,1);
      temp_v1 = temp_v4 - 1;
      temp_v6 = temp_v4 == 1;
    }
    if (temp_v6 || temp_v1 < 0 != temp_v7) {
      *(unsigned int *)(temp_v5 + 0x2c) = 0;
    }
    else {
      *(unsigned int *)(temp_v5 + 0x2c) = 1;
    }
    FUN_0026fa30();
    temp_v2 = FUN_002a4878(temp_v3);
    temp_v4 = temp_v5 + 0xc88;
    FUN_002a4914(temp_v4,temp_v2);
    temp_v1 = FUN_002a4894(temp_v3);
    if (temp_v1 >= 3) {
      if (*(int *)(temp_v5 + 0x30) >= 2) {
        temp_v1 = FUN_002a4894(temp_v3);
        FUN_002a4964(temp_v4,*(int *)(temp_v5 + 0x2c) * -3 + temp_v1);
      }
      else {
        FUN_002a4964(temp_v4,2);
      }
    }
    else {
      temp_v2 = FUN_002a4894(temp_v3);
      FUN_002a4964(temp_v4,temp_v2);
    }
    objClearFlagPair(temp_v4);
  }
  temp_v1 = 0;
  do {
    temp_v3 = temp_v5 + temp_v1 * 4;
    FUN_003f5220(*(unsigned int *)(temp_v3 + 0xa10),*(unsigned int *)(temp_v5 + 0x2c));
    FUN_003f3a04(*(unsigned int *)(temp_v3 + 0xa10),*(char *)(temp_v5 + 0x42) == '\x01');
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  temp_v1 = 0;
  do {
    temp_v3 = temp_v5 + temp_v1 * 4;
    FUN_003f5220(*(unsigned int *)(temp_v3 + 0xa20),*(unsigned int *)(temp_v5 + 0x2c));
    FUN_003f3a04(*(unsigned int *)(temp_v3 + 0xa20),*(char *)(temp_v5 + 0x42) == '\x01');
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  if (*(int *)(temp_v5 + 0x1c) != 1) {
    FUN_0023e908();
  }
  return 1;
}

} /* extern "C" */
