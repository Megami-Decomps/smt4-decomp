/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b945c` (_code @ 0x2b945c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(...);

typedef struct fn_002b945c_arg0 fn_002b945c_arg0;
struct fn_002b945c_arg0 {
    unsigned char pad_0x0[0x2];
    ushort field_0x2; /* +0x2 */
    ushort field_0x4; /* +0x4 */
    ushort field_0x6; /* +0x6 */
    unsigned char pad_0x8[0x32];
    undefined1 field_0x3a; /* +0x3a */
    undefined1 field_0x3b; /* +0x3b */
    unsigned char pad_0x3c[0x789];
    undefined1 field_0x7c5; /* +0x7c5 */
    undefined1 field_0x7c6; /* +0x7c6 */
    unsigned char pad_0x7c7[0xdfd];
    undefined4 field_0x15c4; /* +0x15c4 */
    unsigned char pad_0x15c8[0xa0];
    undefined2 field_0x1668; /* +0x1668 */
    undefined2 field_0x166a; /* +0x166a */
};

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned short FUN_0014bef4(unsigned int);
extern int FUN_00162e8c(void);
extern int dataTable4CGetEntry(fn_002b945c_arg0 *);


void FUN_002b945c(fn_002b945c_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  
  temp_v2 = FUN_00162e8c();
  temp_v3 = dataTable4CGetEntry(param_1);
  *(unsigned char *)(temp_v2 + 0x7c6) = 1;
  *(char *)(temp_v2 + 0x3a) = (char)*(unsigned short *)(temp_v3 + 4);
  temp_v4 = VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(char *)(temp_v2 + 0x3b) = (char)*(unsigned short *)(temp_v3 + 6);
  *(char *)(temp_v2 + 0x7c5) = (char)*(unsigned short *)(temp_v3 + 2);
  *(unsigned char *)(temp_v2 + 0x7c6) = 100;
  *(unsigned int *)(temp_v2 + 0x1520) = 0;
  *(unsigned int *)(temp_v2 + 0x15c4) = temp_v4;
  temp_v1 = FUN_0014bef4(4);
  *(unsigned short *)(temp_v2 + 0x1668) = temp_v1;
  temp_v1 = FUN_0014bef4(100);
  *(unsigned short *)(temp_v2 + 0x166a) = temp_v1;
  if (*(char *)(temp_v2 + 0x7c5) == '\0') {
    temp_v0 = 0xff;
  }
  else {
    if (*(char *)(temp_v2 + 0x7c5) < '\x10') {
      return;
    }
    temp_v0 = 0xf;
  }
  *(unsigned char *)(temp_v2 + 0x7c5) = temp_v0;
  return;
}

} /* extern "C" */
