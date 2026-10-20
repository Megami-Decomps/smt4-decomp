/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00331efc` (_code @ 0x331efc, 0x868 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c0b98(...);
int FUN_002c0dbc(int, int);
int VectorSignedToFloat(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
} void_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_002c0b98. */
/* Supplied declaration required: FUN_002c0dbc. */


void FUN_00331efc(void)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  
  temp_v2 = gameFlagsGetBlock();
  VectorSignedToFloat((int)*(char *)(temp_v2 + 0xe04),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(char *)(temp_v2 + 0xe05),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002c0dbc(0,0);
  temp_v5 = 1;
  if (temp_v5 < *(char *)(temp_v2 + 0xe05) - 1) {
    do {
      temp_v1 = 0;
      temp_v4 = 1;
      VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      if ('\x01' < *(char *)(temp_v2 + 0xe04)) {
        do {
          temp_v3 = temp_v2 + temp_v5 * 0x78 + temp_v4 * 8;
          if (*(char *)(temp_v3 + 0x3c) != '\x01') {
            if (*(char *)(temp_v3 + 0x3c) == '\x02') {
              if (*(char *)(temp_v3 - 0x3c) != '\x01') {
                if ((*(char *)(temp_v3 - 0x3c) == '\x02') && (temp_v1)) {
                  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_002c0b98(0);
                  temp_v1 = 0;
                  FUN_002c0b98(0);
                }
              }
              else if (!temp_v1) {
                temp_v1 = 1;
                if (*(char *)(temp_v3 + 0x34) != '\x01') {
                  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_002c0b98(0);
                }
                else {
                  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
                }
              }
            }
          }
          else if (temp_v1) {
            VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002c0b98(0);
            temp_v1 = 0;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < *(char *)(temp_v2 + 0xe04));
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(char *)(temp_v2 + 0xe05) - 1);
  }
  temp_v5 = 1;
  if (temp_v5 < *(char *)(temp_v2 + 0xe05) - 1) {
    do {
      temp_v1 = 0;
      temp_v4 = 1;
      VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      if ('\x01' < *(char *)(temp_v2 + 0xe04)) {
        do {
          temp_v3 = temp_v2 + temp_v5 * 0x78 + temp_v4 * 8;
          if (*(char *)(temp_v3 + 0x3c) != '\x01') {
            if (*(char *)(temp_v3 + 0x3c) == '\x02') {
              if (*(char *)(temp_v3 + 0xb4) != '\x01') {
                if ((*(char *)(temp_v3 + 0xb4) == '\x02') && (temp_v1)) {
                  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_002c0b98(0);
                  temp_v1 = 0;
                  FUN_002c0b98(0);
                }
              }
              else if (!temp_v1) {
                temp_v1 = 1;
                if (*(char *)(temp_v3 + 0x34) != '\x01') {
                  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_002c0b98(0);
                }
                else {
                  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
                }
              }
            }
          }
          else if (temp_v1) {
            VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002c0b98(0);
            temp_v1 = 0;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < *(char *)(temp_v2 + 0xe04));
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(char *)(temp_v2 + 0xe05) - 1);
  }
  temp_v5 = 1;
  if (temp_v5 < *(char *)(temp_v2 + 0xe04) - 1) {
    do {
      temp_v1 = 0;
      temp_v4 = 1;
      VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      if ('\x01' < *(char *)(temp_v2 + 0xe05)) {
        do {
          temp_v3 = temp_v2 + temp_v4 * 0x78 + temp_v5 * 8;
          temp_v0 = *(char *)(temp_v3 + 0x3c);
          if (temp_v0 != '\x01') {
            if (temp_v0 == '\x02') {
              temp_v0 = *(char *)(temp_v3 + 0x34);
              if (temp_v0 != '\x01') {
                if ((temp_v0 == '\x02') && (temp_v1)) {
                  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_002c0b98(0);
                  temp_v1 = 0;
                }
              }
              else if (!temp_v1) {
                temp_v1 = 1;
                VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
              }
            }
          }
          else if (temp_v1) {
            VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002c0b98(0);
            temp_v1 = 0;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < *(char *)(temp_v2 + 0xe05));
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(char *)(temp_v2 + 0xe04) - 1);
  }
  temp_v5 = 1;
  if (temp_v5 < *(char *)(temp_v2 + 0xe04) - 1) {
    do {
      temp_v1 = 0;
      temp_v4 = 1;
      VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      if ('\x01' < *(char *)(temp_v2 + 0xe05)) {
        do {
          temp_v3 = temp_v2 + temp_v4 * 0x78 + temp_v5 * 8;
          temp_v0 = *(char *)(temp_v3 + 0x3c);
          if (temp_v0 != '\x01') {
            if (temp_v0 == '\x02') {
              temp_v0 = *(char *)(temp_v3 + 0x44);
              if (temp_v0 != '\x01') {
                if ((temp_v0 == '\x02') && (temp_v1)) {
                  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_002c0b98(0);
                  temp_v1 = 0;
                }
              }
              else if (!temp_v1) {
                temp_v1 = 1;
                VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
              }
            }
          }
          else if (temp_v1) {
            VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002c0b98(0);
            temp_v1 = 0;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < *(char *)(temp_v2 + 0xe05));
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(char *)(temp_v2 + 0xe04) - 1);
  }
  return;
}

} /* extern "C" */
