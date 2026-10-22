#include "common.h"
struct Record {u8 unk00[65];u8 category;};
extern "C" {
Record *dataTable8FindRecord(u32 id);
/* Tests either accepted record category in the supported ID ranges. */
int FUN_0047fbb4(u32 id){if(id-1<=59 || id-1951<=63){u32 category=dataTable8FindRecord(id)->category;if(category==2||category==3)return 1;}return 0;}
}
