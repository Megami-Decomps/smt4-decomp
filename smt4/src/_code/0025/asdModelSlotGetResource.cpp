#include "common.h"
extern "C" {
struct DataValue { u8 unk00[8]; u32 value; };
struct DataValueGroup { u8 unk00[0x264]; DataValue *entries[8]; };
extern DataValueGroup DAT_004d9d88[];
/* Read the selected group's nested data value. */
u32 asdModelSlotGetResource(u32 entry,u32 group) { return DAT_004d9d88[group].entries[entry]->value; }
}
