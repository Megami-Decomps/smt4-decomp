#include "romwright_types.h"

extern "C" {

typedef struct fn_0037a4fc_arg0 fn_0037a4fc_arg0;
struct fn_0037a4fc_arg0 {
    unsigned char pad_0x0[0x34];
    void *field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x18];
    byte field_0x50; /* +0x50 */
    byte field_0x51; /* +0x51 */
};

extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);


void FUN_0037a4fc(fn_0037a4fc_arg0 *param_1)

{
  unsigned char temp_v0;
  unsigned int temp_v1;
  void *pvVar3;
  unsigned char temp_v2;
  
  temp_v2 = param_1->field_0x51 != 0;
  temp_v0 = 0;
  if (temp_v2) {
    temp_v0 = param_1->field_0x50;
  }
  if (temp_v2 && temp_v0 != 0) {
    pvVar3 = param_1->field_0x34;
    temp_v1 = *(unsigned int *)((int)pvVar3 + 4);
    if ((temp_v1 & 0xfffffffe) != 0) {
      nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v1 & 0xfffffffe);
      *(unsigned int *)((int)pvVar3 + 4) = 0;
    }
    param_1->field_0x50 = 0;
  }
  return;
}

} /* extern "C" */
