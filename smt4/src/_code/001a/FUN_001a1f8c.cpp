/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a1f8c` (_code @ 0x1a1f8c, 0x73c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "status/StatusCamera.h"
#include "shard/FUN_00220d24.h"

extern "C" {

int FUN_00295214(...);
int FUN_0029ee54(...);
int FUN_0029ee6c(...);
int FUN_0029efd8(...);
int uiScrollHandleActionsOrTouch(int, unsigned int, int, int, int, int, char [4], int, int);
int libc_bsearch(...);
int FUN_002b8584(int, int);
int ifTouchRegionRemove(void);
int eventQueueAddUniqueIfValid(...);
int FUN_002bf818(...);
int FUN_002c1658(...);

/* stack frame of void: 7 slot(s), 23 byte(s) */
typedef struct {
    unsigned short sp9C; /* 0x9c: local_9c */
    unsigned char spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
} void_stack;

extern unsigned char LAB_001f62dc; /* 0x1f62dc */
extern int DAT_0043dd24; /* 0x43dd24 */

/* Supplied declaration required: FUN_00220d24. */
/* Supplied declaration required: FUN_00295214. */
extern int FUN_0029d644(int);
/* Supplied declaration required: FUN_0029ee54. */
/* Supplied declaration required: FUN_0029ee6c. */
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: FUN_0029efd8. */
/* Supplied declaration required: uiScrollHandleActionsOrTouch. */
/* Supplied declaration required: libc_bsearch. */
/* Supplied declaration required: FUN_002b8584. */
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern unsigned int asdTMTexTableEntryAt(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf818. */
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c1658. */


unsigned int FUN_001a1f8c(void)

{
/* irregular: 1 goto(s); 12 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned short temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned char *pbVar12;
  unsigned short *puVar13;
  char temp_v11 [4];
  unsigned short temp_v12 [60];
  
  temp_v0 = DAT_0043dd24;
  temp_v11[0] = '\0';
  switch(*(unsigned int *)(DAT_0043dd24 + 0x744)) {
  case 1:
    temp_v9 = *(int *)(DAT_0043dd24 + 0x754);
    if (*(char *)(DAT_0043dd24 + 0x74e) == '\x02') {
      temp_v10 = 10;
    }
    else {
      temp_v10 = 9;
    }
    if (temp_v10 < temp_v9) {
      if (*(char *)(DAT_0043dd24 + 0x74e) == '\x02') {
        temp_v9 = 10;
      }
      else {
        temp_v9 = 9;
      }
    }
    else if (temp_v9 < 1) break;
    temp_v5 = 0;
    temp_v10 = DAT_0043dd24 + 0x788;
    do {
      if (temp_v5 <= *(int *)(temp_v0 + 0x748)) {
        temp_v6 = temp_v0 + temp_v5 * 0x8c;
        FUN_002bf818(temp_v6 + 0x28);
        if ((temp_v9 - 1 <= temp_v5) && (*(char *)(temp_v6 + 0xb2) != '\0')) {
          *(unsigned int *)(temp_v0 + 0x744) = 2;
          if (*(char *)(temp_v0 + 0x74e) != '\x02') {
            temp_v6 = 0;
            if (temp_v6 < temp_v9) {
              do {
                temp_v3 = FUN_002b8584(0x1e,temp_v6 + 7);
                temp_v4 = temp_v6 * 2;
                temp_v6 = temp_v6 + 1;
                *(unsigned short *)(temp_v0 + temp_v4 + 0x772) = temp_v3;
                *(short *)(temp_v0 + 0x786) = *(short *)(temp_v0 + 0x786) + 1;
              } while (temp_v6 < temp_v9);
            }
            temp_v6 = FUN_0029efc0(temp_v10);
            temp_v4 = FUN_0029efa8(temp_v10);
            temp_v1 = *(unsigned char *)(temp_v4 + temp_v6 + temp_v0 + 0x758);
            if (temp_v1 < 0x4c) goto LAB_001a2150;
            puVar13 = (unsigned short *)0x0;
          }
          else {
            temp_v6 = 0;
            if (temp_v6 < temp_v9) {
              do {
                temp_v3 = FUN_002b8584(0x1e,temp_v6 + 0x2b);
                temp_v4 = temp_v6 * 2;
                temp_v6 = temp_v6 + 1;
                *(unsigned short *)(temp_v0 + temp_v4 + 0x772) = temp_v3;
                *(short *)(temp_v0 + 0x786) = *(short *)(temp_v0 + 0x786) + 1;
              } while (temp_v6 < temp_v9);
            }
            temp_v6 = FUN_0029efc0(temp_v10);
            temp_v4 = FUN_0029efa8(temp_v10);
            temp_v1 = *(unsigned char *)(temp_v4 + temp_v6 + temp_v0 + 0x758);
            if (temp_v1 >= 0x4c) {
              puVar13 = (unsigned short *)0x0;
            }
            else {
LAB_001a2150:
              temp_v7 = dataTableGet(0x38,0);
              temp_v8 = dataTableGetEntries();
              temp_v7 = dataTableGetCount(temp_v7);
              puVar13 = temp_v12;
              temp_v12[0] = (unsigned short)temp_v1;
              libc_bsearch(puVar13,temp_v8,temp_v7,0x72,&LAB_001f62dc);
              puVar13 = puVar13 + 0xc;
            }
          }
          FUN_0029ee6c(puVar13,0x323232ff);
          temp_v6 = FUN_0029ee54(temp_v10);
          temp_v4 = FUN_0029d644(temp_v10);
          if (temp_v4 < temp_v6) {
            temp_v3 = FUN_002b8584(0x1e,0x46);
            *(unsigned short *)(temp_v0 + 0x76c) = temp_v3;
            temp_v3 = FUN_002b8584(0x1e,0x47);
            *(unsigned short *)(temp_v0 + 0x76e) = temp_v3;
            temp_v3 = FUN_002b8584(0x1e,0x48);
            *(unsigned short *)(temp_v0 + 0x770) = temp_v3;
            *(short *)(temp_v0 + 0x786) = *(short *)(temp_v0 + 0x786) + 3;
          }
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v9);
    break;
  case 2:
    FUN_002bf818(DAT_0043dd24 + 0x5a0);
    FUN_002bf818(temp_v0 + 0x62c);
    temp_v9 = temp_v0 + 0x788;
    temp_v10 = FUN_0029ee54();
    temp_v5 = FUN_0029d644(temp_v9);
    if (temp_v5 < temp_v10) {
      FUN_002bf818(temp_v0 + 0x6b8);
    }
    temp_v5 = FUN_0029efc0(temp_v9);
    temp_v6 = FUN_0029efa8(temp_v9);
    temp_v7 = asdTMTexTableEntryAt(0x1e,0x48);
    puVar13 = (unsigned short *)0x0;
    temp_v10 = temp_v9;
    uiScrollHandleActionsOrTouch(temp_v9,temp_v7,temp_v0 + 0x772,(int)*(short *)(temp_v0 + 0x770),
                 (int)*(short *)(temp_v0 + 0x76c),(int)*(short *)(temp_v0 + 0x76e),temp_v11,0,1);
    if (temp_v10 != 0) {
      temp_v10 = FUN_0029efa8(temp_v9);
      if (temp_v10 != temp_v5 + temp_v6) {
        *(unsigned char *)(temp_v0 + 0x74d) = 1;
      }
      if (*(char *)(temp_v0 + 0x74e) == '\x02') {
        temp_v10 = FUN_0029efc0(temp_v9);
        temp_v9 = FUN_0029efa8(temp_v9);
        temp_v1 = *(unsigned char *)(temp_v9 + temp_v10 + temp_v0 + 0x758);
        if (temp_v1 < 0x4c) {
          temp_v7 = dataTableGet(0x38,0);
          temp_v8 = dataTableGetEntries();
          temp_v7 = dataTableGetCount(temp_v7);
          puVar13 = temp_v12;
          temp_v12[0] = (unsigned short)temp_v1;
          libc_bsearch(puVar13,temp_v8,temp_v7,0x72,&LAB_001f62dc);
          puVar13 = puVar13 + 0xc;
        }
        FUN_0029ee6c(puVar13,0x323232ff);
        break;
      }
      temp_v10 = FUN_0029efc0(temp_v9);
      temp_v9 = FUN_0029efa8(temp_v9);
      temp_v1 = *(unsigned char *)(temp_v9 + temp_v10 + temp_v0 + 0x758);
      if (temp_v1 >= 0x4c) {
        puVar13 = (unsigned short *)0x0;
      }
      else {
        temp_v7 = dataTableGet(0x38,0);
        temp_v8 = dataTableGetEntries();
        temp_v7 = dataTableGetCount(temp_v7);
        puVar13 = temp_v12;
        temp_v12[0] = (unsigned short)temp_v1;
        libc_bsearch(puVar13,temp_v8,temp_v7,0x72,&LAB_001f62dc);
        puVar13 = puVar13 + 0xc;
      }
    }
    else {
      temp_v10 = temp_v9;
      FUN_0029efd8(temp_v9,1);
      if (temp_v10 == 0) {
        temp_v10 = 0;
        FUN_002c1658(0,1);
        if (!(temp_v10 == 0 && temp_v11[0] == '\0')) {
          *(unsigned char *)(temp_v0 + 0x74c) = 1;
          *(unsigned int *)(temp_v0 + 0x744) = 3;
          if (-1 < *(int *)(temp_v0 + 0x750)) {
            temp_v10 = reinterpret_cast<int>(FUN_002a0d0c());
            pbVar12 = (unsigned char *)(temp_v10 + *(int *)(temp_v0 + 0x750));
            temp_v10 = FUN_0029efc0(temp_v9);
            temp_v9 = FUN_0029efa8(temp_v9);
            temp_v2 = *(unsigned char *)(temp_v10 + temp_v9 + temp_v0 + 0x758) & 0x7f;
            temp_v1 = temp_v2 | (*pbVar12 & 0x80);
            *pbVar12 = temp_v1;
            if (*(char *)(temp_v0 + 0x74d) == '\0') {
              temp_v2 = temp_v1 | 0x80;
            }
            *pbVar12 = temp_v2;
          }
          temp_v7 = 0x100016d;
        }
        else {
          temp_v10 = 1;
          FUN_002c1658();
          temp_v9 = DAT_0043dd24;
          if (temp_v10 == 0) break;
          temp_v10 = 0;
          *(unsigned int *)(DAT_0043dd24 + 0x744) = 4;
          if (0 < *(short *)(temp_v9 + 0x786)) {
            do {
              *(unsigned short *)(temp_v9 + temp_v10 * 2 + 0x76c) = 0xffff;
              ifTouchRegionRemove();
              temp_v10 = temp_v10 + 1;
            } while (temp_v10 < *(short *)(temp_v9 + 0x786));
          }
          if (*(char *)(temp_v9 + 0x74e) != '\x02' && *(char *)(temp_v9 + 0x74e) != '\x01') {
            if (*(char *)(temp_v9 + 0x7f4) != '\0') {
              if (*(char *)(temp_v9 + 0x7f5) != '\0') {
                FUN_00220d24(1);
              }
              else {
                FUN_0029ee6c(temp_v9 + 0x7f6,0x323232ff);
              }
              *(unsigned char *)(temp_v9 + 0x7f4) = 0;
            }
            else {
              FUN_00295214(0);
            }
          }
          temp_v7 = 0x100016e;
        }
        eventQueueAddUniqueIfValid(temp_v7);
        break;
      }
      *(unsigned char *)(temp_v0 + 0x74d) = 1;
      if (*(char *)(temp_v0 + 0x74e) == '\x02') {
        temp_v10 = FUN_0029efc0(temp_v9);
        temp_v9 = FUN_0029efa8(temp_v9);
        temp_v1 = *(unsigned char *)(temp_v9 + temp_v10 + temp_v0 + 0x758);
        if (temp_v1 < 0x4c) {
          temp_v7 = dataTableGet(0x38,0);
          temp_v8 = dataTableGetEntries();
          temp_v7 = dataTableGetCount(temp_v7);
          puVar13 = temp_v12;
          temp_v12[0] = (unsigned short)temp_v1;
          libc_bsearch(puVar13,temp_v8,temp_v7,0x72,&LAB_001f62dc);
          puVar13 = puVar13 + 0xc;
        }
        FUN_0029ee6c(puVar13,0x323232ff);
        break;
      }
      temp_v10 = FUN_0029efc0(temp_v9);
      temp_v9 = FUN_0029efa8(temp_v9);
      temp_v1 = *(unsigned char *)(temp_v9 + temp_v10 + temp_v0 + 0x758);
      if (temp_v1 >= 0x4c) {
        puVar13 = (unsigned short *)0x0;
        FUN_0029ee6c(puVar13,0x323232ff);
        break;
      }
      temp_v7 = dataTableGet(0x38,0);
      temp_v8 = dataTableGetEntries();
      temp_v7 = dataTableGetCount(temp_v7);
      puVar13 = temp_v12;
      temp_v12[0] = (unsigned short)temp_v1;
      libc_bsearch(puVar13,temp_v8,temp_v7,0x72,&LAB_001f62dc);
      puVar13 = puVar13 + 0xc;
    }
    FUN_0029ee6c(puVar13,0x323232ff);
    break;
  case 3:
    FUN_002bf818(DAT_0043dd24 + 0x5a0);
    FUN_002bf818(temp_v0 + 0x62c);
    temp_v9 = FUN_0029ee54();
    temp_v10 = FUN_0029d644(temp_v0 + 0x788);
    if (temp_v10 < temp_v9) {
      FUN_002bf818(temp_v0 + 0x6b8);
    }
    temp_v9 = DAT_0043dd24;
    if (*(char *)(temp_v0 + 0x74e) != '\x02') {
      *(unsigned char *)(DAT_0043dd24 + 0x74c) = 0;
      *(unsigned int *)(temp_v9 + 0x744) = 2;
      if (*(char *)(temp_v9 + 0x74d) != '\0') {
        *(unsigned char *)(temp_v9 + 0x74d) = 0;
      }
      else {
        *(unsigned char *)(temp_v9 + 0x74d) = 1;
      }
    }
  }
  *(int *)(temp_v0 + 0x748) = *(int *)(temp_v0 + 0x748) + 1;
  return 0;
}

} /* extern "C" */
