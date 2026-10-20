/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00371750` (_code @ 0x371750, 0x3c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014af84(void);
int FUN_001630d4(int, int, int, unsigned int, int);
int FUN_0019a5a0(...);
int FUN_001a9110(...);
int FUN_00239294(void);
int FUN_00268250(...);
int FUN_002c9104(void);
int FUN_00333594(...);
int FUN_00358dbc(void);
int rt_memcpy(...);
int rt_memcpy_w(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char DAT_0057f6bd; /* 0x57f6bd */
extern unsigned char DAT_0057f6c0; /* 0x57f6c0 */
extern unsigned short DAT_0057f6c2; /* 0x57f6c2 */
extern int DAT_0057f6c4; /* 0x57f6c4 */
extern int DAT_00588e2c; /* 0x588e2c */

/* Supplied declaration required: FUN_0014af84. */
/* Supplied declaration required: FUN_001630d4. */
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001a9110. */
extern unsigned int FUN_00228af0(void);
extern int FUN_00229c9c(void);
/* Supplied declaration required: FUN_00239294. */
extern unsigned int FUN_00261458(void);
/* Supplied declaration required: FUN_00268250. */
/* Supplied declaration required: FUN_002c9104. */
extern unsigned int FUN_00330b58(void);
extern int FUN_003332d8(void);
/* Supplied declaration required: FUN_00333594. */
/* Supplied declaration required: FUN_00358dbc. */
extern int FUN_003881d0(void);
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_00371750(void)

{
/* irregular: 1 goto(s); 11 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  char temp_v5;
  int temp_v6;
  unsigned short *puVar8;
  
  temp_v1 = FUN_00164a9c();
  switch(*(unsigned int *)(temp_v1 + 4)) {
  case 0:
    *(unsigned int *)(temp_v1 + 0xc) = 0x20;
    temp_v3 = 0x10000;
    FUN_001630d4(0x10000,0x100,0,*(unsigned int *)(temp_v1 + 0xc),1);
    *(unsigned int *)(temp_v1 + 8) = temp_v3;
    FUN_00358dbc();
    temp_v4 = *(int *)(temp_v1 + 0x10) - 1;
    if (*(int *)(temp_v1 + 0x14) == 1) {
      temp_v4 = *(int *)(temp_v1 + 0x10);
    }
    temp_v3 = FUN_00330b58();
    FUN_00333594(temp_v4,temp_v3);
    if (*(char *)(DAT_00588e2c + 0xc) != '\0') {
      temp_v2 = FUN_003881d0();
      if (temp_v2 == 0) {
        temp_v4 = 0x1c20;
      }
      temp_v6 = 0;
      if (temp_v2 == 0) {
        do {
          temp_v2 = FUN_00239294();
          *(unsigned int *)(temp_v6 * 4 + 0x5e20f4) = *(unsigned int *)(temp_v2 + temp_v6 * 4);
          FUN_00333594(temp_v6,temp_v4);
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 5);
      }
      else {
        do {
          if (temp_v6 == temp_v4) {
            FUN_00333594(temp_v6,0);
          }
          else {
            FUN_00333594(temp_v6,*(unsigned int *)(temp_v6 * 4 + 0x5e20f4));
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 5);
      }
    }
    temp_v3 = FUN_00239294();
    rt_memcpy(*(unsigned int *)(temp_v1 + 8),temp_v3,0x20);
    FUN_00268250(2,0,0x62,*(unsigned int *)(temp_v1 + 8),*(unsigned int *)(temp_v1 + 0xc));
    *(unsigned int *)(temp_v1 + 4) = 1;
    break;
  case 1:
    temp_v4 = FUN_00229c9c();
    if (temp_v4 == 1) {
      temp_v4 = FUN_003332d8();
      if (temp_v4 == 0) {
        FUN_0019a5a0(*(unsigned int *)(temp_v1 + 8));
        *(unsigned int *)(temp_v1 + 4) = 2;
        *(unsigned int *)(temp_v1 + 8) = 0;
        return 0;
      }
      FUN_0019a5a0(*(unsigned int *)(temp_v1 + 8));
      *(unsigned int *)(temp_v1 + 4) = 5;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return 0;
    }
    goto joined_r0x00371a3c;
  case 2:
    *(unsigned int *)(temp_v1 + 0xc) = 0x2a7a4;
    temp_v3 = 0x10000;
    FUN_001630d4(0x10000,0x100,0,*(unsigned int *)(temp_v1 + 0xc),1);
    *(unsigned int *)(temp_v1 + 8) = temp_v3;
    FUN_00358dbc();
    temp_v0 = (char)*(unsigned int *)(temp_v1 + 0x10);
    temp_v5 = temp_v0 - '\x01';
    if (*(int *)(temp_v1 + 0x14) == 1) {
      temp_v5 = temp_v0;
    }
    temp_v4 = FUN_0014af84();
    *(char *)(temp_v4 + 3) = temp_v5;
    temp_v3 = FUN_00261458();
    rt_memcpy(*(unsigned int *)(temp_v1 + 8),temp_v3,0x80);
    temp_v3 = FUN_00228af0();
    FUN_001a9110(*(int *)(temp_v1 + 8) + 0x80,temp_v3);
    temp_v4 = *(int *)(temp_v1 + 8);
    puVar8 = (unsigned short *)(temp_v4 + 0x88);
    temp_v3 = FUN_0014af84();
    rt_memcpy_w(puVar8,temp_v3,0x2a71c);
    *puVar8 = 4;
    *(unsigned char *)(temp_v4 + 0x8a) = *(unsigned char *)(temp_v1 + 0x19);
    FUN_002c9104();
    FUN_00268250(2,*(unsigned int *)(temp_v1 + 0x14),*(unsigned int *)(temp_v1 + 0x10),
                 *(unsigned int *)(temp_v1 + 8),*(unsigned int *)(temp_v1 + 0xc));
    *(unsigned int *)(temp_v1 + 4) = 3;
    break;
  case 3:
    temp_v4 = FUN_00229c9c();
    if (temp_v4 == 1) {
      temp_v4 = FUN_003332d8();
      if (temp_v4 == 0) {
        FUN_0019a5a0(*(unsigned int *)(temp_v1 + 8));
        *(unsigned int *)(temp_v1 + 4) = 4;
        *(unsigned int *)(temp_v1 + 8) = 0;
        return 0;
      }
      FUN_0019a5a0(*(unsigned int *)(temp_v1 + 8));
      *(unsigned int *)(temp_v1 + 4) = 5;
      *(unsigned int *)(temp_v1 + 8) = 0;
      return 0;
    }
joined_r0x00371a3c:
    DAT_0057f6c4 = DAT_0057f6c4 + 1;
    if (DAT_0057f6c4 >= 8) {
      DAT_0057f6c2 = DAT_0057f6c2 + 1;
      if (DAT_0057f6c2 >= 3) {
        DAT_0057f6c2 = 0;
      }
      DAT_0057f6c4 = 0;
    }
    break;
  case 4:
    DAT_0057f6bd = 1;
    DAT_0057f6c0 = 1;
    return 0xffffffff;
  case 5:
    DAT_0057f6c0 = 0;
    DAT_0057f6bd = 1;
    return 0xffffffff;
  }
  return 0;
}

} /* extern "C" */
