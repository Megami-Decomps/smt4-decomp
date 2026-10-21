#include "shard/W6_W6Match3_ContentWordList.h"

extern "C" Entry0035dd74* contentEntryFindById(u32 id);
extern "C" void rt_memclr(void* destination, u32 size);

extern "C" u32 contentBuildWordList(u32, u32 id, ContentWordList* output)
{
    const Entry0035dd74* entry = contentEntryFindById(id);
    if (entry != NULL) {
        rt_memclr(output, sizeof(*output));
        output->value = entry->value;
        for (s32 index = 0; index < 12; ++index) {
            u16 item = entry->ids[index];
            if (item != 0) {
                output->ids[index] = item;
            }
        }
        return 1;
    }
    return 0;
}
