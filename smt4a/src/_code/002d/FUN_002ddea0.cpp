/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ddea0` (_code @ 0x2ddea0, 0x260 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00244c70(...);
int sub68OwnerCall5(void);
int FUN_00357b70(int, int, int, int, int, int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

#ifndef ROMWRIGHT_STORAGE_s__a_a_00587f08_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s__a_a_00587f08_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__a_a_00587f08_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s__a_a_00587f08_9_1_size_check[(sizeof(union romwright_storage_s__a_a_00587f08_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s__a_a_00587f08_9_1_u1_width_check[(sizeof(((union romwright_storage_s__a_a_00587f08_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__a_a_00587f08_9_1_s1_width_check[(sizeof(((union romwright_storage_s__a_a_00587f08_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__a_a_00587f08_9_1 s__a_a_00587f08; /* 0x587f08 */

/* Supplied declaration required: FUN_00244c70. */
extern int FUN_0033aa6c(int);
/* Supplied declaration required: sub68OwnerCall5. */
/* Supplied declaration required: FUN_00357b70. */
extern int FUN_00364484(int);


void FUN_002ddea0(void)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  sub68OwnerCall5();
  temp_v4 = 0;
  do {
    temp_v3 = (*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v4 * 0x58;
    if (*(char *)(temp_v3 + 0xa4) != '\0') {
      temp_v0 = *(short *)(temp_v3 + 200);
      if ((((!(temp_v0 == 3 || temp_v0 == 4)) && (!(temp_v0 == 5 || temp_v0 == 7))) &&
          (!(temp_v0 == 0xd || temp_v0 == 0xf))) &&
         ((!(temp_v0 == 8 || temp_v0 == 9) && (!(temp_v0 == 10 || temp_v0 == 0x10))))) {
        if (*(int *)(temp_v3 + 0xa8) == 1) {
          if (*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 4) < 100) {
            if (!((temp_v0 == 1 || temp_v0 == 0xb) || temp_v0 == 0xc)) {
              if (*(int *)(temp_v3 + 0xf0) == 0) {
                FUN_00244c70(0,0x1d,0xffffffff,(int)*(short *)(temp_v3 + 0xc6));
              }
            }
            else {
              temp_v2 = FUN_0033aa6c((int)(short)*(unsigned int *)(temp_v3 + 0xcc));
              if (temp_v2 != 0) {
                FUN_00244c70(0,0x23,0xffffffff,(int)*(short *)(temp_v3 + 0xc6));
                if (*(int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xce0) < 0x10) {
                  FUN_00357b70(*(int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xce0),
                               (int)*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 4),
                               (int)*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 6),
                               (int)*(float *)(temp_v3 + 0xb0),(int)*(float *)(temp_v3 + 0xb4),
                               (int)*(float *)(temp_v3 + 0xb8),1);
                  temp_v1 = (*(unsigned int *)&s__a_a_00587f08.u1[0]);
                  *(unsigned int *)(temp_v3 + 0xf8) = *(unsigned int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0xce0);
                  *(int *)(temp_v1 + 0xce0) = *(int *)(temp_v1 + 0xce0) + 1;
                }
              }
              else {
                FUN_00244c70(0,0x22,0xffffffff,(int)*(short *)(temp_v3 + 0xc6));
              }
            }
          }
          else {
            FUN_00244c70(0,0x31,0xffffffff,(int)*(short *)(temp_v3 + 0xc6));
          }
        }
      }
      else {
        temp_v2 = FUN_00364484((int)(short)*(unsigned int *)(temp_v3 + 0xcc));
        if (temp_v2 == 0) {
          if (*(short *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 4) < 100) {
            temp_v0 = *(short *)(temp_v3 + 200);
            if (!((temp_v0 == 7 || temp_v0 == 0xf) || temp_v0 == 0x10)) {
              FUN_00244c70(0,0x1e,0xffffffff,(int)*(short *)(temp_v3 + 0xc6));
            }
            else {
              FUN_00244c70(0,0x1f,0xffffffff,(int)*(short *)(temp_v3 + 0xc6));
            }
          }
          else {
            FUN_00244c70(0,0x30,0xffffffff,(int)*(short *)(temp_v3 + 0xc6));
          }
        }
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x20);
  return;
}

} /* extern "C" */
