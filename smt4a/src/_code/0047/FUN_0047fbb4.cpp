#include "common.h"
struct Record {u8 unk00[65];u8 category;};
extern "C" {
Record *FUN_00192550(u32 id);
/* Tests either accepted record category in the supported ID ranges. */
int FUN_0047fbb4(u32 id){if(id-1<=59 || id-1951<=63){u32 category=FUN_00192550(id)->category;if(category==2||category==3)return 1;}return 0;}
}
