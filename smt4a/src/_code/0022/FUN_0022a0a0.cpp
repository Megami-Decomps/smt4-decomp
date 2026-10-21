/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a0a0` (_code @ 0x22a0a0, 0x530 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(...);
int FUN_00163aa4(...);
int eventQueueAddUniqueIfValid(...);
int ifTouchRegionRemove(void);
int FUN_001643b4(int, int);
int FUN_0019de98(...);
int FUN_00228b04(int, int);
int objectApplyIfUnblocked(...);
int FUN_00318df4(int);
int FUN_003450d4(int, unsigned int, int, int, int, int, char [16], int, int);
int FUN_00387ac4(...);

/* stack frame of void: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int DAT_0057f280; /* 0x57f280 */

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: FUN_001643b4. */
extern unsigned int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_00228b04. */
extern int FUN_0026140c(void);
extern unsigned int mapGetDisplayName(unsigned char);
extern int FUN_002a4860(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: objectApplyIfUnblocked. */
/* Supplied declaration required: FUN_00318df4. */
/* Supplied declaration required: FUN_003450d4. */
extern int uiSearchPrimary(int);
/* Supplied declaration required: FUN_00387ac4. */


unsigned int FUN_0022a0a0(void)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char *pbVar11;
  char temp_v10 [16];
  
  temp_v0 = DAT_0057f280;
  temp_v10[0] = '\0';
  switch(*(unsigned int *)(DAT_0057f280 + 0x744)) {
  case 1:
    temp_v8 = *(int *)(DAT_0057f280 + 0x754);
    if (*(char *)(DAT_0057f280 + 0x74e) == '\x02') {
      temp_v9 = 10;
    }
    else {
      temp_v9 = 9;
    }
    if (temp_v9 < temp_v8) {
      if (*(char *)(DAT_0057f280 + 0x74e) == '\x02') {
        temp_v8 = 10;
      }
      else {
        temp_v8 = 9;
      }
    }
    else if (temp_v8 < 1) break;
    temp_v9 = 0;
    temp_v5 = DAT_0057f280 + 0x788;
    do {
      if (temp_v9 <= *(int *)(temp_v0 + 0x748)) {
        temp_v6 = temp_v0 + temp_v9 * 0x8c;
        FUN_00163aa4(temp_v6 + 0x28);
        if ((temp_v8 - 1 <= temp_v9) && (*(char *)(temp_v6 + 0xb2) != '\0')) {
          *(unsigned int *)(temp_v0 + 0x744) = 2;
          if (*(char *)(temp_v0 + 0x74e) != '\x02') {
            temp_v6 = 0;
            if (temp_v6 < temp_v8) {
              do {
                temp_v3 = FUN_001643b4(0x15,temp_v6 + 7);
                temp_v4 = temp_v6 * 2;
                temp_v6 = temp_v6 + 1;
                *(unsigned short *)(temp_v0 + temp_v4 + 0x772) = temp_v3;
                *(short *)(temp_v0 + 0x786) = *(short *)(temp_v0 + 0x786) + 1;
              } while (temp_v6 < temp_v8);
            }
          }
          else {
            temp_v6 = 0;
            if (temp_v6 < temp_v8) {
              do {
                temp_v3 = FUN_001643b4(0x15,temp_v6 + 0x2b);
                temp_v4 = temp_v6 * 2;
                temp_v6 = temp_v6 + 1;
                *(unsigned short *)(temp_v0 + temp_v4 + 0x772) = temp_v3;
                *(short *)(temp_v0 + 0x786) = *(short *)(temp_v0 + 0x786) + 1;
              } while (temp_v6 < temp_v8);
            }
          }
          temp_v6 = FUN_002a4860(temp_v5);
          temp_v4 = FUN_002a4894(temp_v5);
          temp_v7 = mapGetDisplayName(*(unsigned char *)(temp_v4 + temp_v6 + temp_v0 + 0x758));
          FUN_0019de98(temp_v7,0xf4f4f4ff);
          temp_v6 = objectApplyIfUnblocked(temp_v5);
          temp_v4 = uiSearchPrimary(temp_v5);
          if (temp_v4 < temp_v6) {
            temp_v3 = FUN_001643b4(0x15,0x46);
            *(unsigned short *)(temp_v0 + 0x76c) = temp_v3;
            temp_v3 = FUN_001643b4(0x15,0x47);
            *(unsigned short *)(temp_v0 + 0x76e) = temp_v3;
            temp_v3 = FUN_001643b4(0x15,0x48);
            *(unsigned short *)(temp_v0 + 0x770) = temp_v3;
            *(short *)(temp_v0 + 0x786) = *(short *)(temp_v0 + 0x786) + 3;
          }
        }
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < temp_v8);
    break;
  case 2:
    FUN_00163aa4(DAT_0057f280 + 0x5a0);
    FUN_00163aa4(temp_v0 + 0x62c);
    temp_v8 = temp_v0 + 0x788;
    temp_v9 = objectApplyIfUnblocked();
    temp_v5 = uiSearchPrimary(temp_v8);
    if (temp_v5 < temp_v9) {
      FUN_00163aa4(temp_v0 + 0x6b8);
    }
    temp_v5 = FUN_002a4860(temp_v8);
    temp_v6 = FUN_002a4894(temp_v8);
    temp_v7 = FUN_001834a4(0x15,0x48);
    temp_v9 = temp_v8;
    FUN_003450d4(temp_v8,temp_v7,temp_v0 + 0x772,(int)*(short *)(temp_v0 + 0x770),
                 (int)*(short *)(temp_v0 + 0x76c),(int)*(short *)(temp_v0 + 0x76e),temp_v10,0,1);
    if (temp_v9 != 0) {
      temp_v9 = FUN_002a4894(temp_v8);
      if (temp_v9 != temp_v5 + temp_v6) {
        *(unsigned char *)(temp_v0 + 0x74d) = 1;
      }
    }
    else {
      temp_v9 = temp_v8;
      FUN_00228b04(temp_v8,1);
      if (temp_v9 == 0) {
        temp_v9 = 0;
        FUN_001517b4(0,1);
        if (!(temp_v9 == 0 && temp_v10[0] == '\0')) {
          *(unsigned char *)(temp_v0 + 0x74c) = 1;
          *(unsigned int *)(temp_v0 + 0x744) = 3;
          if (-1 < *(int *)(temp_v0 + 0x750)) {
            temp_v9 = FUN_0026140c();
            pbVar11 = (unsigned char *)(temp_v9 + *(int *)(temp_v0 + 0x750));
            temp_v9 = FUN_002a4860(temp_v8);
            temp_v8 = FUN_002a4894(temp_v8);
            temp_v2 = *(unsigned char *)(temp_v9 + temp_v8 + temp_v0 + 0x758) & 0x7f;
            temp_v1 = temp_v2 | (*pbVar11 & 0x80);
            *pbVar11 = temp_v1;
            if (*(char *)(temp_v0 + 0x74d) == '\0') {
              temp_v2 = temp_v1 | 0x80;
            }
            *pbVar11 = temp_v2;
          }
          temp_v7 = 0x100020e;
        }
        else {
          temp_v9 = 1;
          FUN_001517b4();
          temp_v8 = DAT_0057f280;
          if (temp_v9 == 0) break;
          temp_v9 = 0;
          *(unsigned int *)(DAT_0057f280 + 0x744) = 4;
          if (0 < *(short *)(temp_v8 + 0x786)) {
            do {
              *(unsigned short *)(temp_v8 + temp_v9 * 2 + 0x76c) = 0xffff;
              ifTouchRegionRemove();
              temp_v9 = temp_v9 + 1;
            } while (temp_v9 < *(short *)(temp_v8 + 0x786));
          }
          if (*(char *)(temp_v8 + 0x74e) != '\x02' && *(char *)(temp_v8 + 0x74e) != '\x01') {
            if (*(char *)(temp_v8 + 0x7f4) != '\0') {
              if (*(char *)(temp_v8 + 0x7f5) != '\0') {
                FUN_00318df4(1);
              }
              else {
                FUN_0019de98(temp_v8 + 0x7f6,0xf4f4f4ff);
              }
              *(unsigned char *)(temp_v8 + 0x7f4) = 0;
            }
            else {
              FUN_00387ac4(0);
            }
          }
          temp_v7 = 0x100020f;
        }
        eventQueueAddUniqueIfValid(temp_v7);
        break;
      }
      *(unsigned char *)(temp_v0 + 0x74d) = 1;
    }
    temp_v9 = FUN_002a4860(temp_v8);
    temp_v8 = FUN_002a4894(temp_v8);
    temp_v7 = mapGetDisplayName(*(unsigned char *)(temp_v8 + temp_v9 + temp_v0 + 0x758));
    FUN_0019de98(temp_v7,0xf4f4f4ff);
    break;
  case 3:
    FUN_00163aa4(DAT_0057f280 + 0x5a0);
    FUN_00163aa4(temp_v0 + 0x62c);
    temp_v8 = objectApplyIfUnblocked();
    temp_v9 = uiSearchPrimary(temp_v0 + 0x788);
    if (temp_v9 < temp_v8) {
      FUN_00163aa4(temp_v0 + 0x6b8);
    }
    temp_v8 = DAT_0057f280;
    if (*(char *)(temp_v0 + 0x74e) != '\x02') {
      *(unsigned char *)(DAT_0057f280 + 0x74c) = 0;
      *(unsigned int *)(temp_v8 + 0x744) = 2;
      if (*(char *)(temp_v8 + 0x74d) != '\0') {
        *(unsigned char *)(temp_v8 + 0x74d) = 0;
      }
      else {
        *(unsigned char *)(temp_v8 + 0x74d) = 1;
      }
    }
  }
  *(int *)(temp_v0 + 0x748) = *(int *)(temp_v0 + 0x748) + 1;
  return 0;
}

} /* extern "C" */
