#include "common.h"

extern "C" {

struct Record { u8 data[100]; };
struct SaveWork { u8 unk00000[0x27184]; Record records[32]; };
struct DataTable { u8 unk00[0x88]; SaveWork status; };
struct GameBlocks { u32 unk00; DataTable *table; };
extern GameBlocks g_gameDataBlocks;
void rt_aeabi_memclr(void *data, u32 size);

void gameDataClearSaveRecord(u32 index)
{
    if (index < 32) {
        SaveWork *status = &g_gameDataBlocks.table->status;
        Record *record = &status->records[index];
        rt_aeabi_memclr(record, sizeof(Record));
    }
}

} /* extern "C" */
