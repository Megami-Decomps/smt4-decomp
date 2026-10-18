/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296718` (_code @ 0x296718, 0x2f0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern float FUN_00282ea0(unsigned int, unsigned int);
extern unsigned int FUN_002960c8(unsigned short, int, int);
extern unsigned int FUN_002961cc(int);
extern int FUN_002a89e4(int);
extern int FUN_002a8a08(void);
extern int FUN_002b66ec(void);
extern int FUN_002bf6d0(unsigned int, unsigned int);


void FUN_00296718(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  
  temp_v1 = FUN_002a8a08();
  temp_v2 = FUN_002bf6d0(0x28,0x14);
  temp_v3 = FUN_002b66ec();
  temp_v4 = FUN_002961cc((unsigned int)*(unsigned char *)(temp_v3 + 0x76) + (int)*(short *)(param_1 + 0xd49a));
  if (*(char *)(param_1 + 0xd4fe) != '\0') {
    temp_v0 = **(unsigned short **)(temp_v2 + 0xc);
  }
  else {
    temp_v5 = (float)FUN_00282ea0((*(unsigned int *)(param_1 + 0xd3a4) << 0x14) |
                                (*(unsigned int *)(param_1 + 0xd3a0) >> 0xc),
                                *(unsigned int *)(param_1 + 0xd3a4) >> 0xc);
    temp_v6 = (float)FUN_00282ea0(temp_v4,0);
    temp_v11 = (float)VectorSignedToFloat((int)**(short **)(temp_v2 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3)
    ;
    temp_v0 = (unsigned short)(int)((temp_v5 / temp_v6) * temp_v11);
  }
  *(unsigned short *)(param_1 + 0xd468) = temp_v0;
  temp_v3 = 0;
  do {
    temp_v10 = (int)*(char *)(temp_v1 + temp_v3 + 0x9108);
    if ((-1 < temp_v10) && (temp_v7 = FUN_002a89e4(temp_v10), temp_v7 != 0)) {
      temp_v9 = param_1 + temp_v10 * 2;
      temp_v4 = FUN_002960c8(*(unsigned short *)(temp_v7 + 0x46),
                           (unsigned int)*(unsigned char *)(temp_v7 + 0x48) + (int)*(short *)(temp_v9 + 0xd49c),
                           (int)*(char *)(param_1 + temp_v10 + 0xd531));
      if (*(char *)(param_1 + temp_v10 + 0xd4ff) != '\0') {
        temp_v0 = **(unsigned short **)(temp_v2 + 0xc);
      }
      else {
        temp_v10 = param_1 + temp_v10 * 8;
        temp_v8 = *(unsigned int *)(temp_v10 + 0xd3ac);
        temp_v5 = (float)FUN_00282ea0((*(unsigned int *)(temp_v10 + 0xd3a8) >> 0xc) | (temp_v8 << 0x14),
                                    temp_v8 >> 0xc);
        temp_v6 = (float)FUN_00282ea0(temp_v4,0);
        temp_v11 = (float)VectorSignedToFloat((int)**(short **)(temp_v2 + 0xc),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v0 = (unsigned short)(int)((temp_v5 / temp_v6) * temp_v11);
      }
      *(unsigned short *)(temp_v9 + 0xd46a) = temp_v0;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 3);
  temp_v2 = FUN_002bf6d0(0x28,0x5f);
  temp_v3 = 0;
  do {
    if (((((*(char *)(temp_v1 + 0x9108) < '\0') ||
          (*(char *)(temp_v1 + 0x9108) != *(char *)(temp_v1 + temp_v3 + 0x90f0))) &&
         ((*(char *)(temp_v1 + 0x9109) < '\0' ||
          (*(char *)(temp_v1 + 0x9109) != *(char *)(temp_v1 + temp_v3 + 0x90f0))))) &&
        (((*(char *)(temp_v1 + 0x910a) < '\0' ||
          (*(char *)(temp_v1 + 0x910a) != *(char *)(temp_v1 + temp_v3 + 0x90f0))) &&
         (temp_v10 = (int)*(char *)(temp_v1 + temp_v3 + 0x90f0), -1 < temp_v10)))) &&
       (temp_v7 = FUN_002a89e4(temp_v10), temp_v7 != 0)) {
      temp_v9 = param_1 + temp_v10 * 2;
      temp_v4 = FUN_002960c8(*(unsigned short *)(temp_v7 + 0x46),
                           (unsigned int)*(unsigned char *)(temp_v7 + 0x48) + (int)*(short *)(temp_v9 + 0xd49c),
                           (int)*(char *)(param_1 + temp_v10 + 0xd531));
      if (*(char *)(param_1 + temp_v10 + 0xd4ff) != '\0') {
        temp_v0 = **(unsigned short **)(temp_v2 + 0xc);
      }
      else {
        temp_v10 = param_1 + temp_v10 * 8;
        temp_v8 = *(unsigned int *)(temp_v10 + 0xd3ac);
        temp_v5 = (float)FUN_00282ea0((*(unsigned int *)(temp_v10 + 0xd3a8) >> 0xc) | (temp_v8 << 0x14),
                                    temp_v8 >> 0xc);
        temp_v6 = (float)FUN_00282ea0(temp_v4,0);
        temp_v11 = (float)VectorSignedToFloat((int)**(short **)(temp_v2 + 0xc),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v0 = (unsigned short)(int)((temp_v5 / temp_v6) * temp_v11);
      }
      *(unsigned short *)(temp_v9 + 0xd46a) = temp_v0;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x18);
  return;
}
