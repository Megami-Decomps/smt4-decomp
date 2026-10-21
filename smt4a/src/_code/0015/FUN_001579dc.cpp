/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001579dc` (_code @ 0x1579dc, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00158a40(int, unsigned int, unsigned int, unsigned int);
int FUN_0016c744(int);
int FUN_00177e6c(int, int);
int asdModelCommitCommandRange(int, int);
int FUN_0019eafc(void);
int nn_gr_CTR_Shader_SearchBindSymbol(...);

extern unsigned char LAB_00157aa4; /* 0x157aa4 */
extern unsigned char LAB_00157ab0; /* 0x157ab0 */
extern unsigned char LAB_00157ab8; /* 0x157ab8 */

/* Supplied declaration required: FUN_00158a40. */
/* Supplied declaration required: FUN_0016c744. */
/* Supplied declaration required: FUN_00177e6c. */
/* Supplied declaration required: asdModelCommitCommandRange. */
/* Supplied declaration required: FUN_0019eafc. */
/* Supplied declaration required: nn_gr_CTR_Shader_SearchBindSymbol. */


unsigned int FUN_001579dc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_0019eafc();
  FUN_00158a40(param_1 + 0x138,param_2,param_4,0xffffffff);
  *(unsigned int *)(param_1 + 0x128) = param_2;
  *(unsigned char *)(param_1 + 300) = 0;
  nn_gr_CTR_Shader_SearchBindSymbol(param_1 + 0x138,param_1 + 0x12a20,&LAB_00157aa4);
  nn_gr_CTR_Shader_SearchBindSymbol(param_1 + 0x138,param_1 + 0x12a30,&LAB_00157ab0);
  nn_gr_CTR_Shader_SearchBindSymbol(param_1 + 0x138,param_1 + 0x12a28,&LAB_00157ab8);
  nn_gr_CTR_Shader_SearchBindSymbol(param_1 + 0x138,param_1 + 0x12a38,"uMatrix");
  temp_v0 = param_1 + 0x138;
  nn_gr_CTR_Shader_SearchBindSymbol(temp_v0,param_1 + 0x12a40,"uMaterialColor");
  FUN_0019eafc();
  temp_v1 = param_1 + 0x138;
  FUN_00177e6c(temp_v1,temp_v0);
  asdModelCommitCommandRange(temp_v0,temp_v1);
  FUN_0016c744(param_1);
  return 1;
}

} /* extern "C" */
