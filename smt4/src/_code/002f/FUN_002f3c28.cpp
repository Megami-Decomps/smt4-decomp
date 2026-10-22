/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3c28` (_code @ 0x2f3c28, 0x3dc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00267074(...);
int contentEntryGetE(void);
int naviSetMapSlotDefault(int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int g_mapEnemy; /* 0x447600 */

/* Supplied declaration required: FUN_00267074. */
/* Supplied declaration required: contentEntryGetE. */
extern int gameGetMapBlock(void);
/* Supplied declaration required: naviSetMapSlotDefault. */


void FUN_002f3c28(void)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  char temp_v4;
  unsigned char temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  
  temp_v1 = g_mapEnemy;
  temp_v2 = gameGetMapBlock();
  temp_v7 = 0;
  do {
    temp_v8 = temp_v2 + temp_v7 * 0x14;
    temp_v0 = *(unsigned char *)(temp_v8 + 0xf20);
    if ((temp_v0 & 1) != 0) {
      if ((temp_v0 & 4) != 0) {
        if (((temp_v0 & 2) != 0) && (temp_v6 = (int)*(short *)(temp_v8 + 0xf24), (temp_v0 & 8) != 0)) {
          *(unsigned char *)(temp_v8 + 0xf20) = (temp_v0 & 0xf7) | 0x20;
          contentEntryGetE();
          temp_v4 = *(char *)(temp_v8 + 0xf23) + '\x01';
          *(char *)(temp_v8 + 0xf23) = temp_v4;
          if (temp_v4 != '\x01') {
            if (temp_v4 != '\x02') {
              if (temp_v4 != '\x03') {
                if (temp_v4 == '\x04') {
                  *(unsigned char *)(temp_v8 + 0xf23) = 0;
                }
              }
              else {
                temp_v4 = *(char *)(temp_v6 + 0x2e);
                if (temp_v4 < '\x01') {
                  *(unsigned char *)(temp_v8 + 0xf23) = 0;
                }
              }
            }
            else {
              temp_v4 = *(char *)(temp_v6 + 0x20);
              if (temp_v4 < '\x01') {
                *(unsigned char *)(temp_v8 + 0xf23) = 0;
              }
            }
          }
          else {
            temp_v4 = *(char *)(temp_v6 + 0x12);
            if (temp_v4 < '\x01') {
              *(unsigned char *)(temp_v8 + 0xf23) = 0;
            }
          }
          temp_v4 = *(char *)(temp_v8 + 0xf23);
          if (temp_v4 != '\0') {
            if (temp_v4 != '\x01') {
              if (temp_v4 != '\x02') {
                if (temp_v4 == '\x03') {
                  *(unsigned char *)(temp_v8 + 0xf21) = *(unsigned char *)(temp_v6 + 0x2e);
                  temp_v5 = *(unsigned char *)(temp_v6 + 0x2f);
                  *(unsigned char *)(temp_v8 + 0xf22) = temp_v5;
                }
              }
              else {
                *(unsigned char *)(temp_v8 + 0xf21) = *(unsigned char *)(temp_v6 + 0x20);
                temp_v5 = *(unsigned char *)(temp_v6 + 0x21);
                *(unsigned char *)(temp_v8 + 0xf22) = temp_v5;
              }
            }
            else {
              *(unsigned char *)(temp_v8 + 0xf21) = *(unsigned char *)(temp_v6 + 0x12);
              temp_v5 = *(unsigned char *)(temp_v6 + 0x13);
              *(unsigned char *)(temp_v8 + 0xf22) = temp_v5;
            }
          }
          else {
            *(unsigned char *)(temp_v8 + 0xf21) = *(unsigned char *)(temp_v6 + 4);
            temp_v5 = *(unsigned char *)(temp_v6 + 5);
            *(unsigned char *)(temp_v8 + 0xf22) = temp_v5;
          }
          if (temp_v4 != '\0') {
            if (temp_v4 != '\x01') {
              if (temp_v4 != '\x02') {
                if (temp_v4 == '\x03') {
                  *(short *)(temp_v8 + 0xf28) = *(short *)(temp_v6 + 0x38) * 0x708;
                  *(unsigned short *)(temp_v8 + 0xf2c) = *(unsigned short *)(temp_v6 + 0x30);
                  *(unsigned short *)(temp_v8 + 0xf2e) = *(unsigned short *)(temp_v6 + 0x32);
                  *(unsigned short *)(temp_v8 + 0xf30) = *(unsigned short *)(temp_v6 + 0x34);
                  *(unsigned short *)(temp_v8 + 0xf32) = *(unsigned short *)(temp_v6 + 0x36);
                  *(unsigned char *)(temp_v8 + 0xf2a) = *(unsigned char *)(temp_v6 + 0x3a);
                  temp_v5 = *(unsigned char *)(temp_v6 + 0x3b);
                  *(unsigned char *)(temp_v8 + 0xf2b) = temp_v5;
                }
              }
              else {
                *(short *)(temp_v8 + 0xf28) = *(short *)(temp_v6 + 0x2a) * 0x708;
                *(unsigned short *)(temp_v8 + 0xf2c) = *(unsigned short *)(temp_v6 + 0x22);
                *(unsigned short *)(temp_v8 + 0xf2e) = *(unsigned short *)(temp_v6 + 0x24);
                *(unsigned short *)(temp_v8 + 0xf30) = *(unsigned short *)(temp_v6 + 0x26);
                *(unsigned short *)(temp_v8 + 0xf32) = *(unsigned short *)(temp_v6 + 0x28);
                *(unsigned char *)(temp_v8 + 0xf2a) = *(unsigned char *)(temp_v6 + 0x2c);
                temp_v5 = *(unsigned char *)(temp_v6 + 0x2d);
                *(unsigned char *)(temp_v8 + 0xf2b) = temp_v5;
              }
            }
            else {
              *(short *)(temp_v8 + 0xf28) = *(short *)(temp_v6 + 0x1c) * 0x708;
              *(unsigned short *)(temp_v8 + 0xf2c) = *(unsigned short *)(temp_v6 + 0x14);
              *(unsigned short *)(temp_v8 + 0xf2e) = *(unsigned short *)(temp_v6 + 0x16);
              *(unsigned short *)(temp_v8 + 0xf30) = *(unsigned short *)(temp_v6 + 0x18);
              *(unsigned short *)(temp_v8 + 0xf32) = *(unsigned short *)(temp_v6 + 0x1a);
              *(unsigned char *)(temp_v8 + 0xf2a) = *(unsigned char *)(temp_v6 + 0x1e);
              temp_v5 = *(unsigned char *)(temp_v6 + 0x1f);
              *(unsigned char *)(temp_v8 + 0xf2b) = temp_v5;
            }
          }
          else {
            *(short *)(temp_v8 + 0xf28) = *(short *)(temp_v6 + 0xe) * 0x708;
            *(unsigned short *)(temp_v8 + 0xf2c) = *(unsigned short *)(temp_v6 + 6);
            *(unsigned short *)(temp_v8 + 0xf2e) = *(unsigned short *)(temp_v6 + 8);
            *(unsigned short *)(temp_v8 + 0xf30) = *(unsigned short *)(temp_v6 + 10);
            *(unsigned short *)(temp_v8 + 0xf32) = *(unsigned short *)(temp_v6 + 0xc);
            *(unsigned char *)(temp_v8 + 0xf2a) = *(unsigned char *)(temp_v6 + 0x10);
            temp_v5 = *(unsigned char *)(temp_v6 + 0x11);
            *(unsigned char *)(temp_v8 + 0xf2b) = temp_v5;
          }
          if ((*(unsigned char *)(temp_v8 + 0xf20) & 4) == 0) goto LAB_002f3fe8;
        }
        if ((*(unsigned char *)(temp_v8 + 0xf20) & 0x12) != 0) {
          if (((int)*(char *)(temp_v8 + 0xf21) == *(int *)(temp_v1 + 0xc)) &&
             ((int)*(char *)(temp_v8 + 0xf22) == *(int *)(temp_v1 + 0x10))) {
            temp_v6 = 0;
            do {
              temp_v3 = temp_v1 + temp_v6 * 0x180;
              temp_v10 = *(char *)(temp_v3 + 0x34) != '\0';
              temp_v9 = 0;
              if (temp_v10) {
                temp_v9 = *(int *)(temp_v3 + 0xb8);
              }
              if ((temp_v10 && temp_v9 != 0x13) && (*(int *)(temp_v3 + 0x88) == temp_v7)) {
                if ((*(int *)(temp_v3 + 0xb8) == 3) && (*(int *)(temp_v3 + 0xbc) < 2)) {
                  FUN_00267074(temp_v7);
                }
                else {
                  FUN_00267074(temp_v7);
                }
                goto LAB_002f3ff0;
              }
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 0x20);
          }
          FUN_00267074(temp_v7,(int)*(char *)(temp_v8 + 0xf21),(int)*(char *)(temp_v8 + 0xf22),
                       (int)*(short *)(temp_v8 + 0xf2c),(int)*(short *)(temp_v8 + 0xf2e),
                       (int)*(short *)(temp_v8 + 0xf30),1);
        }
        else {
          FUN_00267074(temp_v7,(int)*(char *)(temp_v8 + 0xf21),(int)*(char *)(temp_v8 + 0xf22),
                       (int)*(short *)(temp_v8 + 0xf2c),(int)*(short *)(temp_v8 + 0xf2e),
                       (int)*(short *)(temp_v8 + 0xf30),0);
        }
      }
      else {
LAB_002f3fe8:
        naviSetMapSlotDefault(temp_v7);
      }
    }
LAB_002f3ff0:
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 0x10) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
