/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003273ac` (_code @ 0x3273ac, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002296b0(int);

typedef struct fn_003273ac_arg0 fn_003273ac_arg0;
struct fn_003273ac_arg0 {
    unsigned char pad_0x0[0x4];
    ushort field_0x4; /* +0x4 */
    ushort field_0x6; /* +0x6 */
    short field_0x8; /* +0x8 */
    unsigned char pad_0xa[0x30];
    undefined1 field_0x3a; /* +0x3a */
    undefined1 field_0x3b; /* +0x3b */
    unsigned char pad_0x3c[0x789];
    undefined1 field_0x7c5; /* +0x7c5 */
    unsigned char pad_0x7c6[0x63a];
    undefined1 field_0xe00; /* +0xe00 */
    undefined1 field_0xe01; /* +0xe01 */
    char field_0xe02; /* +0xe02 */
    char field_0xe03; /* +0xe03 */
    char field_0xe04; /* +0xe04 */
    char field_0xe05; /* +0xe05 */
    unsigned char pad_0xe06[0x3];
    undefined1 field_0xe09; /* +0xe09 */
    undefined1 field_0xe0a; /* +0xe0a */
    undefined1 field_0xe0b; /* +0xe0b */
};

extern unsigned char DAT_005813a4; /* 0x5813a4 */
extern char s_____X___005813ae[17]; /* 0x5813ae */

extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_002296b0. */
extern int dataTable4CGetEntry(fn_003273ac_arg0 *);


void FUN_003273ac(fn_003273ac_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  
  temp_v2 = gameFlagsGetBlock();
  temp_v3 = dataTable4CGetEntry(param_1);
  temp_v0 = *(short *)(temp_v3 + 8) * 0x10;
  temp_v6 = *(int *)(&DAT_005813a4 + temp_v0);
  *(unsigned char *)(temp_v2 + 0xe04) = *(unsigned char *)(temp_v0 + 0x5813a8);
  *(unsigned char *)(temp_v2 + 0xe05) = *(unsigned char *)(temp_v0 + 0x5813a9);
  FUN_002296b0(1);
  temp_v7 = 0;
  if (*(unsigned char *)(temp_v2 + 0x7c5) != 0xff) {
    *(unsigned char *)(temp_v2 + 0x7c5) = 0xff;
  }
  if ('\0' < *(char *)(temp_v2 + 0xe05)) {
    do {
      temp_v4 = 0;
      if ('\0' < *(char *)(temp_v2 + 0xe04)) {
        temp_v5 = temp_v2 + temp_v7 * 0x78;
        do {
          temp_v8 = temp_v7 * 0xf + temp_v4;
          temp_v9 = temp_v5 + temp_v4 * 8;
          if (*(char *)(temp_v6 + temp_v8) != '\x01') {
            *(unsigned char *)(temp_v9 + 0x3c) = 2;
          }
          else {
            *(unsigned char *)(temp_v9 + 0x3c) = 1;
          }
          temp_v1 = *(char *)(temp_v6 + temp_v8);
          if (temp_v1 != '\x02') {
            temp_v8 = temp_v5 + temp_v4 * 8;
            if (temp_v1 != '\x03') {
              *(unsigned char *)(temp_v8 + 0x43) = 0;
            }
            else {
              *(unsigned char *)(temp_v8 + 0x43) = 2;
              *(char *)(temp_v2 + 0xe08) = *(char *)(temp_v2 + 0xe08) + '\x01';
            }
          }
          else {
            *(unsigned char *)(temp_v5 + temp_v4 * 8 + 0x43) = 1;
            *(char *)(temp_v2 + 0xe08) = *(char *)(temp_v2 + 0xe08) + '\x01';
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < *(char *)(temp_v2 + 0xe04));
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < *(char *)(temp_v2 + 0xe05));
  }
  temp_v7 = (int)s_____X___005813ae[temp_v0];
  *(char *)(temp_v2 + 0xe00) = s_____X___005813ae[temp_v0];
  temp_v1 = s_____X___005813ae[temp_v0 + 1];
  *(char *)(temp_v2 + 0xe01) = temp_v1;
  temp_v6 = temp_v7;
  if (0 < temp_v7) {
    temp_v6 = (int)temp_v1;
  }
  *(char *)(temp_v2 + 0xe02) = s_____X___005813ae[temp_v0 + 2];
  *(char *)(temp_v2 + 0xe03) = s_____X___005813ae[temp_v0 + 3];
  if (0 < temp_v6) {
    *(unsigned char *)(temp_v2 + temp_v1 * 0x78 + temp_v7 * 8 + 0x3e) = 1;
  }
  *(unsigned char *)(temp_v2 + *(char *)(temp_v2 + 0xe03) * 0x78 + *(char *)(temp_v2 + 0xe02) * 8 + 0x3f) = 1
  ;
  *(char *)(temp_v2 + 0x3a) = (char)*(unsigned short *)(temp_v3 + 4);
  *(char *)(temp_v2 + 0x3b) = (char)*(unsigned short *)(temp_v3 + 6);
  *(unsigned char *)(temp_v2 + 0xe09) = 1;
  *(char *)(temp_v2 + 0xe0a) = s_____X___005813ae[temp_v0 + 4];
  *(char *)(temp_v2 + 0xe0b) = s_____X___005813ae[temp_v0 + 5];
  return;
}

} /* extern "C" */
