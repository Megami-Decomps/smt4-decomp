/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundPlayer_Update` (_code @ 0x12f448, 0x140 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012fea0(int *);
int FUN_002c5d5c(unsigned char *, unsigned char *, int, int);
int UnsignedDoesSaturate(int, int);
int UnsignedSaturate(int, int);
int nw_ut_internal_LinkListImpl_erase_2BAE30(...);
int nw_ut_internal_LinkListImpl_insert(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char LAB_0014490c; /* 0x14490c */
extern unsigned int DAT_0047353c; /* 0x47353c */
extern unsigned char DAT_004ead80; /* 0x4ead80 */

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
/* Supplied declaration required: FUN_0012fea0. */
extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: FUN_002c5d5c. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2BAE30. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void nw_snd_SoundPlayer_Update(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  int *piVar6;
  
  piVar5 = *(int **)(param_1 + 4);
  if (piVar5 != (int *)(param_1 + 4)) {
    do {
      piVar6 = (int *)*piVar5;
      FUN_0012fea0(piVar5 + -0x37);
      piVar5 = piVar6;
    } while (piVar6 != (int *)(param_1 + 4));
  }
  if (*(unsigned int *)(param_1 + 0xc) >= 2) {
    if (((DAT_0047353c & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_0047353c), temp_v0 != 0)) {
      FUN_002c5d5c(&DAT_004ead80,&LAB_0014490c,0xc,0x80);
    }
    while (*(int *)(param_1 + 0xc) != 0) {
      temp_v2 = *(int *)(param_1 + 0x10);
      nw_ut_internal_LinkListImpl_erase_2BAE30(param_1 + 0xc);
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 - 0x4c) + *(int *)(temp_v2 - 0x94);
      temp_v0 = UnsignedSaturate(temp_v1,7);
      UnsignedDoesSaturate(temp_v1,7);
      nw_ut_internal_LinkListImpl_insert(&DAT_004ead80 + temp_v0 * 0xc,temp_v0 * 0xc + 0x4ead84,temp_v2);
    }
    temp_v0 = 0;
    do {
      while (*(int *)(&DAT_004ead80 + temp_v0 * 0xc) != 0) {
        temp_v3 = *(unsigned int *)(temp_v0 * 0xc + 0x4ead84);
        nw_ut_internal_LinkListImpl_erase_2BAE30();
        nw_ut_internal_LinkListImpl_insert(param_1 + 0xc,param_1 + 0x10,temp_v3);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x80);
  }
  return;
}

} /* extern "C" */
