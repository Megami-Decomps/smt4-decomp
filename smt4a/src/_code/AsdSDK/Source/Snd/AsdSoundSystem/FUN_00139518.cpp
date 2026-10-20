/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139518` (_code @ 0x139518, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00141b24(void);
int FUN_00146dc8(void);
int FUN_00146e30(void);
int FUN_00147120(void);
int FUN_00147b84(void);
int FUN_00150784(void);
int FUN_00152bf8(int);
int FUN_0019a5a0(void);
int coproc_moveto_Data_Memory_Barrier(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0063e6b4; /* 0x63e6b4 */
extern unsigned int DAT_0063f4c8; /* 0x63f4c8 */
extern unsigned int DAT_0063f4cc; /* 0x63f4cc */
extern unsigned int DAT_0063f4d0; /* 0x63f4d0 */
extern unsigned int DAT_0063f4d4; /* 0x63f4d4 */
extern unsigned int DAT_0063f4d8; /* 0x63f4d8 */
extern unsigned int DAT_0063f4dc; /* 0x63f4dc */
extern unsigned char DAT_0063f4e0; /* 0x63f4e0 */
extern unsigned char DAT_0063f4e1; /* 0x63f4e1 */
extern unsigned char DAT_0063f4e2; /* 0x63f4e2 */
extern int DAT_0063f4e4; /* 0x63f4e4 */
extern unsigned int DAT_0063f4e8; /* 0x63f4e8 */
extern unsigned int DAT_0063f4f8; /* 0x63f4f8 */
extern signed char DAT_0063f4fd; /* 0x63f4fd */

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Memory_Barrier (CALLOTHER). */
/* Supplied declaration required: FUN_00141b24. */
/* Supplied declaration required: FUN_00146dc8. */
/* Supplied declaration required: FUN_00146e30. */
/* Supplied declaration required: FUN_00147120. */
/* Supplied declaration required: FUN_00147b84. */
/* Supplied declaration required: FUN_00150784. */
/* Supplied declaration required: FUN_00152bf8. */
/* Supplied declaration required: FUN_0019a5a0. */
extern int FUN_001b1f04(void);


void FUN_00139518(void)

{
/* irregular: irregular input(s): in_r3; 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_r3;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  FUN_00150784();
  FUN_00141b24();
  DAT_0063f4cc = 0;
  DAT_0063f4c8 = 0;
  DAT_0063f4d4 = 0;
  DAT_0063f4d8 = 0;
  DAT_0063f4d0 = 0;
  DAT_0063f4dc = 0;
  DAT_0063f4e1 = 0;
  DAT_0063f4e0 = 0;
  DAT_0063f4e2 = 0;
  if (DAT_0063f4fd != '\0') {
    temp_v0 = FUN_001b1f04();
    *(unsigned int *)(temp_v0 + 0x1e8) = 0;
    coproc_moveto_Data_Memory_Barrier(0);
    *(unsigned int *)(temp_v0 + 0x1ec) = 0;
    temp_v2 = 0;
    if ((int)temp_v2 < (int)DAT_0063f4e8) {
      do {
        temp_v3 = -1 < (int)temp_v2;
        temp_v4 = temp_v2 == 0;
        if (temp_v3) {
          in_r3 = DAT_0063f4e8;
        }
        if (temp_v3) {
          temp_v4 = in_r3 == temp_v2;
        }
        temp_v0 = 0;
        if ((!temp_v4 && (temp_v3 && (int)temp_v2 <= (int)in_r3)) &&
           (temp_v0 = DAT_0063f4e4, 0 < (int)temp_v2)) {
          if ((temp_v2 & 1) != 0) {
            temp_v0 = *(int *)(DAT_0063f4e4 + 0xd8);
          }
          for (temp_v1 = (int)temp_v2 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
            temp_v0 = *(int *)(*(int *)(temp_v0 + 0xd8) + 0xd8);
          }
        }
        FUN_00152bf8(temp_v0);
        temp_v2 = temp_v2 + 1;
      } while ((int)temp_v2 < (int)DAT_0063f4e8);
    }
    DAT_0063f4fd = '\0';
    DAT_0063f4f8 = 0xffffffff;
  }
  if (DAT_0063e6b4 != 0) {
    FUN_0019a5a0();
  }
  FUN_00147b84();
  FUN_00147120();
  FUN_00146dc8();
  FUN_00146e30();
  return;
}

} /* extern "C" */
