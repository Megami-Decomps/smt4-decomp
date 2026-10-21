/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00416168` (_code @ 0x416168, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match7_MaterialTextures.h"

extern "C" {

int libc_strcmp(int, unsigned int);

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

/* Supplied declaration required: libc_strcmp. */


unsigned int FUN_00416168(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  
  temp_v9 = 0;
  temp_v0 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x3c) + 4);
  temp_v12 = 0;
  temp_v1 = (unsigned int)*(unsigned short *)(*(int *)(param_2 + 0x3c) + 0x28);
  if (temp_v0 != 0) {
    do {
      temp_v11 = 0;
      temp_v2 = *(unsigned int *)(**(int **)(param_1 + 0x3c) + temp_v12 * 4);
      if (temp_v1 != 0) {
        do {
          temp_v6 = *(int *)(temp_v2 + 0x34);
          temp_v8 = *(int *)(*(int *)(*(int *)(param_2 + 0x3c) + 0x24) + temp_v11 * 4);
          temp_v10 = temp_v6 + (unsigned int)*(unsigned short *)(temp_v2 + 0x38) * 0x2c;
          for (; temp_v6 != temp_v10; temp_v6 = temp_v6 + 0x2c) {
            temp_v5 = 0;
            do {
              temp_v7 = temp_v6 + temp_v5 * 4;
              temp_v3 = *(int *)(temp_v7 + 0x1c);
              if (temp_v3 != 0 &&
                  libc_strcmp(temp_v3, *(unsigned int *)(temp_v8 + 0x1c)) == 0) {
                temp_v4 = gfxModelBindTextureByName(
                    reinterpret_cast<ModelTextureBindings*>(temp_v2),
                    reinterpret_cast<const char*>(*(unsigned int *)(temp_v7 + 0x1c)),
                    reinterpret_cast<NamedModelTexture*>(temp_v8),
                    reinterpret_cast<u8*>(*(unsigned int *)(param_1 + 0x7c)),
                    reinterpret_cast<const u8*>(*(unsigned int *)(param_1 + 100)));
                temp_v9 = temp_v9 | temp_v4;
              }
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 < 3);
          }
          temp_v11 = temp_v11 + 1;
        } while (temp_v11 < (int)temp_v1);
      }
      temp_v12 = temp_v12 + 1;
    } while (temp_v12 < (int)temp_v0);
  }
  return temp_v9;
}

} /* extern "C" */
