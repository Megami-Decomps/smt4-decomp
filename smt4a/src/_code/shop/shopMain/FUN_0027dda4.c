/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027dda4` (_code @ 0x27dda4, 0x314 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_0027e0c8; /* 0x27e0c8 */
extern unsigned char *DAT_00588eec; /* 0x588eec */
extern int DAT_00588f98; /* 0x588f98 */
extern int DAT_005f1b74; /* 0x5f1b74 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00137ee0. */
/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_0019ea5c. */
extern int FUN_002d1fdc(void);
/* Supplied declaration required: FUN_002e3328. */
extern int FUN_0032482c(void);
/* Supplied declaration required: FUN_003d2d6c. */
/* Supplied declaration required: FUN_003d54f8. */
extern int FUN_0040a4b4(void);
/* Supplied declaration required: FUN_0040a548. */
/* Supplied declaration required: FUN_00499338. */
/* Supplied declaration required: FUN_00499c84. */
/* Supplied declaration required: FUN_0049c3c0. */
extern int FUN_0049ca48(void);
/* Supplied declaration required: FUN_0049cf9c. */
/* Supplied declaration required: FUN_0049d004. */
extern int FUN_004d08d0(int);


unsigned int FUN_0027dda4(void)

{
/* irregular: 13 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char *puVar5;
  int temp_v4;
  int *piVar7;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  int temp_v8 [2];
  unsigned char temp_v9 [24];
  
  temp_v4 = DAT_00588f98;
  piVar7 = temp_v8;
  temp_v0 = *(char *)(DAT_00588f98 + 5);
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 != '\x03') {
          return 0;
        }
        if (*(char *)(DAT_00588f98 + 0x14) != '\0') {
          temp_v3 = *(int *)(DAT_00588f98 + 8);
          if (temp_v3 >= 100) {
            if (temp_v3 == 0x6d) {
              temp_v6 = 3;
            }
            else {
              temp_v6 = 5;
            }
          }
          else if (temp_v3 == 8) {
            temp_v6 = 2;
          }
          else {
            temp_v6 = 4;
          }
          if (DAT_00588eec == (unsigned char *)0x0) {
            puVar5 = (unsigned char *)0x8;
            FUN_0016007c();
            DAT_00588eec = puVar5;
            if (puVar5 != (unsigned char *)0x0) {
              *puVar5 = 0;
              *(unsigned int *)(puVar5 + 4) = 0;
            }
          }
          temp_v7 = DAT_00588eec == (unsigned char *)0x0;
          *(unsigned int *)(DAT_00588eec + 4) = *(unsigned int *)(temp_v4 + 8);
          if (temp_v7) {
            puVar5 = (unsigned char *)0x8;
            FUN_0016007c();
            DAT_00588eec = puVar5;
            if (puVar5 != (unsigned char *)0x0) {
              *puVar5 = 0;
              *(unsigned int *)(puVar5 + 4) = 0;
            }
          }
          *DAT_00588eec = 1;
          temp_v8[1] = 0xffffffff;
          temp_v8[0] = 999;
          FUN_00100388(temp_v9,&LAB_0027e0c8,999,temp_v6);
          FUN_00137ee0(4,temp_v8,0x20);
        }
        else {
          temp_v3 = FUN_002d1fdc();
          if (temp_v3 != 0) {
            temp_v4 = FUN_0032482c();
            if (temp_v4 != 0) {
              temp_v5 = 4;
              temp_v8[0] = DAT_005f1b74 - 200;
              temp_v6 = 0xe;
            }
            else {
              temp_v5 = 0;
              piVar7 = (int *)0x0;
              temp_v6 = 6;
            }
            FUN_00137ee0(temp_v6,piVar7,temp_v5);
          }
          else if (*(char *)(temp_v4 + 0xc) != '\0') {
            FUN_003d54f8(0,1);
            FUN_003d54f8(1);
          }
          else {
            FUN_003d54f8(0,1);
            FUN_003d54f8(1);
            FUN_003d2d6c(0xf);
          }
        }
        return 0xffffffff;
      }
      if (*(int *)(DAT_00588f98 + 0x18) != 0) {
        FUN_00499c84();
        if (*(int *)(temp_v4 + 0x18) != 0) {
          temp_v3 = FUN_004d08d0(*(int *)(temp_v4 + 0x18) + 0xb08);
          FUN_002e3328(temp_v3 - 0xb08);
        }
        FUN_0049d004(temp_v8);
      }
      temp_v1 = 3;
    }
    else {
      if (DAT_00588f98 == 0) {
        return 0;
      }
      if (*(int *)(DAT_00588f98 + 0x18) == 0) {
        return 0;
      }
      FUN_00499338();
      if ((**(unsigned int **)(temp_v4 + 0x18) & 1) == 0) {
        return 0;
      }
      temp_v1 = 2;
    }
    *(unsigned char *)(temp_v4 + 5) = temp_v1;
  }
  else {
    temp_v3 = FUN_0049ca48();
    if ((temp_v3 != 0) && (temp_v3 = FUN_0040a4b4(), temp_v3 == 0)) {
      FUN_0040a548();
    }
    FUN_0049cf9c(temp_v8);
    temp_v3 = 0x1605c;
    if (*(char *)(temp_v4 + 6) != '\0') {
      if (*(char *)(temp_v4 + 6) == '\x01') {
        FUN_0016007c();
        temp_v2 = 0;
        if (temp_v3 != 0) {
          temp_v2 = FUN_0049c3c0();
        }
        temp_v3 = *(int *)(temp_v4 + 0x10);
        *(int *)(temp_v4 + 0x18) = temp_v2;
        if (temp_v3 == 8) {
          temp_v3 = 8;
        }
        *(int *)(temp_v2 + 0xb40) = temp_v3;
      }
    }
    else {
      FUN_0016007c();
      temp_v6 = 0;
      if (temp_v3 != 0) {
        temp_v6 = FUN_0049c3c0();
      }
      *(unsigned int *)(temp_v4 + 0x18) = temp_v6;
    }
    FUN_0019ea5c(*(unsigned int *)(temp_v4 + 0x18));
    *(unsigned char *)(temp_v4 + 5) = 1;
  }
  return 0;
}
